/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BGIN = 258,
     END = 259,
     ASSIGN = 260,
     NR = 261,
     FLOAT = 262,
     CHAR = 263,
     BOOL = 264,
     STRING = 265,
     PRINT = 266,
     IF = 267,
     ELSE = 268,
     FOR = 269,
     WHILE = 270,
     EVAL = 271,
     TYPEOF = 272,
     CONST = 273,
     START_CLASA = 274,
     DO = 275,
     END_CLASA = 276,
     START_FUNC = 277,
     END_FUNC = 278,
     LOGICAL_OPERATOR = 279,
     GVAR = 280,
     GFUNC = 281,
     UTYPE = 282,
     ID = 283,
     TYPE = 284,
     FUNCTIE = 285,
     VECTOR = 286,
     CLASS = 287
   };
#endif
/* Tokens.  */
#define BGIN 258
#define END 259
#define ASSIGN 260
#define NR 261
#define FLOAT 262
#define CHAR 263
#define BOOL 264
#define STRING 265
#define PRINT 266
#define IF 267
#define ELSE 268
#define FOR 269
#define WHILE 270
#define EVAL 271
#define TYPEOF 272
#define CONST 273
#define START_CLASA 274
#define DO 275
#define END_CLASA 276
#define START_FUNC 277
#define END_FUNC 278
#define LOGICAL_OPERATOR 279
#define GVAR 280
#define GFUNC 281
#define UTYPE 282
#define ID 283
#define TYPE 284
#define FUNCTIE 285
#define VECTOR 286
#define CLASS 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
<<<<<<< HEAD
#line 15 "limbaj.y"
=======
#line 14 "limbaj.y"
>>>>>>> refs/remotes/origin/main
{
char* string;
int value_int;
float value_float;
char value_char;
bool value_bool;
}
/* Line 1529 of yacc.c.  */
#line 121 "limbaj.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

