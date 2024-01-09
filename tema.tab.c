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
#define YYLAST   902

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  324

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
     342,   345,   348,   353,   358,   361,   363,   366,   371,   376,
     380,   382,   384,   386,   388,   393,   397,   401,   407,   413,
     415,   419,   421,   426,   428,   430,   432,   434,   437,   442,
     444,   446,   450,   454,   459,   466,   474,   482,   490,   506,
     510
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
      67,    -1,     9,    28,    -1,     9,    27,    -1,     9,    28,
      41,    28,    -1,     9,    27,    41,    28,    -1,     9,    31,
      -1,     8,    -1,     8,    27,    -1,    33,    47,    68,    48,
      -1,    40,    47,    65,    48,    -1,    65,    13,    66,    -1,
      66,    -1,    27,    -1,    28,    -1,    29,    -1,    33,    47,
      68,    48,    -1,    67,    13,    67,    -1,    67,    14,    67,
      -1,    47,    67,    14,    67,    48,    -1,    47,    67,    13,
      67,    48,    -1,    27,    -1,    27,    41,    28,    -1,    31,
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
     451,   454,   472,   475,   484,   487,   490,   506,   523,   532,
     533,   537,   544,   551,   558,   562,   563,   564,   565,   566,
     575,   584,   585,   595,   598,   601,   604,   607,   613,   625,
     626,   630,   631,   635,   652,   657,   664,   671,   678,   689,
     690
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
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    69,    70,
      70
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
       2,     2,     4,     4,     2,     1,     2,     4,     4,     3,
       1,     1,     1,     1,     4,     3,     3,     5,     5,     1,
       3,     1,     4,     1,     1,     1,     1,     2,     4,     1,
       1,     3,     3,     4,     6,     7,     7,     7,    15,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    35,     0,    33,     0,     0,    36,     0,    34,
       0,     0,     0,     0,     0,     0,    21,     0,    19,     0,
      76,    71,    70,    74,     0,     0,     0,     0,     0,     0,
      67,     4,     0,     0,    66,    63,    60,    59,    61,    58,
      52,     0,    53,    55,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      47,     0,     0,    49,     0,    50,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       5,     0,     0,     0,     0,     0,     0,    89,    93,    95,
      96,    91,    94,     0,     0,     0,    69,   100,    99,     0,
       0,    81,    82,    83,     0,     0,    80,    68,    64,    57,
       0,     0,     0,     0,     0,     6,     8,     0,     0,    37,
      43,    45,     0,    46,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    73,    72,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,    17,
       0,     0,     9,    51,    38,    39,    42,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    85,    86,     0,   102,   101,
       0,     0,    79,    11,    13,    15,    10,     0,     0,     0,
       0,    62,     0,     0,     0,     0,     0,     0,    92,    98,
       0,     0,   103,     0,    84,     0,     0,     0,    52,    26,
      30,    28,     0,    22,     0,   110,   106,   105,     0,   107,
      88,    87,     0,     0,     0,     0,    24,     0,     0,     0,
       0,    23,     0,     0,   104,    12,    14,    16,     0,     0,
       0,     0,   109,     0,    25,    27,    31,    29,     0,     0,
       0,     0,     0,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    58,    30,   137,    41,     9,    49,    50,
     196,    42,    43,   165,   166,   156,   160,    44,   286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -260
static const yytype_int16 yypact[] =
{
      14,   328,    53,    29,    39,    62,    67,    81,    54,    93,
    -260,   100,   101,   113,   122,   109,   236,   146,   862,   335,
     335,   335,   335,   309,   131,    59,    77,    64,   134,   319,
     148,   142,   862,   176,   277,   183,   185,   187,   190,   171,
     173,   179,   520,   209,  -260,   204,   230,   246,   255,   150,
    -260,   202,   250,   301,   111,   130,   156,   189,   175,   237,
     260,   279,   284,   275,   297,   282,   289,   306,   299,   324,
     303,   320,   327,   329,   339,   340,   385,   322,  -260,   558,
    -260,   314,   342,  -260,   231,   362,   371,   331,    85,   102,
    -260,  -260,   338,   373,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,   335,  -260,  -260,  -260,   396,   -13,   407,   410,   203,
     225,   227,   242,   378,   384,   412,  -260,   862,   426,   431,
    -260,   430,   450,  -260,   433,  -260,   437,  -260,   455,   456,
     457,   458,   460,   440,   441,   442,   443,   135,   445,  -260,
    -260,   451,   452,   331,   331,   331,   331,    15,  -260,  -260,
    -260,  -260,  -260,   434,   435,   331,   249,  -260,  -260,   448,
     350,  -260,  -260,  -260,   449,    -1,  -260,  -260,  -260,  -260,
     335,   335,   335,   335,    42,  -260,  -260,   862,   596,  -260,
    -260,  -260,   446,  -260,  -260,   465,   464,   469,   474,   476,
     459,   461,   463,   466,   862,   473,  -260,   862,  -260,  -260,
     193,   267,    -5,    92,  -260,   479,    85,   484,   258,   331,
     331,    85,  -260,   144,    85,   102,  -260,   352,   354,   250,
     356,   634,  -260,  -260,  -260,  -260,  -260,  -260,  -260,   335,
     335,   335,   335,   672,   862,   710,   862,   862,   487,   862,
    -260,   370,   468,   331,   331,   249,   249,   372,  -260,  -260,
     470,   377,  -260,    17,    26,    45,  -260,   381,   383,   387,
     389,  -260,   748,   472,   482,   482,   505,   786,  -260,  -260,
       4,    23,  -260,    85,  -260,   862,   862,   862,   395,   -28,
      16,    50,   475,  -260,   862,  -260,  -260,  -260,   331,  -260,
    -260,  -260,   394,    24,    76,   116,  -260,   862,   862,   862,
     862,  -260,   482,    25,  -260,  -260,  -260,  -260,   188,   366,
     406,   444,  -260,   493,  -260,  -260,  -260,  -260,   517,   519,
     510,   862,   824,  -260
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -260,  -260,  -260,   -16,    -3,     3,   436,
    -260,   -10,    35,  -260,   323,  -142,  -195,    86,  -259
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      31,   200,   201,   202,   203,    17,   287,    59,   209,   210,
     -53,   241,   215,   208,    77,   122,   247,   209,   210,   251,
      60,   298,    79,    51,    52,    53,    92,    24,    25,    26,
      27,    28,    33,    34,   171,    29,   209,   210,   209,   210,
      35,   -52,   114,   312,    36,    37,   238,   216,   204,     1,
     -53,    38,   290,    10,   -55,   115,   205,    39,     3,     4,
       5,     6,    11,    92,    40,   299,   275,   245,   246,   -54,
     122,   291,    12,   138,   305,   276,   313,    93,   292,    24,
      25,    26,    27,    28,    33,    34,    62,    29,   -54,    20,
      16,    67,    35,    63,   277,    13,    36,    37,    68,   300,
      14,   270,   271,    38,    64,   209,   210,   178,    15,    39,
      65,    66,   157,   158,    93,   239,    40,    18,   159,    24,
      25,    26,    27,    28,    33,    34,   306,    29,    94,   161,
     162,   163,    35,    23,   195,   164,    36,    37,    62,     3,
       4,     5,     6,    38,   105,    63,   303,    19,    20,    39,
     194,    24,    25,    26,    27,    28,    40,    64,    61,    29,
      21,    69,    92,   106,    66,    94,   307,   221,    70,    22,
      32,   248,   249,   217,   218,   219,   220,   250,    24,   109,
     110,   111,   112,    67,   233,    76,    29,   235,    78,   107,
      68,    24,    25,    26,    27,    28,    33,    34,   100,    29,
     113,   101,    87,    80,    35,    92,   209,   210,    36,    37,
      84,   236,    85,    93,    86,    38,    69,    92,    88,    92,
      89,    39,   108,    70,   262,    90,   264,   265,    40,   267,
      62,    96,   257,   258,   259,   260,    11,    63,   314,    24,
      25,    26,    27,    28,   143,   144,    92,    29,    92,    92,
     102,    92,    64,   101,    67,    95,    93,    97,   174,    66,
      13,    68,   209,   210,    94,   293,   294,   295,    93,    69,
      93,   243,   244,    98,   302,    14,    70,    92,    92,    92,
     209,   210,    99,   116,   117,   237,    92,   308,   309,   310,
     311,   118,    92,    92,    92,    92,   119,    93,   103,    93,
      93,   101,    93,   120,    81,    82,    92,    94,    83,   121,
     122,   322,    24,    54,    55,    56,    57,   123,   124,    94,
      29,    94,    71,    72,    73,    74,    75,   125,    93,    93,
      93,   127,     3,     4,     5,     6,   126,    93,     7,    45,
      46,    47,    48,    93,    93,    93,    93,   128,    94,   104,
      94,    94,   101,    94,   129,   141,   130,    93,   147,   148,
     149,   150,   151,   152,   153,   154,   131,   132,   139,    24,
      25,    26,    27,    28,    33,    34,   145,    29,   155,    94,
      94,    94,    35,   142,   167,   146,    36,    37,    94,   133,
     134,   135,   136,    38,    94,    94,    94,    94,   212,    39,
     253,   213,   254,   101,   255,   101,    40,   101,    94,    24,
      25,    26,    27,    28,    33,    34,   315,    29,   268,   168,
     272,   213,    35,   213,   175,   274,    36,    37,   213,   278,
     176,   279,   101,    38,   101,   280,   177,   281,   101,    39,
     101,   296,   304,   170,   297,   213,    40,    24,    25,    26,
      27,    28,    33,    34,   172,    29,   316,   173,   179,   180,
      35,   181,   182,   183,    36,    37,   184,   185,   186,   187,
     188,    38,   189,   190,   191,   192,   193,    39,   223,   198,
     199,   206,   207,   197,    40,    24,    25,    26,    27,    28,
      33,    34,   225,    29,   317,   211,   214,   224,    35,   284,
     226,   285,    36,    37,   227,   228,   229,   240,   230,    38,
     231,   234,   242,   232,   266,    39,   269,   273,   283,   288,
     318,   301,    40,    24,    25,    26,    27,    28,    33,    34,
     319,    29,   320,   321,     0,     0,    35,   169,   252,     0,
      36,    37,     0,     0,     0,    91,     0,    38,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      40,    24,    25,    26,    27,    28,    33,    34,     0,    29,
       0,     0,     0,     0,    35,     0,     0,     0,    36,    37,
       0,     0,     0,   140,     0,    38,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    24,
      25,    26,    27,    28,    33,    34,     0,    29,     0,     0,
       0,     0,    35,     0,     0,     0,    36,    37,     0,     0,
       0,   222,     0,    38,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,    40,    24,    25,    26,
      27,    28,    33,    34,     0,    29,     0,     0,     0,     0,
      35,     0,     0,     0,    36,    37,     0,     0,     0,   256,
       0,    38,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,    40,    24,    25,    26,    27,    28,
      33,    34,     0,    29,     0,     0,     0,     0,    35,     0,
       0,     0,    36,    37,     0,     0,     0,     0,   261,    38,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,    40,    24,    25,    26,    27,    28,    33,    34,
       0,    29,     0,     0,     0,     0,    35,     0,     0,     0,
      36,    37,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,   263,
      40,    24,    25,    26,    27,    28,    33,    34,     0,    29,
       0,     0,     0,     0,    35,     0,     0,     0,    36,    37,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,   282,    40,    24,
      25,    26,    27,    28,    33,    34,     0,    29,     0,     0,
       0,     0,    35,     0,     0,     0,    36,    37,   289,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,    40,    24,    25,    26,
      27,    28,    33,    34,     0,    29,     0,     0,     0,     0,
      35,     0,     0,     0,    36,    37,   323,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,    40,    24,    25,    26,    27,    28,
      33,    34,     0,    29,     0,     0,     0,     0,    35,     0,
       0,     0,    36,    37,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      16,   143,   144,   145,   146,     8,   265,    23,    13,    14,
      38,   206,    13,   155,    30,    28,   211,    13,    14,   214,
      23,    49,    32,    20,    21,    22,    42,     3,     4,     5,
       6,     7,     8,     9,    47,    11,    13,    14,    13,    14,
      16,    24,    58,   302,    20,    21,    51,    48,    33,    35,
      24,    27,    48,     0,    38,    58,    41,    33,     4,     5,
       6,     7,    33,    79,    40,    49,    49,   209,   210,    24,
      28,    48,    33,    76,    50,    49,    51,    42,   273,     3,
       4,     5,     6,     7,     8,     9,    27,    11,    38,    47,
      36,    27,    16,    34,    49,    33,    20,    21,    34,    49,
      33,   243,   244,    27,    27,    13,    14,   117,    27,    33,
      33,    34,    27,    28,    79,    23,    40,    24,    33,     3,
       4,     5,     6,     7,     8,     9,    50,    11,    42,    27,
      28,    29,    16,    24,   137,    33,    20,    21,    27,     4,
       5,     6,     7,    27,    33,    34,   288,    47,    47,    33,
      15,     3,     4,     5,     6,     7,    40,    27,    27,    11,
      47,    27,   178,    33,    34,    79,    50,   177,    34,    47,
      24,    27,    28,   170,   171,   172,   173,    33,     3,     4,
       5,     6,     7,    27,   194,    37,    11,   197,    46,    33,
      34,     3,     4,     5,     6,     7,     8,     9,    48,    11,
      25,    51,    12,    27,    16,   221,    13,    14,    20,    21,
      27,    18,    27,   178,    27,    27,    27,   233,    47,   235,
      47,    33,    33,    34,   234,    46,   236,   237,    40,   239,
      27,    27,   229,   230,   231,   232,    33,    34,    50,     3,
       4,     5,     6,     7,    13,    14,   262,    11,   264,   265,
      48,   267,    27,    51,    27,    46,   221,    27,    33,    34,
      33,    34,    13,    14,   178,   275,   276,   277,   233,    27,
     235,    13,    14,    27,   284,    33,    34,   293,   294,   295,
      13,    14,    27,    46,    24,    18,   302,   297,   298,   299,
     300,    12,   308,   309,   310,   311,    12,   262,    48,   264,
     265,    51,   267,    28,    27,    28,   322,   221,    31,    12,
      28,   321,     3,     4,     5,     6,     7,    28,    12,   233,
      11,   235,     3,     4,     5,     6,     7,    28,   293,   294,
     295,    28,     4,     5,     6,     7,    12,   302,    10,     4,
       5,     6,     7,   308,   309,   310,   311,    27,   262,    48,
     264,   265,    51,   267,    27,    41,    27,   322,    27,    28,
      29,    30,    31,    32,    33,    34,    27,    27,    46,     3,
       4,     5,     6,     7,     8,     9,    14,    11,    47,   293,
     294,   295,    16,    41,    46,    14,    20,    21,   302,     4,
       5,     6,     7,    27,   308,   309,   310,   311,    48,    33,
      48,    51,    48,    51,    48,    51,    40,    51,   322,     3,
       4,     5,     6,     7,     8,     9,    50,    11,    48,    46,
      48,    51,    16,    51,    46,    48,    20,    21,    51,    48,
      46,    48,    51,    27,    51,    48,    24,    48,    51,    33,
      51,    46,    48,    47,    49,    51,    40,     3,     4,     5,
       6,     7,     8,     9,    47,    11,    50,    47,    32,    28,
      16,    31,    12,    30,    20,    21,    29,    12,    12,    12,
      12,    27,    12,    33,    33,    33,    33,    33,    32,    28,
      28,    47,    47,    38,    40,     3,     4,     5,     6,     7,
       8,     9,    28,    11,    50,    47,    47,    32,    16,    17,
      31,    19,    20,    21,    30,    29,    47,    28,    47,    27,
      47,    38,    28,    47,    27,    33,    48,    47,    46,    14,
      27,    46,    40,     3,     4,     5,     6,     7,     8,     9,
      13,    11,    13,    23,    -1,    -1,    16,   101,   215,    -1,
      20,    21,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40
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
      67,    67,    67,    67,    33,    41,    47,    47,    67,    13,
      14,    47,    48,    51,    47,    13,    48,    60,    60,    60,
      60,    63,    25,    32,    32,    28,    31,    30,    29,    47,
      47,    47,    47,    63,    38,    63,    18,    18,    51,    23,
      28,    68,    28,    13,    14,    67,    67,    68,    27,    28,
      33,    68,    66,    48,    48,    48,    25,    60,    60,    60,
      60,    26,    63,    39,    63,    63,    27,    63,    48,    48,
      67,    67,    48,    47,    48,    49,    49,    49,    48,    48,
      48,    48,    39,    46,    17,    19,    70,    70,    14,    22,
      48,    48,    68,    63,    63,    63,    46,    49,    49,    49,
      49,    46,    63,    67,    48,    50,    50,    50,    63,    63,
      63,    63,    70,    51,    50,    50,    50,    50,    27,    13,
      13,    23,    63,    22
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
    Eval((yyvsp[(2) - (2)].valoare));
  ;}
    break;

  case 71:
#line 454 "tema.y"
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

  case 72:
#line 472 "tema.y"
    {
    Eval((yyvsp[(2) - (4)].valoare) + (yyvsp[(4) - (4)].valoare));
  ;}
    break;

  case 73:
#line 475 "tema.y"
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

  case 74:
#line 484 "tema.y"
    {
    Eval_Char((yyvsp[(2) - (2)].caracter));
  ;}
    break;

  case 75:
#line 487 "tema.y"
    {
    print_symbol();
  ;}
    break;

  case 76:
#line 490 "tema.y"
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

  case 77:
#line 506 "tema.y"
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

  case 78:
#line 523 "tema.y"
    {
    if (Afisare() == 0) 
      printf("Tipul expresiei este int \n"); 
    else if (Afisare() == 1) 
      printf("Tipul expresiei este float \n");
  ;}
    break;

  case 81:
#line 537 "tema.y"
    {
    if (AdaugVector((yyvsp[(1) - (1)].nume)) == 0) {
      yyerror("error");  
      printf("elementele sunt de tip diferit \n");  
      YYABORT;
    }
  ;}
    break;

  case 82:
#line 544 "tema.y"
    {
    if (AdaugareVector((yyvsp[(1) - (1)].valoare)) == 0) {
      yyerror("error"); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 83:
#line 551 "tema.y"
    {
    if (AdaugareeVector((yyvsp[(1) - (1)].valoare_float)) == 0) {
      yyerror("error"); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 89:
#line 566 "tema.y"
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

  case 90:
#line 575 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (3)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    } else {
      assignsum((yyvsp[(1) - (3)].nume), (yyvsp[(3) - (3)].valoare));
    }
  ;}
    break;

  case 92:
#line 585 "tema.y"
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

  case 93:
#line 595 "tema.y"
    {
    inlocuireaInt((yyvsp[(1) - (1)].valoare));
  ;}
    break;

  case 94:
#line 598 "tema.y"
    {
    inlocuireaString((yyvsp[(1) - (1)].string));
  ;}
    break;

  case 95:
#line 601 "tema.y"
    {
    inlocuireaFloat((yyvsp[(1) - (1)].valoare_float));
  ;}
    break;

  case 96:
#line 604 "tema.y"
    {
    inlocuireaBool((yyvsp[(1) - (1)].valoare_bool));
  ;}
    break;

  case 97:
#line 607 "tema.y"
    {
    if (cl_EsteDeclarata((yyvsp[(1) - (2)].nume)) == -1) {
      yyerror("error");
      printf("Clasa nu a fost declarata");
    }
  ;}
    break;

  case 98:
#line 613 "tema.y"
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

  case 100:
#line 626 "tema.y"
    {
    VerificareParametru((yyvsp[(1) - (1)].nume));
    FunctieInFunctie();
  ;}
    break;

  case 102:
#line 631 "tema.y"
    {
    printf("%s \n", (yyvsp[(3) - (3)].nume));
    VerificareParametru((yyvsp[(3) - (3)].nume));
  ;}
    break;

  case 103:
#line 635 "tema.y"
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

  case 105:
#line 657 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 106:
#line 664 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 107:
#line 671 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 108:
#line 678 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (15)].nume)) == -1) {
      yyerror("error");
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2649 "tema.tab.c"
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


#line 692 "tema.y"


int yyerror(char * s){
printf("err: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
int ok=0;
yyin=fopen(argv[1],"r");
yyparse();
print_symbol();
}

