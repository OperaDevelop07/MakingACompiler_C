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
#line 1 "y.y"

  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <math.h>
  #include "DeclValidn.h"


  static char* errMsg;

  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;


 int install ( char *sym_name ){  
   
   symrec *s;
   s = getsym (sym_name);
   if (s == 0){
        s = putsym (sym_name);
        return 0;
        }
   else { 
          //printf( "%s is already defined\n", sym_name );
          
          return 1;
   }
}

int context_check( char *sym_name )
{ if ( getsym( sym_name ) == 0 ){ 
     
     //printf( "%s is an undeclared identifier\n", sym_name ); 
     return 1;
   }
   return 0;
}
  

#line 113 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    CHARACTER_VALUE = 258,         /* CHARACTER_VALUE  */
    INTEGER_VALUE = 259,           /* INTEGER_VALUE  */
    STRING_VALUE = 260,            /* STRING_VALUE  */
    ONELINE_COMNT = 261,           /* ONELINE_COMNT  */
    INTEGER = 262,                 /* INTEGER  */
    CHAR = 263,                    /* CHAR  */
    STRING = 264,                  /* STRING  */
    IDENTIFIER = 265,              /* IDENTIFIER  */
    ARRAY_IDENTIFIER = 266,        /* ARRAY_IDENTIFIER  */
    PROGRAM = 267,                 /* PROGRAM  */
    STARTMAIN = 268,               /* STARTMAIN  */
    ENDMAIN = 269,                 /* ENDMAIN  */
    WHILE = 270,                   /* WHILE  */
    ENDWHILE = 271,                /* ENDWHILE  */
    FOR = 272,                     /* FOR  */
    TO = 273,                      /* TO  */
    STEP = 274,                    /* STEP  */
    ENDFOR = 275,                  /* ENDFOR  */
    FUNCTION = 276,                /* FUNCTION  */
    RETURN = 277,                  /* RETURN  */
    END_FUNCTION = 278,            /* END_FUNCTION  */
    STRUCT = 279,                  /* STRUCT  */
    ENDSTRUCT = 280,               /* ENDSTRUCT  */
    TYPEDEF = 281,                 /* TYPEDEF  */
    imag_type = 282,               /* imag_type  */
    IF = 283,                      /* IF  */
    THEN = 284,                    /* THEN  */
    ELSEIF = 285,                  /* ELSEIF  */
    ELSE = 286,                    /* ELSE  */
    ENDIF = 287,                   /* ENDIF  */
    SWITCH = 288,                  /* SWITCH  */
    CASE = 289,                    /* CASE  */
    DEFAULT = 290,                 /* DEFAULT  */
    ENDSWITCH = 291,               /* ENDSWITCH  */
    PRINT = 292,                   /* PRINT  */
    BREAK = 293,                   /* BREAK  */
    VARS = 294,                    /* VARS  */
    COMMA = 295,                   /* COMMA  */
    SINGLE_QUOTES = 296,           /* SINGLE_QUOTES  */
    SEMI_COLON = 297,              /* SEMI_COLON  */
    EQUALS = 298,                  /* EQUALS  */
    COLON = 299,                   /* COLON  */
    BRACKET_OPEN = 300,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 301,           /* BRACKET_CLOSE  */
    CURLY_BRACE_OPEN = 302,        /* CURLY_BRACE_OPEN  */
    CURLY_BRACE_CLOSE = 303,       /* CURLY_BRACE_CLOSE  */
    BIG_BRACKET_OPEN = 304,        /* BIG_BRACKET_OPEN  */
    BIG_BRACKET_CLOSE = 305,       /* BIG_BRACKET_CLOSE  */
    LEFT_APOSTR = 306,             /* LEFT_APOSTR  */
    RIGHT_APOSTR = 307,            /* RIGHT_APOSTR  */
    FOR_ASSIGN = 308,              /* FOR_ASSIGN  */
    ANDOP = 309,                   /* ANDOP  */
    OROP = 310,                    /* OROP  */
    GRTOP = 311,                   /* GRTOP  */
    LESSOP = 312,                  /* LESSOP  */
    EQCHK = 313,                   /* EQCHK  */
    NONEQCHK = 314,                /* NONEQCHK  */
    ADDOP = 315,                   /* ADDOP  */
    SUBOP = 316,                   /* SUBOP  */
    MULOP = 317,                   /* MULOP  */
    DIVOP = 318,                   /* DIVOP  */
    POWOP = 319                    /* POWOP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "y.y"

  int intVal;
  char* dataType;
  char* strVal;
  /*float floatVal;*/
  char charVal;

#line 235 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHARACTER_VALUE = 3,            /* CHARACTER_VALUE  */
  YYSYMBOL_INTEGER_VALUE = 4,              /* INTEGER_VALUE  */
  YYSYMBOL_STRING_VALUE = 5,               /* STRING_VALUE  */
  YYSYMBOL_ONELINE_COMNT = 6,              /* ONELINE_COMNT  */
  YYSYMBOL_INTEGER = 7,                    /* INTEGER  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 10,                /* IDENTIFIER  */
  YYSYMBOL_ARRAY_IDENTIFIER = 11,          /* ARRAY_IDENTIFIER  */
  YYSYMBOL_PROGRAM = 12,                   /* PROGRAM  */
  YYSYMBOL_STARTMAIN = 13,                 /* STARTMAIN  */
  YYSYMBOL_ENDMAIN = 14,                   /* ENDMAIN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_ENDWHILE = 16,                  /* ENDWHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_TO = 18,                        /* TO  */
  YYSYMBOL_STEP = 19,                      /* STEP  */
  YYSYMBOL_ENDFOR = 20,                    /* ENDFOR  */
  YYSYMBOL_FUNCTION = 21,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_END_FUNCTION = 23,              /* END_FUNCTION  */
  YYSYMBOL_STRUCT = 24,                    /* STRUCT  */
  YYSYMBOL_ENDSTRUCT = 25,                 /* ENDSTRUCT  */
  YYSYMBOL_TYPEDEF = 26,                   /* TYPEDEF  */
  YYSYMBOL_imag_type = 27,                 /* imag_type  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_THEN = 29,                      /* THEN  */
  YYSYMBOL_ELSEIF = 30,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_ENDIF = 32,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_CASE = 34,                      /* CASE  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_ENDSWITCH = 36,                 /* ENDSWITCH  */
  YYSYMBOL_PRINT = 37,                     /* PRINT  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_VARS = 39,                      /* VARS  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_SINGLE_QUOTES = 41,             /* SINGLE_QUOTES  */
  YYSYMBOL_SEMI_COLON = 42,                /* SEMI_COLON  */
  YYSYMBOL_EQUALS = 43,                    /* EQUALS  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_BRACKET_OPEN = 45,              /* BRACKET_OPEN  */
  YYSYMBOL_BRACKET_CLOSE = 46,             /* BRACKET_CLOSE  */
  YYSYMBOL_CURLY_BRACE_OPEN = 47,          /* CURLY_BRACE_OPEN  */
  YYSYMBOL_CURLY_BRACE_CLOSE = 48,         /* CURLY_BRACE_CLOSE  */
  YYSYMBOL_BIG_BRACKET_OPEN = 49,          /* BIG_BRACKET_OPEN  */
  YYSYMBOL_BIG_BRACKET_CLOSE = 50,         /* BIG_BRACKET_CLOSE  */
  YYSYMBOL_LEFT_APOSTR = 51,               /* LEFT_APOSTR  */
  YYSYMBOL_RIGHT_APOSTR = 52,              /* RIGHT_APOSTR  */
  YYSYMBOL_FOR_ASSIGN = 53,                /* FOR_ASSIGN  */
  YYSYMBOL_ANDOP = 54,                     /* ANDOP  */
  YYSYMBOL_OROP = 55,                      /* OROP  */
  YYSYMBOL_GRTOP = 56,                     /* GRTOP  */
  YYSYMBOL_LESSOP = 57,                    /* LESSOP  */
  YYSYMBOL_EQCHK = 58,                     /* EQCHK  */
  YYSYMBOL_NONEQCHK = 59,                  /* NONEQCHK  */
  YYSYMBOL_ADDOP = 60,                     /* ADDOP  */
  YYSYMBOL_SUBOP = 61,                     /* SUBOP  */
  YYSYMBOL_MULOP = 62,                     /* MULOP  */
  YYSYMBOL_DIVOP = 63,                     /* DIVOP  */
  YYSYMBOL_POWOP = 64,                     /* POWOP  */
  YYSYMBOL_65_n_ = 65,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_PROGRAMM_DEF = 67,              /* PROGRAMM_DEF  */
  YYSYMBOL_STRUCT_FN = 68,                 /* STRUCT_FN  */
  YYSYMBOL_STRUCT_DEFN = 69,               /* STRUCT_DEFN  */
  YYSYMBOL_NEWLINE = 70,                   /* NEWLINE  */
  YYSYMBOL_FUNCTION_DEC = 71,              /* FUNCTION_DEC  */
  YYSYMBOL_FUNCTION_DECLARATION = 72,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_FUNCTION_STRC = 73,             /* FUNCTION_STRC  */
  YYSYMBOL_FUNC_PARAMS = 74,               /* FUNC_PARAMS  */
  YYSYMBOL_FUNC_BODY = 75,                 /* FUNC_BODY  */
  YYSYMBOL_VAR_DECL = 76,                  /* VAR_DECL  */
  YYSYMBOL_VAR_BODY = 77,                  /* VAR_BODY  */
  YYSYMBOL_DATA_TYPE = 78,                 /* DATA_TYPE  */
  YYSYMBOL_VAR_LIST = 79,                  /* VAR_LIST  */
  YYSYMBOL_DECL_ID = 80,                   /* DECL_ID  */
  YYSYMBOL_VAR_ID = 81,                    /* VAR_ID  */
  YYSYMBOL_RTN_VAL = 82,                   /* RTN_VAL  */
  YYSYMBOL_LITERAL = 83,                   /* LITERAL  */
  YYSYMBOL_COMMAND_BODY = 84,              /* COMMAND_BODY  */
  YYSYMBOL_COMMAND = 85,                   /* COMMAND  */
  YYSYMBOL_ASSIGN_CMD = 86,                /* ASSIGN_CMD  */
  YYSYMBOL_LOOP_CMD = 87,                  /* LOOP_CMD  */
  YYSYMBOL_WHILE_CMD = 88,                 /* WHILE_CMD  */
  YYSYMBOL_LOGIC_COND = 89,                /* LOGIC_COND  */
  YYSYMBOL_LOGIC_OP = 90,                  /* LOGIC_OP  */
  YYSYMBOL_FOR_CMD = 91,                   /* FOR_CMD  */
  YYSYMBOL_CONTRL_CMD = 92,                /* CONTRL_CMD  */
  YYSYMBOL_IF_CMD = 93,                    /* IF_CMD  */
  YYSYMBOL_ELIF_STR = 94,                  /* ELIF_STR  */
  YYSYMBOL_ELIF = 95,                      /* ELIF  */
  YYSYMBOL_ELIF_BOD = 96,                  /* ELIF_BOD  */
  YYSYMBOL_ELSE_BOD = 97,                  /* ELSE_BOD  */
  YYSYMBOL_SWITCH_CMD = 98,                /* SWITCH_CMD  */
  YYSYMBOL_CASE_BOD = 99,                  /* CASE_BOD  */
  YYSYMBOL_CASE_STR = 100,                 /* CASE_STR  */
  YYSYMBOL_DEFAULT_BOD = 101,              /* DEFAULT_BOD  */
  YYSYMBOL_PRINT_CMD = 102,                /* PRINT_CMD  */
  YYSYMBOL_TEXT = 103,                     /* TEXT  */
  YYSYMBOL_TEXT_MUL = 104,                 /* TEXT_MUL  */
  YYSYMBOL_TEXT_SINGL = 105,               /* TEXT_SINGL  */
  YYSYMBOL_BREAK_CMD = 106,                /* BREAK_CMD  */
  YYSYMBOL_EXPRESSION = 107,               /* EXPRESSION  */
  YYSYMBOL_EXPR_PART = 108,                /* EXPR_PART  */
  YYSYMBOL_FUNC_CALL = 109,                /* FUNC_CALL  */
  YYSYMBOL_FUNC_PARMSCALL = 110,           /* FUNC_PARMSCALL  */
  YYSYMBOL_BASIC_OPER = 111                /* BASIC_OPER  */
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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      65,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   105,   105,   112,   119,   125,   126,   127,   129,   132,
     139,   140,   144,   145,   148,   149,   153,   171,   172,   173,
     174,   177,   180,   182,   184,   188,   189,   192,   196,   197,
     198,   202,   203,   208,   209,   225,   242,   243,   257,   275,
     276,   280,   281,   285,   286,   289,   290,   291,   292,   293,
     297,   302,   303,   305,   311,   313,   314,   315,   316,   317,
     318,   321,   326,   327,   329,   335,   336,   339,   340,   343,
     347,   349,   352,   357,   358,   361,   365,   366,   368,   370,
     371,   373,   374,   376,   377,   380,   381,   382,   383,   387,
     390,   391,   392,   396,   397,   398,   401,   416,   417,   418,
     432,   446,   448,   449,   450,   451,   452
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHARACTER_VALUE",
  "INTEGER_VALUE", "STRING_VALUE", "ONELINE_COMNT", "INTEGER", "CHAR",
  "STRING", "IDENTIFIER", "ARRAY_IDENTIFIER", "PROGRAM", "STARTMAIN",
  "ENDMAIN", "WHILE", "ENDWHILE", "FOR", "TO", "STEP", "ENDFOR",
  "FUNCTION", "RETURN", "END_FUNCTION", "STRUCT", "ENDSTRUCT", "TYPEDEF",
  "imag_type", "IF", "THEN", "ELSEIF", "ELSE", "ENDIF", "SWITCH", "CASE",
  "DEFAULT", "ENDSWITCH", "PRINT", "BREAK", "VARS", "COMMA",
  "SINGLE_QUOTES", "SEMI_COLON", "EQUALS", "COLON", "BRACKET_OPEN",
  "BRACKET_CLOSE", "CURLY_BRACE_OPEN", "CURLY_BRACE_CLOSE",
  "BIG_BRACKET_OPEN", "BIG_BRACKET_CLOSE", "LEFT_APOSTR", "RIGHT_APOSTR",
  "FOR_ASSIGN", "ANDOP", "OROP", "GRTOP", "LESSOP", "EQCHK", "NONEQCHK",
  "ADDOP", "SUBOP", "MULOP", "DIVOP", "POWOP", "'\\n'", "$accept",
  "PROGRAMM_DEF", "STRUCT_FN", "STRUCT_DEFN", "NEWLINE", "FUNCTION_DEC",
  "FUNCTION_DECLARATION", "FUNCTION_STRC", "FUNC_PARAMS", "FUNC_BODY",
  "VAR_DECL", "VAR_BODY", "DATA_TYPE", "VAR_LIST", "DECL_ID", "VAR_ID",
  "RTN_VAL", "LITERAL", "COMMAND_BODY", "COMMAND", "ASSIGN_CMD",
  "LOOP_CMD", "WHILE_CMD", "LOGIC_COND", "LOGIC_OP", "FOR_CMD",
  "CONTRL_CMD", "IF_CMD", "ELIF_STR", "ELIF", "ELIF_BOD", "ELSE_BOD",
  "SWITCH_CMD", "CASE_BOD", "CASE_STR", "DEFAULT_BOD", "PRINT_CMD", "TEXT",
  "TEXT_MUL", "TEXT_SINGL", "BREAK_CMD", "EXPRESSION", "EXPR_PART",
  "FUNC_CALL", "FUNC_PARMSCALL", "BASIC_OPER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    -2,    23,   -41,  -144,   -32,  -144,    25,    30,    19,
      54,    47,    20,    61,    81,    85,  -144,    54,  -144,   -32,
      34,    56,   -32,  -144,    64,   -32,    50,   122,    22,    77,
      64,    64,  -144,  -144,  -144,   -29,  -144,  -144,  -144,  -144,
      60,    11,    62,    65,    66,    70,   212,    71,    90,   212,
     -32,   -32,  -144,  -144,   -32,  -144,  -144,   -32,   -32,  -144,
    -144,    88,    55,   -32,  -144,    89,    50,    43,    16,    68,
      16,    16,    67,  -144,   103,    16,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,    44,  -144,  -144,
      94,  -144,   180,  -144,    78,    16,  -144,    76,    24,    32,
    -144,   127,    80,    92,    31,  -144,    93,    55,   -32,   -32,
      59,   111,   183,   118,    63,    96,   -32,  -144,  -144,  -144,
    -144,  -144,  -144,    16,  -144,  -144,  -144,  -144,  -144,    16,
     125,   115,   -32,  -144,  -144,  -144,  -144,    95,  -144,    31,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   -32,  -144,   -32,
      59,   124,    59,   106,   108,   110,  -144,   109,   112,  -144,
     212,  -144,  -144,   153,   -32,   128,    -9,  -144,  -144,  -144,
     -32,    59,   -32,    50,  -144,   147,   145,   212,   121,   133,
     128,   131,   129,  -144,   -32,  -144,   135,  -144,   170,   152,
      16,   141,   139,  -144,  -144,    11,  -144,   -32,   -32,   146,
    -144,   152,   142,   -32,  -144,   151,   212,   212,   -32,   160,
    -144,   159,   212,   150,   184,  -144,   212,  -144,   -32,  -144,
     164,  -144,  -144,   212,  -144,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    10,    11,     7,     0,     0,
      13,     5,     0,     0,     0,     0,    12,    14,     6,    10,
       0,     0,    10,    15,     0,    10,     0,     0,     0,     0,
      25,     0,    17,    18,    19,     0,    36,    37,    38,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      10,    10,    51,    52,    10,    62,    63,    10,    10,    29,
      28,     0,     0,    10,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     3,    44,    45,    46,
      47,    48,    49,    30,    33,    34,    35,     0,    31,     8,
       0,    20,     0,    93,    37,     0,    94,     0,     0,    90,
      95,     0,     0,     0,    82,     2,     0,     0,    10,    10,
       0,     0,     0,     0,     0,     0,    10,    55,    56,    57,
      58,    59,    60,     0,   102,   103,   104,   105,   106,     0,
       0,     0,    10,    86,    85,    87,    88,     0,    81,    83,
      50,    32,    27,     9,    41,    42,    40,    10,    39,    10,
       0,     0,     0,    17,    18,    19,   100,     0,     0,    92,
       0,    54,    91,     0,    10,     0,     0,    84,    24,    16,
      10,     0,    10,     0,    96,     0,     0,     0,     0,    76,
      73,     0,     0,    23,    10,    22,    20,    53,     0,    66,
       0,     0,     0,    74,    80,     0,    21,    10,    10,    71,
      65,    67,     0,    10,    72,     0,     0,     0,    10,     0,
      68,     0,    78,     0,     0,    69,     0,    64,    10,    77,
       0,    61,    70,     0,    79,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,   -19,  -144,   190,  -144,   -64,  -144,
     -15,  -144,  -144,   102,  -144,   -23,  -143,  -144,   -36,  -144,
    -144,  -144,  -144,   140,  -144,  -144,  -144,  -144,  -144,    13,
    -144,  -144,  -144,    45,  -144,  -144,  -144,  -144,    73,  -144,
    -144,   -70,  -144,  -144,  -144,  -144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    10,    11,     7,    15,    16,    17,    35,   111,
      29,    30,    62,    87,    88,    47,   147,   148,    48,    49,
      50,    51,    52,    97,   123,    53,    54,    55,   199,   200,
     201,   209,    56,   179,   180,   192,    57,   137,   138,   139,
      58,    98,    99,   100,   158,   129
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   103,    91,    27,     1,   106,    31,   170,     3,   172,
      74,    66,    46,    77,    36,    64,    65,    67,    69,    36,
      93,    37,    38,     4,     5,   115,    94,    38,   184,    59,
      60,    78,    79,     6,   133,    80,   134,   181,    81,    82,
     182,   135,   136,    13,    89,    96,    61,    96,    96,     8,
     157,     9,    96,   161,    32,    33,   113,    12,    84,   162,
      34,    95,    36,   144,   145,    85,    86,   153,   154,    37,
      38,    18,    96,   155,   156,    14,   151,   112,   117,   118,
     119,   120,   121,   122,   107,    19,   108,   146,    20,   142,
     143,    21,   124,   125,   126,   127,   128,   160,    22,    25,
      96,    26,    63,    28,    76,    68,    96,    70,    92,   186,
      71,    72,    73,   165,    75,    83,    90,   105,   104,   109,
     202,   101,   116,   114,   175,    36,   131,   146,   168,   146,
     169,   130,    37,    38,   149,   140,    39,    40,   132,    41,
     152,   189,   159,   163,   164,   177,   171,   166,   146,   173,
      42,   183,   -97,   185,   -98,    43,   -99,   176,   174,    44,
      45,    28,   178,   187,   188,   196,   190,    96,   191,   195,
     214,   215,   205,   194,   197,   204,   219,   208,   206,   207,
     222,  -101,   198,    36,   212,   203,    36,   225,   211,   216,
      37,    38,   217,    37,    38,    40,   220,    41,    40,   223,
      41,   213,   110,   218,   221,   150,   224,    23,    42,   141,
     102,    42,   167,    43,   210,    36,    43,    44,    45,    28,
      44,    45,    37,    38,     0,   193,     0,    40,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,    43,     0,     0,     0,    44,
      45
};

static const yytype_int16 yycheck[] =
{
      19,    71,    66,    22,    12,    75,    25,   150,    10,   152,
      46,    40,    27,    49,     3,    30,    31,    46,    41,     3,
       4,    10,    11,     0,    65,    95,    10,    11,   171,     7,
       8,    50,    51,    65,     3,    54,     5,    46,    57,    58,
      49,    10,    11,    24,    63,    68,    24,    70,    71,    24,
     114,    26,    75,   123,     4,     5,    92,    27,     3,   129,
      10,    45,     3,     4,     5,    10,    11,     4,     5,    10,
      11,    24,    95,    10,    11,    21,   112,    92,    54,    55,
      56,    57,    58,    59,    40,    65,    42,   110,    27,   108,
     109,    10,    60,    61,    62,    63,    64,   116,    13,    65,
     123,    45,    25,    39,    14,    45,   129,    45,    65,   173,
      45,    45,    42,   132,    43,    27,    27,    14,    51,    25,
     190,    53,    46,    45,   160,     3,    46,   150,   147,   152,
     149,     4,    10,    11,    23,    42,    14,    15,    46,    17,
      22,   177,    46,    18,    29,   164,    22,    52,   171,    40,
      28,   170,    46,   172,    46,    33,    46,     4,    46,    37,
      38,    39,    34,    16,    19,   184,    45,   190,    35,    40,
     206,   207,   195,    42,     4,    36,   212,    31,   197,   198,
     216,    46,    30,     3,   203,    44,     3,   223,    46,   208,
      10,    11,    32,    10,    11,    15,    46,    17,    15,   218,
      17,    50,    22,    44,    20,    22,    42,    17,    28,   107,
      70,    28,   139,    33,   201,     3,    33,    37,    38,    39,
      37,    38,    10,    11,    -1,   180,    -1,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    67,    10,     0,    65,    65,    70,    24,    26,
      68,    69,    27,    24,    21,    71,    72,    73,    24,    65,
      27,    10,    13,    72,    70,    65,    45,    70,    39,    76,
      77,    70,     4,     5,    10,    74,     3,    10,    11,    14,
      15,    17,    28,    33,    37,    38,    76,    81,    84,    85,
      86,    87,    88,    91,    92,    93,    98,   102,   106,     7,
       8,    24,    78,    25,    76,    76,    40,    46,    45,    81,
      45,    45,    45,    42,    84,    43,    14,    84,    70,    70,
      70,    70,    70,    27,     3,    10,    11,    79,    80,    70,
      27,    74,    65,     4,    10,    45,    81,    89,   107,   108,
     109,    53,    89,   107,    51,    14,   107,    40,    42,    25,
      22,    75,    76,    84,    45,   107,    46,    54,    55,    56,
      57,    58,    59,    90,    60,    61,    62,    63,    64,   111,
       4,    46,    46,     3,     5,    10,    11,   103,   104,   105,
      42,    79,    70,    70,     4,     5,    81,    82,    83,    23,
      22,    84,    22,     4,     5,    10,    11,    74,   110,    46,
      70,   107,   107,    18,    29,    70,    52,   104,    70,    70,
      82,    22,    82,    40,    46,    84,     4,    70,    34,    99,
     100,    46,    49,    70,    82,    70,    74,    16,    19,    84,
      45,    35,   101,    99,    42,    40,    70,     4,    30,    94,
      95,    96,   107,    44,    36,    81,    70,    70,    31,    97,
      95,    46,    70,    50,    84,    84,    70,    32,    44,    84,
      46,    20,    84,    70,    42,    84
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    74,
      74,    75,    75,    75,    75,    76,    76,    77,    78,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    85,    85,    85,
      86,    87,    87,    88,    89,    90,    90,    90,    90,    90,
      90,    91,    92,    92,    93,    94,    94,    95,    95,    96,
      97,    97,    98,    99,    99,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   106,
     107,   107,   107,   108,   108,   108,   109,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    11,    10,     9,     1,     2,     0,     7,     9,
       0,     1,     1,     0,     1,     2,     9,     1,     1,     1,
       3,     5,     4,     4,     3,     1,     2,     5,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       4,     1,     1,     7,     3,     1,     1,     1,     1,     1,
       1,    11,     1,     1,    10,     1,     0,     1,     2,     3,
       3,     0,     8,     1,     2,     7,     0,     4,     3,    11,
       7,     1,     0,     1,     2,     1,     1,     1,     1,     2,
       1,     3,     3,     1,     1,     1,     4,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 16: /* FUNCTION_STRC: FUNCTION IDENTIFIER BRACKET_OPEN FUNC_PARAMS BRACKET_CLOSE '\n' FUNC_BODY END_FUNCTION NEWLINE  */
#line 156 "y.y"
                   {    //install( $2 );
                         if(install( (yyvsp[-7].strVal) ) == 1){
                            char stringAlrd[500] = "Existing definition for function ";
  
                            char *funcName = (yyvsp[-7].strVal);
   
                            strcat(stringAlrd, funcName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd);     
                            }
                     }
#line 2009 "y.tab.c"
    break;

  case 34: /* DECL_ID: IDENTIFIER  */
#line 210 "y.y"
       { 
          if(install( (yyvsp[0].strVal) ) == 1){
             char stringAlrd[500] = "Existing definition for variable ";
  
             char *varName = (yyvsp[0].strVal);
   
                            strcat(stringAlrd, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd); 

          } 
          
       }
#line 2029 "y.tab.c"
    break;

  case 35: /* DECL_ID: ARRAY_IDENTIFIER  */
#line 226 "y.y"
       { 
          if(install( (yyvsp[0].strVal) ) == 1){
             char stringAlrd[500] = "Existing definition for variable ";
  
             char *varName = (yyvsp[0].strVal);
   
                            strcat(stringAlrd, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd); 

          } 
          
       }
#line 2049 "y.tab.c"
    break;

  case 37: /* VAR_ID: IDENTIFIER  */
#line 244 "y.y"
       {    //install( $2 );
                         if(context_check( (yyvsp[0].strVal) ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = (yyvsp[0].strVal);
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }
#line 2067 "y.tab.c"
    break;

  case 38: /* VAR_ID: ARRAY_IDENTIFIER  */
#line 258 "y.y"
       {    //install( $2 );
                         if(context_check( (yyvsp[0].strVal) ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = (yyvsp[0].strVal);
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }
#line 2085 "y.tab.c"
    break;

  case 96: /* FUNC_CALL: IDENTIFIER BRACKET_OPEN FUNC_PARMSCALL BRACKET_CLOSE  */
#line 402 "y.y"
{if(context_check( (yyvsp[-3].strVal) ) == 1) {
  
  char stringSampl[500] = "Not existing declaration for function ";
  
  char *funcName = (yyvsp[-3].strVal);
   
  strcat(stringSampl, funcName);

  //printf("Here is the name of func %s",stringSampl);

  yyerror(stringSampl);
  } 
 }
#line 2103 "y.tab.c"
    break;

  case 99: /* FUNC_PARMSCALL: IDENTIFIER  */
#line 419 "y.y"
            {    //install( $2 );
                         if(context_check( (yyvsp[0].strVal) ) == 1){
                            char notDefVarF[500] = "Not existing definition for variable ";
  
                            char *varName = (yyvsp[0].strVal);
   
                            strcat(notDefVarF, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVarF);     
                            }
                     }
#line 2121 "y.tab.c"
    break;

  case 100: /* FUNC_PARMSCALL: ARRAY_IDENTIFIER  */
#line 433 "y.y"
                        {    
                           if(context_check( (yyvsp[0].strVal) ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = (yyvsp[0].strVal);
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }
#line 2139 "y.tab.c"
    break;


#line 2143 "y.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 454 "y.y"



int main(){

  yyparse();
  printf("No Errors!!\n");

  return 0;
}

