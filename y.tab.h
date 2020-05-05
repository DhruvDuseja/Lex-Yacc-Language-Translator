/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMENT = 258,
    PROC = 259,
    MAIN = 260,
    BEGN = 261,
    COLON = 262,
    END = 263,
    VAR_DECL = 264,
    INT = 265,
    CHAR = 266,
    FLOAT = 267,
    DOUBLE = 268,
    WRITE = 269,
    READ = 270,
    FOR = 271,
    TO = 272,
    OF = 273,
    DO = 274,
    ENDFOR = 275,
    IF = 276,
    ELSEIF = 277,
    ELSE = 278,
    ENDIF = 279,
    GOTO = 280,
    REPEAT = 281,
    UNTIL = 282,
    WHILE = 283,
    ENDWHILE = 284,
    ARROW = 285,
    LB = 286,
    RB = 287,
    SC = 288,
    COMA = 289,
    ASSIGNMENT = 290,
    LAND = 291,
    LOR = 292,
    GEQ = 293,
    LEQ = 294,
    GT = 295,
    LT = 296,
    NEQ = 297,
    DEQ = 298,
    PLUS = 299,
    MINUS = 300,
    MUL = 301,
    DIV = 302,
    MOD = 303,
    NOT = 304,
    TEXT = 305,
    VAR = 306,
    NUMBER = 307,
    ARRAY = 308
  };
#endif
/* Tokens.  */
#define COMMENT 258
#define PROC 259
#define MAIN 260
#define BEGN 261
#define COLON 262
#define END 263
#define VAR_DECL 264
#define INT 265
#define CHAR 266
#define FLOAT 267
#define DOUBLE 268
#define WRITE 269
#define READ 270
#define FOR 271
#define TO 272
#define OF 273
#define DO 274
#define ENDFOR 275
#define IF 276
#define ELSEIF 277
#define ELSE 278
#define ENDIF 279
#define GOTO 280
#define REPEAT 281
#define UNTIL 282
#define WHILE 283
#define ENDWHILE 284
#define ARROW 285
#define LB 286
#define RB 287
#define SC 288
#define COMA 289
#define ASSIGNMENT 290
#define LAND 291
#define LOR 292
#define GEQ 293
#define LEQ 294
#define GT 295
#define LT 296
#define NEQ 297
#define DEQ 298
#define PLUS 299
#define MINUS 300
#define MUL 301
#define DIV 302
#define MOD 303
#define NOT 304
#define TEXT 305
#define VAR 306
#define NUMBER 307
#define ARRAY 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "project.y"

int data_type;
char var_name[30];
int value;
char text[30];

#line 170 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
