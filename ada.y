%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
void yyerror(const char *s);
extern int line_num;
extern FILE *yyin;

void generate_python_header();
void generate_python_footer();
int indent_level = 1;

void print_indent() {
    for(int i = 0; i < indent_level; i++) {
        printf("    ");
    }
}
%}

%union {
    int num;
    double real;
    char *str;
}

%token PROCEDURE FUNCTION IS BEGIN_KW END_KW RETURN_KW
%token IF_KW THEN_KW ELSE_KW ELSIF_KW END_IF
%token WHILE_KW LOOP_KW FOR_KW IN_KW END_LOOP
%token INTEGER_TYPE STRING_TYPE BOOLEAN_TYPE FLOAT_TYPE
%token TRUE_VAL FALSE_VAL
%token PUT_LINE PUT GET_LINE
%token ASSIGN COLON SEMICOLON COMMA LPAREN RPAREN
%token PLUS MINUS MULTIPLY DIVIDE MOD
%token EQ NE LT LE GT GE
%token AND OR NOT
%token RANGE
%token <str> IDENTIFIER STRING_LITERAL
%token <num> NUMBER
%token <real> REAL_NUMBER

%type <str> type_spec expression condition
%left OR
%left AND
%right NOT
%left EQ NE LT LE GT GE
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
%right UMINUS UPLUS

%%

program:
    procedure_decl
    | function_decl
    ;

procedure_decl:
    PROCEDURE IDENTIFIER IS 
    declarations 
    BEGIN_KW 
    { generate_python_header(); }
    statements 
    END_KW IDENTIFIER SEMICOLON
    { generate_python_footer(); }
    | PROCEDURE IDENTIFIER IS 
    declarations 
    BEGIN_KW 
    { generate_python_header(); }
    statements 
    END_KW SEMICOLON
    { generate_python_footer(); }
    ;

function_decl:
    FUNCTION IDENTIFIER LPAREN parameter_list RPAREN RETURN_KW type_spec IS
    declarations
    BEGIN_KW
    { generate_python_header(); }
    statements
    END_KW IDENTIFIER SEMICOLON
    { generate_python_footer(); }
    | FUNCTION IDENTIFIER RETURN_KW type_spec IS
    declarations
    BEGIN_KW
    { generate_python_header(); }
    statements
    END_KW IDENTIFIER SEMICOLON
    { generate_python_footer(); }
    ;

parameter_list:
    /* empty */
    | parameter_list COMMA parameter
    | parameter
    ;

parameter:
    IDENTIFIER COLON type_spec
    {
        // Parámetros de función - por ahora ignoramos
        free($1);
        free($3);
    }
    ;

declarations:
    /* empty */
    | declarations declaration
    ;

declaration:
    IDENTIFIER COLON type_spec SEMICOLON
    {
        print_indent();
        printf("# Declaración: %s : %s\n", $1, $3);
        print_indent();
        printf("%s = ", $1);
        if (strcmp($3, "Integer") == 0) {
            printf("0");
        } else if (strcmp($3, "String") == 0) {
            printf("\"\"");
        } else if (strcmp($3, "Boolean") == 0) {
            printf("False");
        } else if (strcmp($3, "Float") == 0) {
            printf("0.0");
        } else {
            printf("None  # Tipo desconocido: %s", $3);
        }
        printf("\n");
        free($1);
        free($3);
    }
    | IDENTIFIER COMMA identifier_list COLON type_spec SEMICOLON
    {
        // Declaración múltiple: x, y, z : Integer;
        print_indent();
        printf("# Declaración múltiple: %s, ... : %s\n", $1, $5);
        print_indent();
        printf("%s = ", $1);
        if (strcmp($5, "Integer") == 0) {
            printf("0");
        } else if (strcmp($5, "String") == 0) {
            printf("\"\"");
        } else if (strcmp($5, "Boolean") == 0) {
            printf("False");
        } else if (strcmp($5, "Float") == 0) {
            printf("0.0");
        } else {
            printf("None");
        }
        printf("\n");
        free($1);
        free($5);
    }
    ;

identifier_list:
    IDENTIFIER
    {
        print_indent();
        printf("%s = ", $1);
        printf("0  # Declaración múltiple\n");
        free($1);
    }
    | identifier_list COMMA IDENTIFIER
    {
        print_indent();
        printf("%s = ", $3);
        printf("0  # Declaración múltiple\n");
        free($3);
    }
    ;

type_spec:
    INTEGER_TYPE { $$ = strdup("Integer"); }
    | STRING_TYPE { $$ = strdup("String"); }
    | BOOLEAN_TYPE { $$ = strdup("Boolean"); }
    | FLOAT_TYPE { $$ = strdup("Float"); }
    | IDENTIFIER { $$ = $1; }  // Para tipos personalizados
    ;

statements:
    /* empty */
    | statements statement
    ;

statement:
    assignment
    | put_line_stmt
    | put_stmt
    | get_line_stmt
    | if_stmt
    | while_stmt
    | for_stmt
    | return_stmt
    | procedure_call
    | block_stmt
    ;

assignment:
    IDENTIFIER ASSIGN expression SEMICOLON
    {
        print_indent();
        printf("%s = %s\n", $1, $3);
        free($1);
        free($3);
    }
    ;

put_line_stmt:
    PUT_LINE LPAREN expression RPAREN SEMICOLON
    {
        print_indent();
        printf("print(%s)\n", $3);
        free($3);
    }
    | PUT_LINE LPAREN RPAREN SEMICOLON
    {
        print_indent();
        printf("print()\n");
    }
    ;

put_stmt:
    PUT LPAREN expression RPAREN SEMICOLON
    {
        print_indent();
        printf("print(%s, end='')\n", $3);
        free($3);
    }
    ;

get_line_stmt:
    GET_LINE LPAREN IDENTIFIER RPAREN SEMICOLON
    {
        print_indent();
        printf("%s = input()\n", $3);
        free($3);
    }
    ;

return_stmt:
    RETURN_KW expression SEMICOLON
    {
        print_indent();
        printf("return %s\n", $2);
        free($2);
    }
    | RETURN_KW SEMICOLON
    {
        print_indent();
        printf("return\n");
    }
    ;

procedure_call:
    IDENTIFIER LPAREN expression_list RPAREN SEMICOLON
    {
        print_indent();
        printf("%s()  # Llamada a procedimiento\n", $1);
        free($1);
    }
    | IDENTIFIER SEMICOLON
    {
        print_indent();
        printf("%s()  # Llamada a procedimiento\n", $1);
        free($1);
    }
    ;

block_stmt:
    BEGIN_KW statements END_KW SEMICOLON
    {
        print_indent();
        printf("# Bloque\n");
    }
    ;

expression_list:
    expression
    {
        free($1);
    }
    | expression_list COMMA expression
    {
        free($3);
    }
    ;

if_stmt:
    IF_KW condition THEN_KW 
    {
        print_indent();
        printf("if %s:\n", $2);
        indent_level++;
        free($2);
    }
    statements 
    elsif_parts
    else_part
    END_IF SEMICOLON
    {
        indent_level--;
    }
    ;

elsif_parts:
    /* empty */
    | elsif_parts elsif_part
    ;

elsif_part:
    ELSIF_KW condition THEN_KW
    {
        indent_level--;
        print_indent();
        printf("elif %s:\n", $2);
        indent_level++;
        free($2);
    }
    statements
    ;

else_part:
    /* empty */
    | ELSE_KW 
    {
        indent_level--;
        print_indent();
        printf("else:\n");
        indent_level++;
    }
    statements
    ;

while_stmt:
    WHILE_KW condition LOOP_KW
    {
        print_indent();
        printf("while %s:\n", $2);
        indent_level++;
        free($2);
    }
    statements
    END_LOOP SEMICOLON
    {
        indent_level--;
    }
    ;

for_stmt:
    FOR_KW IDENTIFIER IN_KW expression RANGE expression LOOP_KW
    {
        print_indent();
        printf("for %s in range(%s, %s + 1):\n", $2, $4, $6);
        indent_level++;
        free($2);
        free($4);
        free($6);
    }
    statements
    END_LOOP SEMICOLON
    {
        indent_level--;
    }
    | FOR_KW IDENTIFIER IN_KW IDENTIFIER LOOP_KW
    {
        print_indent();
        printf("for %s in %s:\n", $2, $4);
        indent_level++;
        free($2);
        free($4);
    }
    statements
    END_LOOP SEMICOLON
    {
        indent_level--;
    }
    ;

condition:
    expression EQ expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 5);
        sprintf(result, "%s == %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression NE expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 5);
        sprintf(result, "%s != %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression LT expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s < %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression LE expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 5);
        sprintf(result, "%s <= %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression GT expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s > %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression GE expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 5);
        sprintf(result, "%s >= %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | condition AND condition
    {
        char *result = malloc(strlen($1) + strlen($3) + 6);
        sprintf(result, "%s and %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | condition OR condition
    {
        char *result = malloc(strlen($1) + strlen($3) + 5);
        sprintf(result, "%s or %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | NOT condition
    {
        char *result = malloc(strlen($2) + 5);
        sprintf(result, "not %s", $2);
        $$ = result;
        free($2);
    }
    | LPAREN condition RPAREN
    {
        char *result = malloc(strlen($2) + 3);
        sprintf(result, "(%s)", $2);
        $$ = result;
        free($2);
    }
    | expression  /* Una expresión también puede ser una condición */
    {
        $$ = $1;
    }
    ;

expression:
    NUMBER 
    { 
        char buffer[20];
        sprintf(buffer, "%d", $1);
        $$ = strdup(buffer);
    }
    | REAL_NUMBER
    {
        char buffer[30];
        sprintf(buffer, "%.6f", $1);
        $$ = strdup(buffer);
    }
    | STRING_LITERAL 
    { 
        $$ = $1; 
    }
    | IDENTIFIER 
    { 
        $$ = $1; 
    }
    | TRUE_VAL 
    { 
        $$ = strdup("True"); 
    }
    | FALSE_VAL 
    { 
        $$ = strdup("False"); 
    }
    | expression PLUS expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s + %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression MINUS expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s - %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression MULTIPLY expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s * %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | expression DIVIDE expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 6);
        sprintf(result, "%s / %s", $1, $3);  // División real en Python
        $$ = result;
        free($1);
        free($3);
    }
    | expression MOD expression
    {
        char *result = malloc(strlen($1) + strlen($3) + 4);
        sprintf(result, "%s %% %s", $1, $3);
        $$ = result;
        free($1);
        free($3);
    }
    | MINUS expression %prec UMINUS
    {
        char *result = malloc(strlen($2) + 2);
        sprintf(result, "-%s", $2);
        $$ = result;
        free($2);
    }
    | PLUS expression %prec UPLUS
    {
        char *result = malloc(strlen($2) + 2);
        sprintf(result, "+%s", $2);
        $$ = result;
        free($2);
    }
    | LPAREN expression RPAREN
    {
        char *result = malloc(strlen($2) + 3);
        sprintf(result, "(%s)", $2);
        $$ = result;
        free($2);
    }
    | IDENTIFIER LPAREN expression_list RPAREN
    {
        char *result = malloc(strlen($1) + 10);
        sprintf(result, "%s()", $1);  // Llamada a función
        $$ = result;
        free($1);
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "# Error de sintaxis en línea %d: %s\n", line_num, s);
    fprintf(stderr, "# Continuando con la traducción...\n");
}

void generate_python_header() {
    printf("#!/usr/bin/env python3\n");
    printf("# Código generado automáticamente desde Ada\n\n");
    printf("def main():\n");
}

void generate_python_footer() {
    printf("\nif __name__ == \"__main__\":\n");
    printf("    main()\n");
}

// Implementación de yywrap sin usar -lfl
int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error abriendo archivo");
            return 1;
        }
    }
    
    printf("# Traductor Ada -> Python\n");
    yyparse();
    
    if (argc > 1) {
        fclose(yyin);
    }
    
    return 0;
}