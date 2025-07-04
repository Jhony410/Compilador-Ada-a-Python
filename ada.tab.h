/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ADA_TAB_H_INCLUDED
# define YY_YY_ADA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROCEDURE = 258,               /* PROCEDURE  */
    FUNCTION = 259,                /* FUNCTION  */
    IS = 260,                      /* IS  */
    BEGIN_KW = 261,                /* BEGIN_KW  */
    END_KW = 262,                  /* END_KW  */
    RETURN_KW = 263,               /* RETURN_KW  */
    IF_KW = 264,                   /* IF_KW  */
    THEN_KW = 265,                 /* THEN_KW  */
    ELSE_KW = 266,                 /* ELSE_KW  */
    ELSIF_KW = 267,                /* ELSIF_KW  */
    END_IF = 268,                  /* END_IF  */
    WHILE_KW = 269,                /* WHILE_KW  */
    LOOP_KW = 270,                 /* LOOP_KW  */
    FOR_KW = 271,                  /* FOR_KW  */
    IN_KW = 272,                   /* IN_KW  */
    END_LOOP = 273,                /* END_LOOP  */
    INTEGER_TYPE = 274,            /* INTEGER_TYPE  */
    STRING_TYPE = 275,             /* STRING_TYPE  */
    BOOLEAN_TYPE = 276,            /* BOOLEAN_TYPE  */
    FLOAT_TYPE = 277,              /* FLOAT_TYPE  */
    TRUE_VAL = 278,                /* TRUE_VAL  */
    FALSE_VAL = 279,               /* FALSE_VAL  */
    PUT_LINE = 280,                /* PUT_LINE  */
    PUT = 281,                     /* PUT  */
    GET_LINE = 282,                /* GET_LINE  */
    ASSIGN = 283,                  /* ASSIGN  */
    COLON = 284,                   /* COLON  */
    SEMICOLON = 285,               /* SEMICOLON  */
    COMMA = 286,                   /* COMMA  */
    LPAREN = 287,                  /* LPAREN  */
    RPAREN = 288,                  /* RPAREN  */
    PLUS = 289,                    /* PLUS  */
    MINUS = 290,                   /* MINUS  */
    MULTIPLY = 291,                /* MULTIPLY  */
    DIVIDE = 292,                  /* DIVIDE  */
    MOD = 293,                     /* MOD  */
    EQ = 294,                      /* EQ  */
    NE = 295,                      /* NE  */
    LT = 296,                      /* LT  */
    LE = 297,                      /* LE  */
    GT = 298,                      /* GT  */
    GE = 299,                      /* GE  */
    AND = 300,                     /* AND  */
    OR = 301,                      /* OR  */
    NOT = 302,                     /* NOT  */
    RANGE = 303,                   /* RANGE  */
    IDENTIFIER = 304,              /* IDENTIFIER  */
    STRING_LITERAL = 305,          /* STRING_LITERAL  */
    NUMBER = 306,                  /* NUMBER  */
    REAL_NUMBER = 307,             /* REAL_NUMBER  */
    UMINUS = 308,                  /* UMINUS  */
    UPLUS = 309                    /* UPLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "ada.y"

    int num;
    double real;
    char *str;

#line 124 "ada.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ADA_TAB_H_INCLUDED  */
