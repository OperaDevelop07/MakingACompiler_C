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

#line 136 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
