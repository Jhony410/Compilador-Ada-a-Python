%{
#include "ada.tab.h"
#include <string.h>
#include <stdlib.h>

int line_num = 1;
int column_num = 1;

// Función para manejar strings de manera segura
char* safe_strdup(const char* str) {
    if (!str) return NULL;
    char* result = malloc(strlen(str) + 1);
    if (result) strcpy(result, str);
    return result;
}
%}

%option noyywrap
%option case-insensitive

DIGIT       [0-9]
LETTER      [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT}|_)*
INTEGER     {DIGIT}+
REAL        {DIGIT}+\.{DIGIT}+([eE][+-]?{DIGIT}+)?
STRING      \"([^\\\"]|\\.)*\"
COMMENT     --.*$
WHITESPACE  [ \t]+

%%

{COMMENT}       { /* Ignorar comentarios */ }
{WHITESPACE}    { column_num += yyleng; /* ignorar espacios */ }

"procedure"     { column_num += yyleng; return PROCEDURE; }
"function"      { column_num += yyleng; return FUNCTION; }
"is"           { column_num += yyleng; return IS; }
"begin"        { column_num += yyleng; return BEGIN_KW; }
"end"          { column_num += yyleng; return END_KW; }
"return"       { column_num += yyleng; return RETURN_KW; }

"if"           { column_num += yyleng; return IF_KW; }
"then"         { column_num += yyleng; return THEN_KW; }
"else"         { column_num += yyleng; return ELSE_KW; }
"elsif"        { column_num += yyleng; return ELSIF_KW; }
"end"[ \t]+"if" { column_num += yyleng; return END_IF; }

"while"        { column_num += yyleng; return WHILE_KW; }
"loop"         { column_num += yyleng; return LOOP_KW; }
"for"          { column_num += yyleng; return FOR_KW; }
"in"           { column_num += yyleng; return IN_KW; }
"end"[ \t]+"loop" { column_num += yyleng; return END_LOOP; }

"integer"      { column_num += yyleng; return INTEGER_TYPE; }
"string"       { column_num += yyleng; return STRING_TYPE; }
"boolean"      { column_num += yyleng; return BOOLEAN_TYPE; }
"float"        { column_num += yyleng; return FLOAT_TYPE; }

"true"         { column_num += yyleng; return TRUE_VAL; }
"false"        { column_num += yyleng; return FALSE_VAL; }

"put_line"     { column_num += yyleng; return PUT_LINE; }
"put"          { column_num += yyleng; return PUT; }
"get_line"     { column_num += yyleng; return GET_LINE; }

{IDENTIFIER}   { 
    column_num += yyleng;
    yylval.str = safe_strdup(yytext); 
    return IDENTIFIER; 
}

{INTEGER}      { 
    column_num += yyleng;
    yylval.num = atoi(yytext); 
    return NUMBER; 
}

{REAL}         {
    column_num += yyleng;
    yylval.real = atof(yytext);
    return REAL_NUMBER;
}

{STRING}       { 
    column_num += yyleng;
    yylval.str = safe_strdup(yytext); 
    return STRING_LITERAL; 
}

":="           { column_num += yyleng; return ASSIGN; }
":"            { column_num += yyleng; return COLON; }
";"            { column_num += yyleng; return SEMICOLON; }
","            { column_num += yyleng; return COMMA; }
"("            { column_num += yyleng; return LPAREN; }
")"            { column_num += yyleng; return RPAREN; }

"+"            { column_num += yyleng; return PLUS; }
"-"            { column_num += yyleng; return MINUS; }
"*"            { column_num += yyleng; return MULTIPLY; }
"/"            { column_num += yyleng; return DIVIDE; }
"mod"          { column_num += yyleng; return MOD; }

"="            { column_num += yyleng; return EQ; }
"/="           { column_num += yyleng; return NE; }
"<="           { column_num += yyleng; return LE; }
">="           { column_num += yyleng; return GE; }
"<"            { column_num += yyleng; return LT; }
">"            { column_num += yyleng; return GT; }

"and"          { column_num += yyleng; return AND; }
"or"           { column_num += yyleng; return OR; }
"not"          { column_num += yyleng; return NOT; }

".."           { column_num += yyleng; return RANGE; }

\n             { 
    line_num++; 
    column_num = 1; 
}

.              { 
    // En lugar de generar error, solo advertir y continuar
    fprintf(stderr, "# Advertencia: carácter desconocido '%c' en línea %d, columna %d\n", 
            yytext[0], line_num, column_num);
    column_num++;
    // Retornar el carácter tal como está para que el parser lo maneje
}

%%