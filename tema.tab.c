/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "tema.y"

#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
#include "functii.h"
int yylex();
int yyerror(char * s);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "tema.y"
{
int valoare;
float valoare_float;
char caracter;
char* valoare_bool;
char* nume;
char* string;
}
/* Line 193 of yacc.c.  */
#line 196 "tema.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 209 "tema.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   911

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  330

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      47,    48,    43,    41,    51,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    12,    17,    23,    30,    33,    37,
      42,    48,    54,    63,    69,    78,    84,    93,    98,    99,
     102,   106,   107,   113,   120,   127,   136,   142,   151,   157,
     166,   172,   181,   184,   187,   190,   193,   196,   201,   207,
     213,   219,   225,   231,   236,   241,   246,   251,   255,   259,
     263,   267,   273,   279,   285,   291,   297,   299,   303,   306,
     309,   312,   315,   319,   322,   326,   328,   331,   334,   338,
     342,   348,   354,   360,   366,   369,   372,   377,   382,   385,
     387,   390,   395,   400,   404,   406,   408,   410,   412,   417,
     421,   425,   431,   437,   439,   441,   446,   448,   450,   452,
     454,   457,   462,   464,   466,   470,   474,   479,   486,   494,
     502,   510,   526,   530
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    35,    54,    36,    56,    37,    57,    62,
      -1,    -1,    59,    24,    63,    25,    -1,    54,    59,    24,
      63,    25,    -1,    10,    27,    24,    55,    25,    46,    -1,
      58,    46,    -1,    55,    58,    46,    -1,    59,    24,    63,
      25,    -1,    55,    59,    24,    63,    25,    -1,     4,    33,
      47,    60,    48,    -1,     4,    33,    47,    60,    48,    49,
      63,    50,    -1,     5,    33,    47,    60,    48,    -1,     5,
      33,    47,    60,    48,    49,    63,    50,    -1,     7,    33,
      47,    60,    48,    -1,     7,    33,    47,    60,    48,    49,
      63,    50,    -1,     6,    33,    47,    60,    -1,    -1,    58,
      46,    -1,    56,    58,    46,    -1,    -1,    59,    38,    63,
      39,    46,    -1,    57,    59,    38,    63,    39,    46,    -1,
       4,    33,    47,    60,    48,    46,    -1,     4,    33,    47,
      60,    48,    49,    63,    50,    -1,     5,    33,    47,    60,
      48,    -1,     5,    33,    47,    60,    48,    49,    63,    50,
      -1,     7,    33,    47,    60,    48,    -1,     7,    33,    47,
      60,    48,    49,    63,    50,    -1,     6,    33,    47,    60,
      48,    -1,     6,    33,    47,    60,    48,    49,    63,    50,
      -1,     3,    27,    -1,     5,    27,    -1,     7,    27,    -1,
       4,    27,    -1,     6,    27,    -1,     3,    27,    12,    32,
      -1,    11,     3,    27,    12,    32,    -1,    11,     4,    27,
      12,    28,    -1,    11,     6,    27,    12,    30,    -1,    11,
       7,    27,    12,    29,    -1,    11,     5,    27,    12,    31,
      -1,     4,    27,    12,    28,    -1,     7,    27,    12,    29,
      -1,     5,    27,    12,    31,    -1,     6,    27,    12,    30,
      -1,     4,    34,    28,    -1,     7,    34,    28,    -1,     5,
      34,    28,    -1,     6,    34,    28,    -1,     5,    33,    28,
      12,    32,    -1,     4,    33,    47,    60,    48,    -1,     5,
      33,    47,    60,    48,    -1,     7,    33,    47,    60,    48,
      -1,     6,    33,    47,    60,    48,    -1,    61,    -1,    60,
      51,    61,    -1,     7,    27,    -1,     5,    27,    -1,     4,
      27,    -1,     6,    27,    -1,    15,    63,    26,    -1,    64,
      46,    -1,    63,    64,    46,    -1,    69,    -1,    63,    69,
      -1,    58,    46,    -1,    63,    58,    46,    -1,    27,    12,
      67,    -1,    27,    12,    27,    41,    27,    -1,    27,    12,
      28,    41,    28,    -1,    27,    12,    27,    41,    28,    -1,
      27,    12,    28,    41,    27,    -1,     9,    28,    -1,     9,
      27,    -1,     9,    28,    41,    28,    -1,     9,    27,    41,
      28,    -1,     9,    31,    -1,     8,    -1,     8,    27,    -1,
      33,    47,    68,    48,    -1,    40,    47,    65,    48,    -1,
      65,    13,    66,    -1,    66,    -1,    27,    -1,    28,    -1,
      29,    -1,    33,    47,    68,    48,    -1,    67,    13,    67,
      -1,    67,    14,    67,    -1,    47,    67,    14,    67,    48,
      -1,    47,    67,    13,    67,    48,    -1,    27,    -1,    31,
      -1,    33,    47,    68,    48,    -1,    28,    -1,    32,    -1,
      29,    -1,    30,    -1,    27,    33,    -1,    34,    47,    28,
      48,    -1,    28,    -1,    27,    -1,    68,    51,    28,    -1,
      68,    51,    27,    -1,    33,    47,    68,    48,    -1,    68,
      51,    33,    47,    68,    48,    -1,    16,    27,    14,    67,
      18,    63,    70,    -1,    16,    27,    13,    67,    18,    63,
      70,    -1,    21,    27,    14,    67,    23,    63,    22,    -1,
      20,    27,    14,    67,    51,    27,    14,    67,    51,    27,
      13,    13,    23,    63,    22,    -1,    17,    63,    70,    -1,
      19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    36,    37,    38,    39,    50,    51,    52,
      53,    54,    63,    72,    81,    90,    99,   108,   110,   111,
     112,   114,   115,   116,   117,   126,   135,   144,   153,   162,
     171,   180,   192,   201,   210,   219,   228,   237,   246,   256,
     266,   276,   286,   296,   305,   314,   323,   332,   341,   350,
     359,   368,   383,   387,   391,   395,   402,   403,   407,   410,
     413,   416,   423,   426,   427,   428,   429,   430,   431,   434,
     451,   465,   479,   493,   507,   510,   528,   531,   540,   543,
     546,   562,   579,   588,   589,   593,   600,   607,   614,   618,
     619,   620,   621,   622,   631,   632,   642,   645,   648,   651,
     654,   660,   672,   673,   677,   678,   682,   699,   704,   711,
     718,   725,   736,   737
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRNG", "INT", "CHARV", "BOOLV",
  "FLOATV", "PRINT", "EVAL", "CLASS", "CONST", "ASSIGN", "OPERATOR",
  "LOGICAL_OPERATOR", "BGIN", "IF", "ELSE", "THEN", "ENDIF", "FOR",
  "WHILE", "OVER", "DO", "START_CLASA", "END_CLASA", "END", "ID", "NR",
  "FLOAT", "BOOL", "CHAR", "STRING", "FUNCTIE", "VECTOR", "UTYPE", "GVAR",
  "GFUNC", "START_FUNC", "END_FUNC", "TYPEOF", "'+'", "'-'", "'*'", "'/'",
  "'%'", "';'", "'('", "')'", "'['", "']'", "','", "$accept", "progr",
  "usert", "interior_clasa", "globvar", "globfunc", "variabila", "functie",
  "lista_parametri", "parametru", "main_program", "instructiuni",
  "instructiune", "expresii", "expresie", "right", "apeluri", "operatie",
  "continuare_if", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    43,    45,    42,    47,    37,    59,    40,    41,    91,
      93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    62,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     4,     5,     6,     2,     3,     4,
       5,     5,     8,     5,     8,     5,     8,     4,     0,     2,
       3,     0,     5,     6,     6,     8,     5,     8,     5,     8,
       5,     8,     2,     2,     2,     2,     2,     4,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     3,     3,     3,
       3,     5,     5,     5,     5,     5,     1,     3,     2,     2,
       2,     2,     3,     2,     3,     1,     2,     2,     3,     3,
       5,     5,     5,     5,     2,     2,     4,     4,     2,     1,
       2,     4,     4,     3,     1,     1,     1,     1,     4,     3,
       3,     5,     5,     1,     1,     4,     1,     1,     1,     1,
       2,     4,     1,     1,     3,     3,     4,     6,     7,     7,
       7,    15,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    35,     0,    33,     0,     0,    36,     0,    34,
       0,     0,     0,     0,     0,     0,    21,     0,    19,     0,
      80,    75,    74,    78,     0,     0,     0,     0,     0,     0,
      67,     4,     0,     0,    66,    63,    60,    59,    61,    58,
      52,     0,    53,    55,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      47,     0,     0,    49,     0,    50,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       5,     0,     0,     0,     0,     0,     0,    93,    96,    98,
      99,    94,    97,     0,     0,     0,    69,   103,   102,     0,
       0,    85,    86,    87,     0,     0,    84,    68,    64,    57,
       0,     0,     0,     0,     0,     6,     8,     0,     0,    37,
      43,    45,     0,    46,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    77,    76,
      93,    96,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,    17,     0,     0,     9,    51,    38,    39,    42,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    72,    73,    71,     0,     0,     0,
       0,    89,    90,     0,   105,   104,     0,     0,    83,    11,
      13,    15,    10,     0,     0,     0,     0,    62,     0,     0,
       0,     0,     0,     0,    95,   101,     0,     0,   106,     0,
      88,     0,     0,     0,    52,    26,    30,    28,     0,    22,
       0,   113,   109,   108,     0,   110,    92,    91,     0,     0,
       0,     0,    24,     0,     0,     0,     0,    23,     0,     0,
     107,    12,    14,    16,     0,     0,     0,     0,   112,     0,
      25,    27,    31,    29,     0,     0,     0,     0,     0,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    58,    30,   137,    41,     9,    49,    50,
     196,    42,    43,   165,   166,   156,   160,    44,   292
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -270
static const yytype_int16 yypact[] =
{
     -14,   406,    37,    17,    21,    34,    43,    44,    80,    55,
    -270,    68,    79,    81,   105,    57,   315,    78,   871,   284,
     284,   284,   284,   338,   138,   102,   106,   107,   122,   434,
     116,   137,   871,   161,   186,   188,   194,   196,    49,   181,
     187,   201,   529,   203,  -270,   229,   252,   259,   270,   -40,
    -270,    63,   113,   142,   124,   136,   144,   158,   239,   268,
     286,   311,   312,   308,   328,   323,   335,   344,   336,   353,
     347,   349,   350,   358,   365,   372,   423,   354,  -270,   567,
    -270,   360,   366,  -270,   264,   400,   418,   301,   242,   153,
    -270,  -270,   363,   387,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,   284,  -270,  -270,  -270,   398,    12,   416,   421,   176,
     192,   206,   226,   388,   420,   447,  -270,   871,   440,   448,
    -270,   444,   465,  -270,   449,  -270,   452,  -270,   466,   470,
     471,   472,   473,   454,   455,   456,   457,    93,   463,  -270,
    -270,   464,   476,   340,   340,   340,   340,    91,   450,  -270,
    -270,  -270,  -270,   458,   459,   340,   291,  -270,  -270,   462,
     200,  -270,  -270,  -270,   467,    14,  -270,  -270,  -270,  -270,
     284,   284,   284,   284,    27,  -270,  -270,   871,   605,  -270,
    -270,  -270,   481,  -270,  -270,   483,   488,   486,   489,   492,
     475,   478,   479,   480,   871,   482,  -270,   871,  -270,  -270,
     490,  -270,   289,   380,    -4,    90,  -270,   110,   178,   242,
     500,   302,   340,   340,   242,  -270,   254,   242,   153,  -270,
     210,   215,   113,   217,   643,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   284,   284,   284,   284,   681,   871,   719,   871,
     871,   502,   871,  -270,  -270,  -270,  -270,   299,   493,   340,
     340,   291,   291,   310,  -270,  -270,   495,   395,  -270,   -11,
      11,    46,  -270,   396,   401,   402,   403,  -270,   757,   484,
     491,   491,   525,   795,  -270,  -270,    30,    35,  -270,   242,
    -270,   871,   871,   871,   155,    15,    19,    28,   497,  -270,
     871,  -270,  -270,  -270,   340,  -270,  -270,  -270,   419,    25,
      85,   139,  -270,   871,   871,   871,   871,  -270,   491,     5,
    -270,  -270,  -270,  -270,   191,   375,   415,   453,  -270,   517,
    -270,  -270,  -270,  -270,   533,   534,   528,   871,   833,  -270
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,  -270,  -270,   -16,    -7,     3,   451,
    -270,   -10,    38,  -270,   330,  -140,  -197,    89,  -269
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      31,    17,   293,   202,   203,   204,   205,    59,   100,   212,
     213,   101,   247,   -52,    77,   211,    60,   253,   212,   213,
     257,     1,    79,    51,    52,    53,    92,   218,    24,    25,
      26,    27,    28,    33,    34,   -53,    29,    10,   281,   318,
     122,    35,   114,   212,   213,    36,    37,   241,   212,   213,
      11,   115,    38,   -53,    12,   122,   319,   -55,    39,   171,
     282,    87,   219,    92,   304,    40,   -54,    13,   305,   138,
     -54,    15,   251,   252,    20,   311,    14,   306,   296,    18,
      93,    23,   298,   297,     3,     4,     5,     6,    24,    25,
      26,    27,    28,    33,    34,   283,    29,     3,     4,     5,
       6,    35,    32,   212,   213,    36,    37,   178,   194,   276,
     277,   102,    38,   242,   101,    19,    16,    93,    39,    24,
      25,    26,    27,    28,   206,    40,    20,    29,    21,    62,
     195,    94,   207,    64,    67,   312,    63,   243,   244,    65,
      66,    68,    24,    25,    26,    27,    28,    33,    34,    69,
      29,    62,    22,    76,   309,    35,    70,   105,    63,    36,
      37,   103,    92,    64,   101,    61,    38,   224,    94,   106,
      66,    67,    39,   220,   221,   222,   223,   107,    68,    40,
     161,   162,   163,    78,   236,    69,   164,   238,    80,   313,
     104,   108,    70,   101,    24,    25,    26,    27,    28,    33,
      34,   302,    29,    62,   303,   245,   246,    35,    92,    11,
      63,    36,    37,    81,    82,    84,    93,    83,    38,    64,
      92,    85,    92,    86,    39,   174,    66,   268,    88,   270,
     271,    40,   273,    67,    89,   263,   264,   265,   266,    13,
      68,   320,    24,   109,   110,   111,   112,    90,   215,    95,
      29,   216,    92,    69,    92,    92,    96,    92,   259,    14,
      70,   101,    93,   260,   113,   261,   101,    94,   101,   157,
     158,   299,   300,   301,    93,   159,    93,   143,   144,    97,
     308,   254,   255,    92,    92,    92,    98,   256,    45,    46,
      47,    48,    92,   314,   315,   316,   317,    99,    92,    92,
      92,    92,   212,   213,   212,   213,    93,   239,    93,    93,
     117,    93,    92,    94,   116,   249,   250,   328,    24,    25,
      26,    27,    28,   118,   119,    94,    29,    94,   147,   148,
     149,   150,   151,   152,   153,   154,   120,    93,    93,    93,
     121,    24,    54,    55,    56,    57,    93,   274,   155,    29,
     216,   122,    93,    93,    93,    93,   124,    94,   278,    94,
      94,   216,    94,   123,   125,   126,    93,   200,   201,   149,
     150,   151,   152,   153,   154,   127,   128,   129,    24,    25,
      26,    27,    28,    33,    34,   130,    29,   155,    94,    94,
      94,    35,   131,   212,   213,    36,    37,    94,   240,   132,
     139,   141,    38,    94,    94,    94,    94,   142,    39,   167,
       3,     4,     5,     6,   145,    40,     7,    94,    24,    25,
      26,    27,    28,    33,    34,   321,    29,   133,   134,   135,
     136,    35,   146,   168,   175,    36,    37,    71,    72,    73,
      74,    75,    38,   280,   284,   170,   216,   101,    39,   285,
     286,   287,   101,   101,   101,    40,    24,    25,    26,    27,
      28,    33,    34,   172,    29,   322,   176,   310,   173,    35,
     216,   177,   179,    36,    37,   181,   180,   182,   185,   183,
      38,   184,   186,   187,   188,   189,    39,   190,   191,   192,
     193,   208,   198,    40,    24,    25,    26,    27,    28,    33,
      34,   197,    29,   323,   199,   209,   210,    35,   290,   214,
     291,    36,    37,   226,   217,   227,   228,   229,    38,   230,
     237,   231,   232,   206,    39,   233,   234,   235,   248,   272,
     289,    40,    24,    25,    26,    27,    28,    33,    34,   294,
      29,   275,   279,   307,   324,    35,   325,   326,   258,    36,
      37,   327,   169,     0,    91,     0,    38,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
      24,    25,    26,    27,    28,    33,    34,     0,    29,     0,
       0,     0,     0,    35,     0,     0,     0,    36,    37,     0,
       0,     0,   140,     0,    38,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    40,    24,    25,
      26,    27,    28,    33,    34,     0,    29,     0,     0,     0,
       0,    35,     0,     0,     0,    36,    37,     0,     0,     0,
     225,     0,    38,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    40,    24,    25,    26,    27,
      28,    33,    34,     0,    29,     0,     0,     0,     0,    35,
       0,     0,     0,    36,    37,     0,     0,     0,   262,     0,
      38,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    40,    24,    25,    26,    27,    28,    33,
      34,     0,    29,     0,     0,     0,     0,    35,     0,     0,
       0,    36,    37,     0,     0,     0,     0,   267,    38,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40,    24,    25,    26,    27,    28,    33,    34,     0,
      29,     0,     0,     0,     0,    35,     0,     0,     0,    36,
      37,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,   269,    40,
      24,    25,    26,    27,    28,    33,    34,     0,    29,     0,
       0,     0,     0,    35,     0,     0,     0,    36,    37,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,   288,    40,    24,    25,
      26,    27,    28,    33,    34,     0,    29,     0,     0,     0,
       0,    35,     0,     0,     0,    36,    37,   295,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    40,    24,    25,    26,    27,
      28,    33,    34,     0,    29,     0,     0,     0,     0,    35,
       0,     0,     0,    36,    37,   329,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    40,    24,    25,    26,    27,    28,    33,
      34,     0,    29,     0,     0,     0,     0,    35,     0,     0,
       0,    36,    37,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40
};

static const yytype_int16 yycheck[] =
{
      16,     8,   271,   143,   144,   145,   146,    23,    48,    13,
      14,    51,   209,    24,    30,   155,    23,   214,    13,    14,
     217,    35,    32,    20,    21,    22,    42,    13,     3,     4,
       5,     6,     7,     8,     9,    24,    11,     0,    49,   308,
      28,    16,    58,    13,    14,    20,    21,    51,    13,    14,
      33,    58,    27,    38,    33,    28,    51,    38,    33,    47,
      49,    12,    48,    79,    49,    40,    38,    33,    49,    76,
      24,    27,   212,   213,    47,    50,    33,    49,    48,    24,
      42,    24,   279,    48,     4,     5,     6,     7,     3,     4,
       5,     6,     7,     8,     9,    49,    11,     4,     5,     6,
       7,    16,    24,    13,    14,    20,    21,   117,    15,   249,
     250,    48,    27,    23,    51,    47,    36,    79,    33,     3,
       4,     5,     6,     7,    33,    40,    47,    11,    47,    27,
     137,    42,    41,    27,    27,    50,    34,    27,    28,    33,
      34,    34,     3,     4,     5,     6,     7,     8,     9,    27,
      11,    27,    47,    37,   294,    16,    34,    33,    34,    20,
      21,    48,   178,    27,    51,    27,    27,   177,    79,    33,
      34,    27,    33,   170,   171,   172,   173,    33,    34,    40,
      27,    28,    29,    46,   194,    27,    33,   197,    27,    50,
      48,    33,    34,    51,     3,     4,     5,     6,     7,     8,
       9,    46,    11,    27,    49,    27,    28,    16,   224,    33,
      34,    20,    21,    27,    28,    27,   178,    31,    27,    27,
     236,    27,   238,    27,    33,    33,    34,   237,    47,   239,
     240,    40,   242,    27,    47,   232,   233,   234,   235,    33,
      34,    50,     3,     4,     5,     6,     7,    46,    48,    46,
      11,    51,   268,    27,   270,   271,    27,   273,    48,    33,
      34,    51,   224,    48,    25,    48,    51,   178,    51,    27,
      28,   281,   282,   283,   236,    33,   238,    13,    14,    27,
     290,    27,    28,   299,   300,   301,    27,    33,     4,     5,
       6,     7,   308,   303,   304,   305,   306,    27,   314,   315,
     316,   317,    13,    14,    13,    14,   268,    18,   270,   271,
      24,   273,   328,   224,    46,    13,    14,   327,     3,     4,
       5,     6,     7,    12,    12,   236,    11,   238,    27,    28,
      29,    30,    31,    32,    33,    34,    28,   299,   300,   301,
      12,     3,     4,     5,     6,     7,   308,    48,    47,    11,
      51,    28,   314,   315,   316,   317,    12,   268,    48,   270,
     271,    51,   273,    28,    28,    12,   328,    27,    28,    29,
      30,    31,    32,    33,    34,    28,    27,    27,     3,     4,
       5,     6,     7,     8,     9,    27,    11,    47,   299,   300,
     301,    16,    27,    13,    14,    20,    21,   308,    18,    27,
      46,    41,    27,   314,   315,   316,   317,    41,    33,    46,
       4,     5,     6,     7,    14,    40,    10,   328,     3,     4,
       5,     6,     7,     8,     9,    50,    11,     4,     5,     6,
       7,    16,    14,    46,    46,    20,    21,     3,     4,     5,
       6,     7,    27,    48,    48,    47,    51,    51,    33,    48,
      48,    48,    51,    51,    51,    40,     3,     4,     5,     6,
       7,     8,     9,    47,    11,    50,    46,    48,    47,    16,
      51,    24,    32,    20,    21,    31,    28,    12,    12,    30,
      27,    29,    12,    12,    12,    12,    33,    33,    33,    33,
      33,    41,    28,    40,     3,     4,     5,     6,     7,     8,
       9,    38,    11,    50,    28,    47,    47,    16,    17,    47,
      19,    20,    21,    32,    47,    32,    28,    31,    27,    30,
      38,    29,    47,    33,    33,    47,    47,    47,    28,    27,
      46,    40,     3,     4,     5,     6,     7,     8,     9,    14,
      11,    48,    47,    46,    27,    16,    13,    13,   218,    20,
      21,    23,   101,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    53,     4,     5,     6,     7,    10,    54,    59,
       0,    33,    33,    33,    33,    27,    36,    59,    24,    47,
      47,    47,    47,    24,     3,     4,     5,     6,     7,    11,
      56,    58,    24,     8,     9,    16,    20,    21,    27,    33,
      40,    58,    63,    64,    69,     4,     5,     6,     7,    60,
      61,    60,    60,    60,     4,     5,     6,     7,    55,    58,
      59,    27,    27,    34,    27,    33,    34,    27,    34,    27,
      34,     3,     4,     5,     6,     7,    37,    58,    46,    63,
      27,    27,    28,    31,    27,    27,    27,    12,    47,    47,
      46,    25,    58,    64,    69,    46,    27,    27,    27,    27,
      48,    51,    48,    48,    48,    33,    33,    33,    33,     4,
       5,     6,     7,    25,    58,    59,    46,    24,    12,    12,
      28,    12,    28,    28,    12,    28,    12,    28,    27,    27,
      27,    27,    27,     4,     5,     6,     7,    57,    59,    46,
      25,    41,    41,    13,    14,    14,    14,    27,    28,    29,
      30,    31,    32,    33,    34,    47,    67,    27,    28,    33,
      68,    27,    28,    29,    33,    65,    66,    46,    46,    61,
      47,    47,    47,    47,    33,    46,    46,    24,    63,    32,
      28,    31,    12,    30,    29,    12,    12,    12,    12,    12,
      33,    33,    33,    33,    15,    59,    62,    38,    28,    28,
      27,    28,    67,    67,    67,    67,    33,    41,    41,    47,
      47,    67,    13,    14,    47,    48,    51,    47,    13,    48,
      60,    60,    60,    60,    63,    25,    32,    32,    28,    31,
      30,    29,    47,    47,    47,    47,    63,    38,    63,    18,
      18,    51,    23,    27,    28,    27,    28,    68,    28,    13,
      14,    67,    67,    68,    27,    28,    33,    68,    66,    48,
      48,    48,    25,    60,    60,    60,    60,    26,    63,    39,
      63,    63,    27,    63,    48,    48,    67,    67,    48,    47,
      48,    49,    49,    49,    48,    48,    48,    48,    39,    46,
      17,    19,    70,    70,    14,    22,    48,    48,    68,    63,
      63,    63,    46,    49,    49,    49,    49,    46,    63,    67,
      48,    50,    50,    50,    63,    63,    63,    63,    70,    51,
      50,    50,    50,    50,    27,    13,    13,    23,    63,    22
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 32 "tema.y"
    {
  printf("Program corect sintactic!\n");
;}
    break;

  case 6:
#line 39 "tema.y"
    {
    if(cl_EsteDeclarata((yyvsp[(2) - (6)].nume)) == -1) 
      cl_Declarare_definitie((yyvsp[(2) - (6)].nume)); 
    else {
      yyerror("error");
      printf("Redefiniti clasa\n");
      YYABORT;
    }
  ;}
    break;

  case 11:
#line 54 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "int"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 12:
#line 63 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (8)].nume), "int"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 13:
#line 72 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "char"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 14:
#line 81 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (8)].nume), "char"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 15:
#line 90 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "float"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 16:
#line 99 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (8)].nume), "float"); 
    else {
      yyerror("error");
      printf("Redefiniti functia\n");
      YYABORT;
    }
  ;}
    break;

  case 24:
#line 117 "tema.y"
    { 
      if(f_EsteDeclarata((yyvsp[(2) - (6)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (6)].nume), "int"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      } 
    ;}
    break;

  case 25:
#line 126 "tema.y"
    { 
      if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (8)].nume), "int"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      } 
    ;}
    break;

  case 26:
#line 135 "tema.y"
    {
      if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (5)].nume), "char"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      }
    ;}
    break;

  case 27:
#line 144 "tema.y"
    { 
      if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (8)].nume), "char"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      } 
    ;}
    break;

  case 28:
#line 153 "tema.y"
    {
      if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (5)].nume), "float"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      }
    ;}
    break;

  case 29:
#line 162 "tema.y"
    { 
      if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (8)].nume), "float"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      } 
    ;}
    break;

  case 30:
#line 171 "tema.y"
    {
      if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (5)].nume), "bool"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      }
    ;}
    break;

  case 31:
#line 180 "tema.y"
    { 
      if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
        f_Declarare_definitie((yyvsp[(2) - (8)].nume), "bool"); 
      else{
        yyerror("error"); 
        printf("Redefiniti functia\n"); 
        YYABORT;
      } 
    ;}
    break;

  case 32:
#line 192 "tema.y"
    {
    if(va_string_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_string_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 33:
#line 201 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_char_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 34:
#line 210 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_float_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 35:
#line 219 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_int_declare_only((yyvsp[(2) - (2)].nume));
    else { 
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 36:
#line 228 "tema.y"
    {
    if(va_bool_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_bool_declare_only((yyvsp[(2) - (2)].nume));
    else { 
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 37:
#line 237 "tema.y"
    {
    if(va_string_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1)
        variabila_string_declarare_only((yyvsp[(2) - (4)].nume));
    else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 38:
#line 246 "tema.y"
    { 
    if(va_string_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_string_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].string));
        makeconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror("error");
        printf("Redefiniti variabila");
        YYABORT;
    }
;}
    break;

  case 39:
#line 256 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_int_declare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare)); 
        makeconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 40:
#line 266 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_bool_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare_bool));
        makeconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 41:
#line 276 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_float_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare_float)); 
        makeconst((yyvsp[(3) - (5)].nume)); 
    } else {
        yyerror("error");
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 42:
#line 286 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_char_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].caracter));  
        makeconst((yyvsp[(3) - (5)].nume)); 
    } else {
        yyerror("error"); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 43:
#line 296 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_int_declare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare));
    else { 
        yyerror("error"); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 44:
#line 305 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_float_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare_float));
    else {
        yyerror("error"); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 45:
#line 314 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_char_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].caracter));
    else { 
        yyerror("error"); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 46:
#line 323 "tema.y"
    {
    if(va_bool_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_bool_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare_bool));
    else {
        yyerror("error"); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 47:
#line 332 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'i', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror("error"); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 48:
#line 341 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'f', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror("error"); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 49:
#line 350 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'c', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror("error"); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 50:
#line 359 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'b', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror("error"); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 51:
#line 368 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) {
    if(vs_decl((yyvsp[(2) - (5)].nume), (yyvsp[(3) - (5)].valoare), (yyvsp[(5) - (5)].string)) == -1){
      yyerror("error");
      printf("Depaseste dimensiune vectorului");
    }
  } else {
    yyerror("error");
    printf("Redefiniti functia \n");
    YYABORT;
  }
;}
    break;

  case 52:
#line 383 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "int");
  ;}
    break;

  case 53:
#line 387 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "char");
  ;}
    break;

  case 54:
#line 391 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "float");
  ;}
    break;

  case 55:
#line 395 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "bool");
  ;}
    break;

  case 58:
#line 407 "tema.y"
    {
    Parametrii((yyvsp[(2) - (2)].nume), "float");
  ;}
    break;

  case 59:
#line 410 "tema.y"
    {
    Parametrii((yyvsp[(2) - (2)].nume), "char");
  ;}
    break;

  case 60:
#line 413 "tema.y"
    {
    Parametrii((yyvsp[(2) - (2)].nume), "int");
  ;}
    break;

  case 61:
#line 416 "tema.y"
    {
    Parametrii((yyvsp[(2) - (2)].nume), "bool");
  ;}
    break;

  case 69:
#line 434 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (3)].nume)) == -1) {
      yyerror("error"); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else {
      if (isconst((yyvsp[(1) - (3)].nume)) == 1) {
        yyerror("error"); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (3)].nume)); 
        YYABORT; 
      } else if (AsignamValoare((yyvsp[(1) - (3)].nume)) == 0) {
        yyerror("error"); 
        printf("Asignarea nu a avut loc pentru variabila %s \n", (yyvsp[(1) - (3)].nume));
        YYABORT;
      }
    } 
  ;}
    break;

  case 70:
#line 451 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (5)].nume)) == -1) {
      yyerror("error"); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else if (isconst((yyvsp[(1) - (5)].nume)) == 1) {
        yyerror("error"); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (5)].nume)); 
        YYABORT; 
      } 
    else {
        assignid((yyvsp[(1) - (5)].nume), (yyvsp[(3) - (5)].nume), (yyvsp[(5) - (5)].nume));
    }
  ;}
    break;

  case 71:
#line 465 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (5)].nume)) == -1) {
      yyerror("error"); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else if (isconst((yyvsp[(1) - (5)].nume)) == 1) {
        yyerror("error"); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (5)].nume)); 
        YYABORT; 
    } 
    else{
        assignsum((yyvsp[(1) - (5)].nume), (yyvsp[(3) - (5)].valoare) + (yyvsp[(5) - (5)].valoare));
    }
  ;}
    break;

  case 72:
#line 479 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (5)].nume)) == -1) {
      yyerror("error"); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else if (isconst((yyvsp[(1) - (5)].nume)) == 1) {
        yyerror("error"); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (5)].nume)); 
        YYABORT; 
    } 
    else {
        assignsum((yyvsp[(1) - (5)].nume), valoare_int((yyvsp[(3) - (5)].nume)) + (yyvsp[(5) - (5)].valoare));
    }
  ;}
    break;

  case 73:
#line 493 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (5)].nume)) == -1) {
      yyerror("error"); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else if (isconst((yyvsp[(1) - (5)].nume)) == 1) {
        yyerror("error"); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (5)].nume)); 
        YYABORT; 
      } 
    else {
       assignsum((yyvsp[(1) - (5)].nume), (yyvsp[(3) - (5)].valoare) + valoare_int((yyvsp[(5) - (5)].nume)));
    }
  ;}
    break;

  case 74:
#line 507 "tema.y"
    {
    Eval((yyvsp[(2) - (2)].valoare));
  ;}
    break;

  case 75:
#line 510 "tema.y"
    {
    if (strcmp((type((yyvsp[(2) - (2)].nume))), "int") == 0) 
      Eval(valoare((yyvsp[(2) - (2)].nume))); 
    else if(strcmp((type((yyvsp[(2) - (2)].nume))), "float") == 0){
      Eval_Float(valoare_float((yyvsp[(2) - (2)].nume)));
    }
    else if(strcmp((type((yyvsp[(2) - (2)].nume))), "char") == 0){
      Eval_Char(caracter((yyvsp[(2) - (2)].nume)));
    }
    else if(strcmp((type((yyvsp[(2) - (2)].nume))), "bool") == 0){
      Eval_bool(valoare_bool((yyvsp[(2) - (2)].nume)));
    }
    else {
      yyerror("error");
      printf("Variabila nu este de tipul dorit\n");
      YYABORT;
    }
  ;}
    break;

  case 76:
#line 528 "tema.y"
    {
    Eval((yyvsp[(2) - (4)].valoare) + (yyvsp[(4) - (4)].valoare));
  ;}
    break;

  case 77:
#line 531 "tema.y"
    {
    if (strcmp((type((yyvsp[(2) - (4)].nume))), "int") == 0) 
      Eval(valoare((yyvsp[(2) - (4)].nume)) + (yyvsp[(4) - (4)].valoare)); 
    else {
      yyerror("error");
      printf("Variabila nu este de tipul dorit\n");
      YYABORT;
    }
  ;}
    break;

  case 78:
#line 540 "tema.y"
    {
    Eval_Char((yyvsp[(2) - (2)].caracter));
  ;}
    break;

  case 79:
#line 543 "tema.y"
    {
    print_symbol();
  ;}
    break;

  case 80:
#line 546 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(2) - (2)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    } else {
      if (strcmp((type((yyvsp[(2) - (2)].nume))), "int") == 0) 
        print_to_console_int(valoare_int((yyvsp[(2) - (2)].nume)));
      else if (strcmp((type((yyvsp[(2) - (2)].nume))), "float") == 0) 
        print_to_console_float(valoare_float((yyvsp[(2) - (2)].nume)));
      else if (strcmp((type((yyvsp[(2) - (2)].nume))), "char") == 0) 
        print_to_console_char(caracter((yyvsp[(2) - (2)].nume)));
      else if (strcmp((type((yyvsp[(2) - (2)].nume))), "bool") == 0) 
        print_to_console_bool(valoare_bool((yyvsp[(2) - (2)].nume)));
    }
  ;}
    break;

  case 81:
#line 562 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror("error"); 
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 1) {
        yyerror("error");    
        printf("Tipul parametrilor nu corespund \n"); 
        YYABORT; 
      } else if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 2) {
        yyerror("error");    
        printf("Numarul de parametrii nu corespund \n"); 
        YYABORT; 
      }
    }
  ;}
    break;

  case 82:
#line 579 "tema.y"
    {
    if (Afisare() == 0) 
      printf("Tipul expresiei este int \n"); 
    else if (Afisare() == 1) 
      printf("Tipul expresiei este float \n");
  ;}
    break;

  case 85:
#line 593 "tema.y"
    {
    if (AdaugVector((yyvsp[(1) - (1)].nume)) == 0) {
      yyerror("error");  
      printf("elementele sunt de tip diferit \n");  
      YYABORT;
    }
  ;}
    break;

  case 86:
#line 600 "tema.y"
    {
    if (AdaugareVector((yyvsp[(1) - (1)].valoare)) == 0) {
      yyerror("error"); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 87:
#line 607 "tema.y"
    {
    if (AdaugareeVector((yyvsp[(1) - (1)].valoare_float)) == 0) {
      yyerror("error"); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 93:
#line 622 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (1)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    } else {
      IdprimesteId((yyvsp[(1) - (1)].nume));
    }
  ;}
    break;

  case 95:
#line 632 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror("error");
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      inlocuireFunctie((yyvsp[(1) - (4)].nume));
      FunctieInFunctie3();
    }
  ;}
    break;

  case 96:
#line 642 "tema.y"
    {
    inlocuireaInt((yyvsp[(1) - (1)].valoare));
  ;}
    break;

  case 97:
#line 645 "tema.y"
    {
    inlocuireaString((yyvsp[(1) - (1)].string));
  ;}
    break;

  case 98:
#line 648 "tema.y"
    {
    inlocuireaFloat((yyvsp[(1) - (1)].valoare_float));
  ;}
    break;

  case 99:
#line 651 "tema.y"
    {
    inlocuireaBool((yyvsp[(1) - (1)].valoare_bool));
  ;}
    break;

  case 100:
#line 654 "tema.y"
    {
    if (cl_EsteDeclarata((yyvsp[(1) - (2)].nume)) == -1) {
      yyerror("error");
      printf("Clasa nu a fost declarata");
    }
  ;}
    break;

  case 101:
#line 660 "tema.y"
    {
    if (v_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror("error");
      printf("Vectorul nu a fost declarat\n");
      YYABORT;
    } else {
      AsignareDeVector((yyvsp[(1) - (4)].nume));
    }
  ;}
    break;

  case 103:
#line 673 "tema.y"
    {
    VerificareParametru((yyvsp[(1) - (1)].nume));
    FunctieInFunctie();
  ;}
    break;

  case 105:
#line 678 "tema.y"
    {
    printf("%s \n", (yyvsp[(3) - (3)].nume));
    VerificareParametru((yyvsp[(3) - (3)].nume));
  ;}
    break;

  case 106:
#line 682 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror("error");
      printf("Functia nu a fost declarata\n");
      YYABORT;
    }
    if (VerificaParametruFIF((yyvsp[(1) - (4)].nume)) == 1) {
      yyerror("error");
      printf("Tipul parametrilor nu corespund \n");
      YYABORT;
    } else if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 2) {
      yyerror("error");
      printf("Numarul de parametrii nu corespund \n");
      YYABORT;
    }
    FunctieInFunctie2();
  ;}
    break;

  case 108:
#line 704 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 109:
#line 711 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 110:
#line 718 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 111:
#line 725 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (15)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2712 "tema.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 739 "tema.y"


int yyerror(char * s){
printf("err: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
int ok=0;
yyin=fopen(argv[1],"r");
yyparse();
print_symbol();
}

