/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ada.y"

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

#line 92 "ada.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ada.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROCEDURE = 3,                  /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 4,                   /* FUNCTION  */
  YYSYMBOL_IS = 5,                         /* IS  */
  YYSYMBOL_BEGIN_KW = 6,                   /* BEGIN_KW  */
  YYSYMBOL_END_KW = 7,                     /* END_KW  */
  YYSYMBOL_RETURN_KW = 8,                  /* RETURN_KW  */
  YYSYMBOL_IF_KW = 9,                      /* IF_KW  */
  YYSYMBOL_THEN_KW = 10,                   /* THEN_KW  */
  YYSYMBOL_ELSE_KW = 11,                   /* ELSE_KW  */
  YYSYMBOL_ELSIF_KW = 12,                  /* ELSIF_KW  */
  YYSYMBOL_END_IF = 13,                    /* END_IF  */
  YYSYMBOL_WHILE_KW = 14,                  /* WHILE_KW  */
  YYSYMBOL_LOOP_KW = 15,                   /* LOOP_KW  */
  YYSYMBOL_FOR_KW = 16,                    /* FOR_KW  */
  YYSYMBOL_IN_KW = 17,                     /* IN_KW  */
  YYSYMBOL_END_LOOP = 18,                  /* END_LOOP  */
  YYSYMBOL_INTEGER_TYPE = 19,              /* INTEGER_TYPE  */
  YYSYMBOL_STRING_TYPE = 20,               /* STRING_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 21,              /* BOOLEAN_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 22,                /* FLOAT_TYPE  */
  YYSYMBOL_TRUE_VAL = 23,                  /* TRUE_VAL  */
  YYSYMBOL_FALSE_VAL = 24,                 /* FALSE_VAL  */
  YYSYMBOL_PUT_LINE = 25,                  /* PUT_LINE  */
  YYSYMBOL_PUT = 26,                       /* PUT  */
  YYSYMBOL_GET_LINE = 27,                  /* GET_LINE  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 30,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_LPAREN = 32,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 33,                    /* RPAREN  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 36,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 37,                    /* DIVIDE  */
  YYSYMBOL_MOD = 38,                       /* MOD  */
  YYSYMBOL_EQ = 39,                        /* EQ  */
  YYSYMBOL_NE = 40,                        /* NE  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_GE = 44,                        /* GE  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_OR = 46,                        /* OR  */
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_RANGE = 48,                     /* RANGE  */
  YYSYMBOL_IDENTIFIER = 49,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 50,            /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 51,                    /* NUMBER  */
  YYSYMBOL_REAL_NUMBER = 52,               /* REAL_NUMBER  */
  YYSYMBOL_UMINUS = 53,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 54,                     /* UPLUS  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_procedure_decl = 57,            /* procedure_decl  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_function_decl = 60,             /* function_decl  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_parameter_list = 63,            /* parameter_list  */
  YYSYMBOL_parameter = 64,                 /* parameter  */
  YYSYMBOL_declarations = 65,              /* declarations  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_identifier_list = 67,           /* identifier_list  */
  YYSYMBOL_type_spec = 68,                 /* type_spec  */
  YYSYMBOL_statements = 69,                /* statements  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_assignment = 71,                /* assignment  */
  YYSYMBOL_put_line_stmt = 72,             /* put_line_stmt  */
  YYSYMBOL_put_stmt = 73,                  /* put_stmt  */
  YYSYMBOL_get_line_stmt = 74,             /* get_line_stmt  */
  YYSYMBOL_return_stmt = 75,               /* return_stmt  */
  YYSYMBOL_procedure_call = 76,            /* procedure_call  */
  YYSYMBOL_block_stmt = 77,                /* block_stmt  */
  YYSYMBOL_expression_list = 78,           /* expression_list  */
  YYSYMBOL_if_stmt = 79,                   /* if_stmt  */
  YYSYMBOL_80_5 = 80,                      /* $@5  */
  YYSYMBOL_elsif_parts = 81,               /* elsif_parts  */
  YYSYMBOL_elsif_part = 82,                /* elsif_part  */
  YYSYMBOL_83_6 = 83,                      /* $@6  */
  YYSYMBOL_else_part = 84,                 /* else_part  */
  YYSYMBOL_85_7 = 85,                      /* $@7  */
  YYSYMBOL_while_stmt = 86,                /* while_stmt  */
  YYSYMBOL_87_8 = 87,                      /* $@8  */
  YYSYMBOL_for_stmt = 88,                  /* for_stmt  */
  YYSYMBOL_89_9 = 89,                      /* $@9  */
  YYSYMBOL_90_10 = 90,                     /* $@10  */
  YYSYMBOL_condition = 91,                 /* condition  */
  YYSYMBOL_expression = 92                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    56,    63,    60,    70,    67,    80,    77,
      87,    84,    93,    95,    96,   100,   108,   110,   114,   135,
     160,   167,   177,   178,   179,   180,   181,   184,   186,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   203,
     213,   219,   227,   236,   245,   251,   259,   265,   274,   282,
     286,   294,   293,   309,   311,   316,   315,   326,   329,   328,
     340,   339,   355,   354,   369,   368,   384,   392,   400,   408,
     416,   424,   432,   440,   448,   455,   462,   469,   475,   481,
     485,   489,   493,   497,   505,   513,   521,   529,   537,   544,
     551,   558
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROCEDURE",
  "FUNCTION", "IS", "BEGIN_KW", "END_KW", "RETURN_KW", "IF_KW", "THEN_KW",
  "ELSE_KW", "ELSIF_KW", "END_IF", "WHILE_KW", "LOOP_KW", "FOR_KW",
  "IN_KW", "END_LOOP", "INTEGER_TYPE", "STRING_TYPE", "BOOLEAN_TYPE",
  "FLOAT_TYPE", "TRUE_VAL", "FALSE_VAL", "PUT_LINE", "PUT", "GET_LINE",
  "ASSIGN", "COLON", "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "MOD", "EQ", "NE", "LT", "LE", "GT", "GE",
  "AND", "OR", "NOT", "RANGE", "IDENTIFIER", "STRING_LITERAL", "NUMBER",
  "REAL_NUMBER", "UMINUS", "UPLUS", "$accept", "program", "procedure_decl",
  "$@1", "$@2", "function_decl", "$@3", "$@4", "parameter_list",
  "parameter", "declarations", "declaration", "identifier_list",
  "type_spec", "statements", "statement", "assignment", "put_line_stmt",
  "put_stmt", "get_line_stmt", "return_stmt", "procedure_call",
  "block_stmt", "expression_list", "if_stmt", "$@5", "elsif_parts",
  "elsif_part", "$@6", "else_part", "$@7", "while_stmt", "$@8", "for_stmt",
  "$@9", "$@10", "condition", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   -27,     3,    69,   -48,   -48,    76,    12,   -48,   -48,
     187,    49,    10,   -48,   -48,   -48,   -48,   -48,   100,    84,
      -8,   -48,   -48,    14,   -48,   -48,   187,    49,   102,   -48,
     -48,   187,    88,    51,   -48,   -48,   187,     1,    47,   113,
     -48,    63,   -48,   140,   -48,   101,   195,   208,   208,   103,
     121,   122,   124,   116,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   127,   -48,   187,   112,   -48,
     -48,    77,   134,   -48,   -48,   -48,   242,   242,   242,   131,
     -48,   -48,   -48,   310,   208,   208,    -4,   295,   -10,   148,
     229,   242,   119,   242,   -48,   242,   -48,   141,   -48,    81,
      52,   142,   -48,   325,   -48,   -48,   242,   -48,   242,   242,
     242,   242,   242,   -15,   284,   -48,   -48,   208,   208,   242,
     242,   242,   242,   242,   242,   -48,   263,   144,   331,   337,
     143,   319,    78,   273,   -48,   129,   -48,   -48,   -48,    90,
     -25,   -25,   -48,   -48,   -48,   -48,   -48,   -48,   135,   273,
     273,   273,   273,   273,   273,   -48,   -11,   268,   -48,   155,
     160,   162,   -48,   242,   164,   166,   -48,   -48,   189,   106,
     -48,   242,   -48,   -48,   -48,   273,   -48,   -48,   133,   117,
     169,   -48,   233,   163,   -48,   208,   -48,   191,   -48,   161,
     -48,   181,   -48,    89,   183,   190,   -48,   -48,   189,   -48,
     -48,   -48,   175,   -48,   192,   189,   -48
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,    16,
       0,    12,     0,    22,    23,    24,    25,    26,     0,     0,
       0,    14,     4,     0,    17,    16,     0,     0,     0,    27,
      27,     0,     0,     0,    15,    13,     0,     0,     0,     0,
      20,     0,    10,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    36,
      37,    38,    33,    34,    35,     0,    18,     0,     0,    27,
      16,     0,     0,    81,    82,    45,     0,     0,     0,    80,
      79,    77,    78,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,     0,    47,     0,     7,     0,    21,     0,
       0,     0,     5,     0,    89,    88,     0,    44,     0,     0,
       0,     0,     0,     0,    76,    74,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,    49,    19,     0,     8,    48,    90,     0,
      83,    84,    85,    86,    87,    75,    27,    72,    73,    66,
      67,    68,    69,    70,    71,    27,    80,     0,    41,     0,
       0,     0,    39,     0,     0,     0,    27,    91,    53,     0,
      64,     0,    40,    42,    43,    50,    46,    11,     0,    57,
       0,    27,     0,     0,    58,     0,    54,     0,    61,     0,
      62,     0,    27,     0,     0,     0,    27,     9,    59,    55,
      52,    65,     0,    27,     0,    56,    63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   194,
     -22,   -48,   -48,    -7,   -30,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   111,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -47,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    29,    30,     5,   166,    69,    20,    21,
      12,    24,    41,    18,    37,    54,    55,    56,    57,    58,
      59,    60,    61,   132,    62,   146,   179,   186,   203,   187,
     192,    63,   155,    64,   196,   181,    86,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    88,    83,    33,   170,   125,   116,    44,    45,    46,
      47,   110,   111,   112,    71,    48,    22,    49,   145,    34,
      10,   106,     6,    27,    39,    28,    50,    51,    52,    43,
     117,   118,   103,   104,   105,   117,   118,   113,   115,    99,
     114,   117,   118,    31,    11,    32,   128,   129,   100,   131,
      53,   133,     7,    44,    65,    46,    47,    42,   136,    23,
      97,    48,   133,    49,   140,   141,   142,   143,   144,     8,
     147,   148,    50,    51,    52,   149,   150,   151,   152,   153,
     154,     9,   157,    44,   101,    46,    47,    44,   135,    46,
      47,    48,    67,    49,    68,    48,    53,    49,    19,   199,
      23,    23,    50,    51,    52,    25,    50,    51,    52,   163,
      36,   164,    44,    26,    46,    47,   168,     1,     2,   175,
      48,   163,    49,   167,   180,   169,    53,   182,   184,   185,
      53,    50,    51,    52,   117,   118,   178,    40,   193,    44,
     183,    46,    47,    66,    93,    70,    94,    48,    95,    49,
      72,   189,    89,    90,    91,    53,    92,    96,    50,    51,
      52,    98,   198,   106,   102,   126,   202,    44,   130,    46,
      47,   134,   137,   205,   158,    48,   161,    49,   165,   195,
     117,    44,    53,    46,    47,   172,    50,    51,    52,    48,
     173,    49,   174,   204,   176,    44,   177,    46,    47,   188,
      50,    51,    52,    48,   194,    49,    13,    14,    15,    16,
      53,   197,   191,   200,    50,    51,    52,   139,    73,    74,
     201,    35,   206,     0,    53,    75,     0,    76,     0,    77,
      78,    73,    74,     0,     0,     0,    17,     0,    53,     0,
      84,     0,    77,    78,    79,    80,    81,    82,   190,     0,
       0,     0,    73,    74,     0,    85,     0,    79,    80,    81,
      82,    76,   127,    77,    78,    73,    74,   108,   109,   110,
     111,   112,     0,     0,    76,     0,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,    73,    74,     0,     0,
       0,    79,    80,    81,    82,    76,     0,    77,    78,     0,
       0,     0,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   156,    80,    81,    82,   171,   138,   108,   109,
     110,   111,   112,   119,   120,   121,   122,   123,   124,   108,
     109,   110,   111,   112,   119,   120,   121,   122,   123,   124,
     107,     0,     0,     0,   108,   109,   110,   111,   112,   162,
       0,     0,     0,   108,   109,   110,   111,   112,   138,   108,
     109,   110,   111,   112,   159,   108,   109,   110,   111,   112,
     160,   108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      30,    48,    46,    25,    15,    15,    10,     6,     7,     8,
       9,    36,    37,    38,    44,    14,     6,    16,    33,    26,
       8,    32,    49,    31,    31,    33,    25,    26,    27,    36,
      45,    46,    76,    77,    78,    45,    46,    84,    85,    69,
      84,    45,    46,    29,    32,    31,    90,    91,    70,    93,
      49,    95,    49,     6,     7,     8,     9,     6,     6,    49,
      67,    14,   106,    16,   108,   109,   110,   111,   112,     0,
     117,   118,    25,    26,    27,   119,   120,   121,   122,   123,
     124,     5,   126,     6,     7,     8,     9,     6,     7,     8,
       9,    14,    29,    16,    31,    14,    49,    16,    49,    10,
      49,    49,    25,    26,    27,     5,    25,    26,    27,    31,
       8,    33,     6,    29,     8,     9,   146,     3,     4,   163,
      14,    31,    16,    33,    18,   155,    49,   171,    11,    12,
      49,    25,    26,    27,    45,    46,   166,    49,   185,     6,
       7,     8,     9,    30,    28,     5,    30,    14,    32,    16,
      49,   181,    49,    32,    32,    49,    32,    30,    25,    26,
      27,    49,   192,    32,    30,    17,   196,     6,    49,     8,
       9,    30,    30,   203,    30,    14,    33,    16,    49,    18,
      45,     6,    49,     8,     9,    30,    25,    26,    27,    14,
      30,    16,    30,    18,    30,     6,    30,     8,     9,    30,
      25,    26,    27,    14,    13,    16,    19,    20,    21,    22,
      49,    30,    49,    30,    25,    26,    27,   106,    23,    24,
      30,    27,    30,    -1,    49,    30,    -1,    32,    -1,    34,
      35,    23,    24,    -1,    -1,    -1,    49,    -1,    49,    -1,
      32,    -1,    34,    35,    49,    50,    51,    52,    15,    -1,
      -1,    -1,    23,    24,    -1,    47,    -1,    49,    50,    51,
      52,    32,    33,    34,    35,    23,    24,    34,    35,    36,
      37,    38,    -1,    -1,    32,    -1,    34,    35,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    49,    50,    51,    52,    32,    -1,    34,    35,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    34,    35,    36,
      37,    38,    49,    50,    51,    52,    48,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    33,    34,
      35,    36,    37,    38,    33,    34,    35,    36,    37,    38,
      33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    56,    57,    60,    49,    49,     0,     5,
       8,    32,    65,    19,    20,    21,    22,    49,    68,    49,
      63,    64,     6,    49,    66,     5,    29,    31,    33,    58,
      59,    29,    31,    65,    68,    64,     8,    69,    69,    68,
      49,    67,     6,    68,     6,     7,     8,     9,    14,    16,
      25,    26,    27,    49,    70,    71,    72,    73,    74,    75,
      76,    77,    79,    86,    88,     7,    30,    29,    31,    62,
       5,    69,    49,    23,    24,    30,    32,    34,    35,    49,
      50,    51,    52,    92,    32,    47,    91,    92,    91,    49,
      32,    32,    32,    28,    30,    32,    30,    68,    49,    69,
      65,     7,    30,    92,    92,    92,    32,    30,    34,    35,
      36,    37,    38,    91,    92,    91,    10,    45,    46,    39,
      40,    41,    42,    43,    44,    15,    17,    33,    92,    92,
      49,    92,    78,    92,    30,     7,     6,    30,    33,    78,
      92,    92,    92,    92,    92,    33,    80,    91,    91,    92,
      92,    92,    92,    92,    92,    87,    49,    92,    30,    33,
      33,    33,    30,    31,    33,    49,    61,    33,    69,    69,
      15,    48,    30,    30,    30,    92,    30,    30,    69,    81,
      18,    90,    92,     7,    11,    12,    82,    84,    30,    69,
      15,    49,    85,    91,    13,    18,    89,    30,    69,    10,
      30,    30,    69,    83,    18,    69,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    58,    57,    59,    57,    61,    60,
      62,    60,    63,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      72,    72,    73,    74,    75,    75,    76,    76,    77,    78,
      78,    80,    79,    81,    81,    83,    82,    84,    85,    84,
      87,    86,    89,    88,    90,    88,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,    10,     0,     9,     0,    15,
       0,    12,     0,     3,     1,     3,     0,     2,     4,     6,
       1,     3,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     4,     5,     5,     3,     2,     5,     2,     4,     1,
       3,     0,     9,     0,     2,     0,     5,     0,     0,     3,
       0,     7,     0,    11,     0,     9,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* $@1: %empty  */
#line 63 "ada.y"
    { generate_python_header(); }
#line 1343 "ada.tab.c"
    break;

  case 5: /* procedure_decl: PROCEDURE IDENTIFIER IS declarations BEGIN_KW $@1 statements END_KW IDENTIFIER SEMICOLON  */
#line 66 "ada.y"
    { generate_python_footer(); }
#line 1349 "ada.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 70 "ada.y"
    { generate_python_header(); }
#line 1355 "ada.tab.c"
    break;

  case 7: /* procedure_decl: PROCEDURE IDENTIFIER IS declarations BEGIN_KW $@2 statements END_KW SEMICOLON  */
#line 73 "ada.y"
    { generate_python_footer(); }
#line 1361 "ada.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 80 "ada.y"
    { generate_python_header(); }
#line 1367 "ada.tab.c"
    break;

  case 9: /* function_decl: FUNCTION IDENTIFIER LPAREN parameter_list RPAREN RETURN_KW type_spec IS declarations BEGIN_KW $@3 statements END_KW IDENTIFIER SEMICOLON  */
#line 83 "ada.y"
    { generate_python_footer(); }
#line 1373 "ada.tab.c"
    break;

  case 10: /* $@4: %empty  */
#line 87 "ada.y"
    { generate_python_header(); }
#line 1379 "ada.tab.c"
    break;

  case 11: /* function_decl: FUNCTION IDENTIFIER RETURN_KW type_spec IS declarations BEGIN_KW $@4 statements END_KW IDENTIFIER SEMICOLON  */
#line 90 "ada.y"
    { generate_python_footer(); }
#line 1385 "ada.tab.c"
    break;

  case 15: /* parameter: IDENTIFIER COLON type_spec  */
#line 101 "ada.y"
    {
        // Parámetros de función - por ahora ignoramos
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1395 "ada.tab.c"
    break;

  case 18: /* declaration: IDENTIFIER COLON type_spec SEMICOLON  */
#line 115 "ada.y"
    {
        print_indent();
        printf("# Declaración: %s : %s\n", (yyvsp[-3].str), (yyvsp[-1].str));
        print_indent();
        printf("%s = ", (yyvsp[-3].str));
        if (strcmp((yyvsp[-1].str), "Integer") == 0) {
            printf("0");
        } else if (strcmp((yyvsp[-1].str), "String") == 0) {
            printf("\"\"");
        } else if (strcmp((yyvsp[-1].str), "Boolean") == 0) {
            printf("False");
        } else if (strcmp((yyvsp[-1].str), "Float") == 0) {
            printf("0.0");
        } else {
            printf("None  # Tipo desconocido: %s", (yyvsp[-1].str));
        }
        printf("\n");
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1420 "ada.tab.c"
    break;

  case 19: /* declaration: IDENTIFIER COMMA identifier_list COLON type_spec SEMICOLON  */
#line 136 "ada.y"
    {
        // Declaración múltiple: x, y, z : Integer;
        print_indent();
        printf("# Declaración múltiple: %s, ... : %s\n", (yyvsp[-5].str), (yyvsp[-1].str));
        print_indent();
        printf("%s = ", (yyvsp[-5].str));
        if (strcmp((yyvsp[-1].str), "Integer") == 0) {
            printf("0");
        } else if (strcmp((yyvsp[-1].str), "String") == 0) {
            printf("\"\"");
        } else if (strcmp((yyvsp[-1].str), "Boolean") == 0) {
            printf("False");
        } else if (strcmp((yyvsp[-1].str), "Float") == 0) {
            printf("0.0");
        } else {
            printf("None");
        }
        printf("\n");
        free((yyvsp[-5].str));
        free((yyvsp[-1].str));
    }
#line 1446 "ada.tab.c"
    break;

  case 20: /* identifier_list: IDENTIFIER  */
#line 161 "ada.y"
    {
        print_indent();
        printf("%s = ", (yyvsp[0].str));
        printf("0  # Declaración múltiple\n");
        free((yyvsp[0].str));
    }
#line 1457 "ada.tab.c"
    break;

  case 21: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 168 "ada.y"
    {
        print_indent();
        printf("%s = ", (yyvsp[0].str));
        printf("0  # Declaración múltiple\n");
        free((yyvsp[0].str));
    }
#line 1468 "ada.tab.c"
    break;

  case 22: /* type_spec: INTEGER_TYPE  */
#line 177 "ada.y"
                 { (yyval.str) = strdup("Integer"); }
#line 1474 "ada.tab.c"
    break;

  case 23: /* type_spec: STRING_TYPE  */
#line 178 "ada.y"
                  { (yyval.str) = strdup("String"); }
#line 1480 "ada.tab.c"
    break;

  case 24: /* type_spec: BOOLEAN_TYPE  */
#line 179 "ada.y"
                   { (yyval.str) = strdup("Boolean"); }
#line 1486 "ada.tab.c"
    break;

  case 25: /* type_spec: FLOAT_TYPE  */
#line 180 "ada.y"
                 { (yyval.str) = strdup("Float"); }
#line 1492 "ada.tab.c"
    break;

  case 26: /* type_spec: IDENTIFIER  */
#line 181 "ada.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1498 "ada.tab.c"
    break;

  case 39: /* assignment: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 204 "ada.y"
    {
        print_indent();
        printf("%s = %s\n", (yyvsp[-3].str), (yyvsp[-1].str));
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1509 "ada.tab.c"
    break;

  case 40: /* put_line_stmt: PUT_LINE LPAREN expression RPAREN SEMICOLON  */
#line 214 "ada.y"
    {
        print_indent();
        printf("print(%s)\n", (yyvsp[-2].str));
        free((yyvsp[-2].str));
    }
#line 1519 "ada.tab.c"
    break;

  case 41: /* put_line_stmt: PUT_LINE LPAREN RPAREN SEMICOLON  */
#line 220 "ada.y"
    {
        print_indent();
        printf("print()\n");
    }
#line 1528 "ada.tab.c"
    break;

  case 42: /* put_stmt: PUT LPAREN expression RPAREN SEMICOLON  */
#line 228 "ada.y"
    {
        print_indent();
        printf("print(%s, end='')\n", (yyvsp[-2].str));
        free((yyvsp[-2].str));
    }
#line 1538 "ada.tab.c"
    break;

  case 43: /* get_line_stmt: GET_LINE LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 237 "ada.y"
    {
        print_indent();
        printf("%s = input()\n", (yyvsp[-2].str));
        free((yyvsp[-2].str));
    }
#line 1548 "ada.tab.c"
    break;

  case 44: /* return_stmt: RETURN_KW expression SEMICOLON  */
#line 246 "ada.y"
    {
        print_indent();
        printf("return %s\n", (yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1558 "ada.tab.c"
    break;

  case 45: /* return_stmt: RETURN_KW SEMICOLON  */
#line 252 "ada.y"
    {
        print_indent();
        printf("return\n");
    }
#line 1567 "ada.tab.c"
    break;

  case 46: /* procedure_call: IDENTIFIER LPAREN expression_list RPAREN SEMICOLON  */
#line 260 "ada.y"
    {
        print_indent();
        printf("%s()  # Llamada a procedimiento\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1577 "ada.tab.c"
    break;

  case 47: /* procedure_call: IDENTIFIER SEMICOLON  */
#line 266 "ada.y"
    {
        print_indent();
        printf("%s()  # Llamada a procedimiento\n", (yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1587 "ada.tab.c"
    break;

  case 48: /* block_stmt: BEGIN_KW statements END_KW SEMICOLON  */
#line 275 "ada.y"
    {
        print_indent();
        printf("# Bloque\n");
    }
#line 1596 "ada.tab.c"
    break;

  case 49: /* expression_list: expression  */
#line 283 "ada.y"
    {
        free((yyvsp[0].str));
    }
#line 1604 "ada.tab.c"
    break;

  case 50: /* expression_list: expression_list COMMA expression  */
#line 287 "ada.y"
    {
        free((yyvsp[0].str));
    }
#line 1612 "ada.tab.c"
    break;

  case 51: /* $@5: %empty  */
#line 294 "ada.y"
    {
        print_indent();
        printf("if %s:\n", (yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));
    }
#line 1623 "ada.tab.c"
    break;

  case 52: /* if_stmt: IF_KW condition THEN_KW $@5 statements elsif_parts else_part END_IF SEMICOLON  */
#line 304 "ada.y"
    {
        indent_level--;
    }
#line 1631 "ada.tab.c"
    break;

  case 55: /* $@6: %empty  */
#line 316 "ada.y"
    {
        indent_level--;
        print_indent();
        printf("elif %s:\n", (yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));
    }
#line 1643 "ada.tab.c"
    break;

  case 58: /* $@7: %empty  */
#line 329 "ada.y"
    {
        indent_level--;
        print_indent();
        printf("else:\n");
        indent_level++;
    }
#line 1654 "ada.tab.c"
    break;

  case 60: /* $@8: %empty  */
#line 340 "ada.y"
    {
        print_indent();
        printf("while %s:\n", (yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));
    }
#line 1665 "ada.tab.c"
    break;

  case 61: /* while_stmt: WHILE_KW condition LOOP_KW $@8 statements END_LOOP SEMICOLON  */
#line 348 "ada.y"
    {
        indent_level--;
    }
#line 1673 "ada.tab.c"
    break;

  case 62: /* $@9: %empty  */
#line 355 "ada.y"
    {
        print_indent();
        printf("for %s in range(%s, %s + 1):\n", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-5].str));
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1686 "ada.tab.c"
    break;

  case 63: /* for_stmt: FOR_KW IDENTIFIER IN_KW expression RANGE expression LOOP_KW $@9 statements END_LOOP SEMICOLON  */
#line 365 "ada.y"
    {
        indent_level--;
    }
#line 1694 "ada.tab.c"
    break;

  case 64: /* $@10: %empty  */
#line 369 "ada.y"
    {
        print_indent();
        printf("for %s in %s:\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1706 "ada.tab.c"
    break;

  case 65: /* for_stmt: FOR_KW IDENTIFIER IN_KW IDENTIFIER LOOP_KW $@10 statements END_LOOP SEMICOLON  */
#line 378 "ada.y"
    {
        indent_level--;
    }
#line 1714 "ada.tab.c"
    break;

  case 66: /* condition: expression EQ expression  */
#line 385 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 5);
        sprintf(result, "%s == %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1726 "ada.tab.c"
    break;

  case 67: /* condition: expression NE expression  */
#line 393 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 5);
        sprintf(result, "%s != %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1738 "ada.tab.c"
    break;

  case 68: /* condition: expression LT expression  */
#line 401 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s < %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1750 "ada.tab.c"
    break;

  case 69: /* condition: expression LE expression  */
#line 409 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 5);
        sprintf(result, "%s <= %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1762 "ada.tab.c"
    break;

  case 70: /* condition: expression GT expression  */
#line 417 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s > %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1774 "ada.tab.c"
    break;

  case 71: /* condition: expression GE expression  */
#line 425 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 5);
        sprintf(result, "%s >= %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1786 "ada.tab.c"
    break;

  case 72: /* condition: condition AND condition  */
#line 433 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 6);
        sprintf(result, "%s and %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1798 "ada.tab.c"
    break;

  case 73: /* condition: condition OR condition  */
#line 441 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 5);
        sprintf(result, "%s or %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1810 "ada.tab.c"
    break;

  case 74: /* condition: NOT condition  */
#line 449 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[0].str)) + 5);
        sprintf(result, "not %s", (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[0].str));
    }
#line 1821 "ada.tab.c"
    break;

  case 75: /* condition: LPAREN condition RPAREN  */
#line 456 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-1].str)) + 3);
        sprintf(result, "(%s)", (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
    }
#line 1832 "ada.tab.c"
    break;

  case 76: /* condition: expression  */
#line 463 "ada.y"
    {
        (yyval.str) = (yyvsp[0].str);
    }
#line 1840 "ada.tab.c"
    break;

  case 77: /* expression: NUMBER  */
#line 470 "ada.y"
    { 
        char buffer[20];
        sprintf(buffer, "%d", (yyvsp[0].num));
        (yyval.str) = strdup(buffer);
    }
#line 1850 "ada.tab.c"
    break;

  case 78: /* expression: REAL_NUMBER  */
#line 476 "ada.y"
    {
        char buffer[30];
        sprintf(buffer, "%.6f", (yyvsp[0].real));
        (yyval.str) = strdup(buffer);
    }
#line 1860 "ada.tab.c"
    break;

  case 79: /* expression: STRING_LITERAL  */
#line 482 "ada.y"
    { 
        (yyval.str) = (yyvsp[0].str); 
    }
#line 1868 "ada.tab.c"
    break;

  case 80: /* expression: IDENTIFIER  */
#line 486 "ada.y"
    { 
        (yyval.str) = (yyvsp[0].str); 
    }
#line 1876 "ada.tab.c"
    break;

  case 81: /* expression: TRUE_VAL  */
#line 490 "ada.y"
    { 
        (yyval.str) = strdup("True"); 
    }
#line 1884 "ada.tab.c"
    break;

  case 82: /* expression: FALSE_VAL  */
#line 494 "ada.y"
    { 
        (yyval.str) = strdup("False"); 
    }
#line 1892 "ada.tab.c"
    break;

  case 83: /* expression: expression PLUS expression  */
#line 498 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s + %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1904 "ada.tab.c"
    break;

  case 84: /* expression: expression MINUS expression  */
#line 506 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s - %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1916 "ada.tab.c"
    break;

  case 85: /* expression: expression MULTIPLY expression  */
#line 514 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s * %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1928 "ada.tab.c"
    break;

  case 86: /* expression: expression DIVIDE expression  */
#line 522 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 6);
        sprintf(result, "%s / %s", (yyvsp[-2].str), (yyvsp[0].str));  // División real en Python
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1940 "ada.tab.c"
    break;

  case 87: /* expression: expression MOD expression  */
#line 530 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 4);
        sprintf(result, "%s %% %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-2].str));
        free((yyvsp[0].str));
    }
#line 1952 "ada.tab.c"
    break;

  case 88: /* expression: MINUS expression  */
#line 538 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[0].str)) + 2);
        sprintf(result, "-%s", (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[0].str));
    }
#line 1963 "ada.tab.c"
    break;

  case 89: /* expression: PLUS expression  */
#line 545 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[0].str)) + 2);
        sprintf(result, "+%s", (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[0].str));
    }
#line 1974 "ada.tab.c"
    break;

  case 90: /* expression: LPAREN expression RPAREN  */
#line 552 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-1].str)) + 3);
        sprintf(result, "(%s)", (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
    }
#line 1985 "ada.tab.c"
    break;

  case 91: /* expression: IDENTIFIER LPAREN expression_list RPAREN  */
#line 559 "ada.y"
    {
        char *result = malloc(strlen((yyvsp[-3].str)) + 10);
        sprintf(result, "%s()", (yyvsp[-3].str));  // Llamada a función
        (yyval.str) = result;
        free((yyvsp[-3].str));
    }
#line 1996 "ada.tab.c"
    break;


#line 2000 "ada.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 567 "ada.y"


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
