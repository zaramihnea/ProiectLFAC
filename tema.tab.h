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
     STRNG = 258,
     INT = 259,
     CHARV = 260,
     BOOLV = 261,
     FLOATV = 262,
     PRINT = 263,
     EVAL = 264,
     CLASS = 265,
     CONST = 266,
     ASSIGN = 267,
     OPERATOR = 268,
     LOGICAL_OPERATOR = 269,
     BGIN = 270,
     IF = 271,
     ELSE = 272,
     THEN = 273,
     ENDIF = 274,
     FOR = 275,
     WHILE = 276,
     OVER = 277,
     DO = 278,
     START_CLASA = 279,
     END_CLASA = 280,
     END = 281,
     ID = 282,
     NR = 283,
     FLOAT = 284,
     BOOL = 285,
     CHAR = 286,
     STRING = 287,
     FUNCTIE = 288,
     VECTOR = 289,
     UTYPE = 290,
     GVAR = 291,
     GFUNC = 292,
     START_FUNC = 293,
     END_FUNC = 294,
     TYPEOF = 295
   };
#endif
/* Tokens.  */
#define STRNG 258
#define INT 259
#define CHARV 260
#define BOOLV 261
#define FLOATV 262
#define PRINT 263
#define EVAL 264
#define CLASS 265
#define CONST 266
#define ASSIGN 267
#define OPERATOR 268
#define LOGICAL_OPERATOR 269
#define BGIN 270
#define IF 271
#define ELSE 272
#define THEN 273
#define ENDIF 274
#define FOR 275
#define WHILE 276
#define OVER 277
#define DO 278
#define START_CLASA 279
#define END_CLASA 280
#define END 281
#define ID 282
#define NR 283
#define FLOAT 284
#define BOOL 285
#define CHAR 286
#define STRING 287
#define FUNCTIE 288
#define VECTOR 289
#define UTYPE 290
#define GVAR 291
#define GFUNC 292
#define START_FUNC 293
#define END_FUNC 294
#define TYPEOF 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "tema.y"
{
int valoare;
float valoare_float;
char caracter;
char* valoare_bool;
char* nume;
char* string;
}
/* Line 1529 of yacc.c.  */
#line 138 "tema.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

