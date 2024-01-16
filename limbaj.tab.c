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




/* Copy the first part of user declarations.  */
#line 1 "limbaj.y"

#include <iostream>
#include <vector>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
void yyerror(const char * s);
extern IdList ids;
extern string currentScope;
<<<<<<< HEAD
extern string typeOfId;
=======
>>>>>>> refs/remotes/origin/main


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
/* Line 193 of yacc.c.  */
<<<<<<< HEAD
#line 182 "limbaj.tab.c"
=======
#line 181 "limbaj.tab.c"
>>>>>>> refs/remotes/origin/main
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
<<<<<<< HEAD
#line 195 "limbaj.tab.c"
=======
#line 194 "limbaj.tab.c"
>>>>>>> refs/remotes/origin/main

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   174
=======
#define YYLAST   188
>>>>>>> refs/remotes/origin/main

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
<<<<<<< HEAD
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148
=======
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  150
>>>>>>> refs/remotes/origin/main

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      37,    38,    41,    39,    36,    40,    44,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,    14,    17,    21,    22,
<<<<<<< HEAD
      29,    34,    37,    41,    43,    46,    49,    53,    54,    58,
      61,    65,    71,    76,    85,    87,    91,    94,    96,    99,
     100,   109,   117,   123,   128,   129,   134,   137,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   159,   163,   167,
     171,   175,   179,   183,   187,   189,   191,   199,   205,   215,
     221,   226,   231,   236,   240,   246,   250
=======
      29,    34,    37,    41,    42,    46,    49,    56,    61,    70,
      72,    76,    79,    81,    84,    85,    94,   102,   108,   113,
     114,   119,   122,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   148,   155,   159,   163,   167,   171,   175,
     177,   179,   181,   183,   185,   187,   192,   194,   202,   208,
     218,   224,   229,   234,   239,   243,   249,   253
>>>>>>> refs/remotes/origin/main
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
<<<<<<< HEAD
      46,     0,    -1,    -1,    -1,    -1,    47,    50,    48,    55,
      60,    49,    62,    -1,    51,    33,    -1,    50,    51,    33,
      -1,    -1,    32,    28,    52,    19,    53,    21,    -1,    32,
      28,    19,    21,    -1,    54,    33,    -1,    53,    54,    33,
      -1,    57,    -1,    54,    57,    -1,    57,    33,    -1,    55,
      57,    33,    -1,    -1,    25,    56,    55,    -1,    29,    28,
      -1,    18,    29,    28,    -1,    29,    31,    34,     6,    35,
      -1,    29,    28,     5,    67,    -1,    29,    31,    28,    34,
       6,    35,     5,    67,    -1,    59,    -1,    58,    36,    59,
      -1,    29,    28,    -1,    61,    -1,    60,    61,    -1,    -1,
      29,    30,    37,    58,    38,    22,    62,    23,    -1,    29,
      30,    37,    38,    22,    62,    23,    -1,    29,    30,    37,
      58,    38,    -1,    29,    30,    37,    38,    -1,    -1,     3,
      63,    64,     4,    -1,    65,    33,    -1,    64,    65,    33,
      -1,    66,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    57,    -1,    73,    -1,    74,    -1,    28,
       5,    67,    -1,    28,     5,    28,    -1,    67,    39,    67,
      -1,    67,    40,    67,    -1,    67,    41,    67,    -1,    67,
      42,    67,    -1,    67,    43,    67,    -1,     6,    -1,    28,
      -1,    12,    37,    75,    38,    62,    13,    64,    -1,    12,
      37,    75,    38,    64,    -1,    14,    37,    66,    33,    75,
      33,    66,    38,    64,    -1,    15,    37,    75,    38,    64,
      -1,    11,    37,    10,    38,    -1,    16,    37,    67,    38,
      -1,    30,    37,    58,    38,    -1,    30,    37,    38,    -1,
      28,    44,    28,     5,    67,    -1,    67,    24,    67,    -1,
      67,    -1
=======
      46,     0,    -1,    -1,    -1,    -1,    47,    50,    48,    53,
      58,    49,    60,    -1,    51,    33,    -1,    50,    51,    33,
      -1,    -1,    32,    28,    52,    19,    62,    21,    -1,    32,
      28,    19,    21,    -1,    55,    33,    -1,    53,    55,    33,
      -1,    -1,    25,    54,    53,    -1,    29,    28,    -1,    29,
      31,    28,    34,     6,    35,    -1,    29,    28,     5,    65,
      -1,    29,    31,    28,    34,     6,    35,     5,    65,    -1,
      57,    -1,    56,    36,    57,    -1,    29,    28,    -1,    59,
      -1,    58,    59,    -1,    -1,    29,    30,    37,    56,    38,
      22,    60,    23,    -1,    29,    30,    37,    38,    22,    60,
      23,    -1,    29,    30,    37,    56,    38,    -1,    29,    30,
      37,    38,    -1,    -1,     3,    61,    62,     4,    -1,    63,
      33,    -1,    62,    63,    33,    -1,    64,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    55,    -1,
      71,    -1,    72,    -1,    28,     5,    65,    -1,    31,    34,
       6,    35,     5,    65,    -1,    65,    39,    65,    -1,    65,
      40,    65,    -1,    65,    41,    65,    -1,    65,    42,    65,
      -1,    65,    43,    65,    -1,    28,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    31,    34,     6,
      35,    -1,    71,    -1,    12,    37,    73,    38,    60,    13,
      62,    -1,    12,    37,    73,    38,    62,    -1,    14,    37,
      64,    33,    73,    33,    64,    38,    62,    -1,    15,    37,
      73,    38,    62,    -1,    11,    37,    10,    38,    -1,    16,
      37,    65,    38,    -1,    30,    37,    56,    38,    -1,    30,
      37,    38,    -1,    28,    44,    28,     5,    65,    -1,    65,
      24,    65,    -1,    65,    -1
>>>>>>> refs/remotes/origin/main
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    35,    35,    35,    39,    40,    43,    43,
<<<<<<< HEAD
      51,    60,    61,    64,    65,    69,    70,    71,    71,    74,
      84,    95,   104,   119,   129,   130,   133,   138,   139,   142,
     142,   151,   159,   168,   178,   178,   181,   182,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   196,   207,   220,
     221,   222,   223,   224,   225,   226,   238,   239,   242,   245,
     248,   250,   252,   258,   267,   272,   273
=======
      52,    61,    62,    63,    63,    66,    75,    84,    99,   109,
     110,   113,   118,   119,   122,   122,   131,   139,   148,   158,
     158,   161,   162,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   176,   180,   186,   187,   188,   189,   190,   191,
     195,   196,   197,   198,   199,   200,   204,   210,   211,   214,
     217,   220,   222,   224,   231,   241,   246,   247
>>>>>>> refs/remotes/origin/main
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BGIN", "END", "ASSIGN", "NR", "FLOAT",
  "CHAR", "BOOL", "STRING", "PRINT", "IF", "ELSE", "FOR", "WHILE", "EVAL",
  "TYPEOF", "CONST", "START_CLASA", "DO", "END_CLASA", "START_FUNC",
  "END_FUNC", "LOGICAL_OPERATOR", "GVAR", "GFUNC", "UTYPE", "ID", "TYPE",
  "FUNCTIE", "VECTOR", "CLASS", "';'", "'['", "']'", "','", "'('", "')'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'.'", "$accept", "progr", "@1", "@2",
<<<<<<< HEAD
  "@3", "utype", "class", "@4", "class_list", "class_block", "gvars", "@5",
  "declaration", "list_param", "param", "gfunc", "functie", "block", "@6",
  "list", "statement", "assignment", "expression", "if_statement",
  "for_statement", "while_statement", "print_statement", "eval_statement",
  "functie_call", "class_statement", "condition", 0
=======
  "@3", "utype", "class", "@4", "gvars", "@5", "declaration", "list_param",
  "param", "gfunc", "functie", "block", "@6", "list", "statement",
  "assignment", "expression", "if_statement", "for_statement",
  "while_statement", "print_statement", "eval_statement", "functie_call",
  "class_statement", "condition", 0
>>>>>>> refs/remotes/origin/main
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
     285,   286,   287,    59,    91,    93,    44,    40,    41,    43,
      45,    42,    47,    37,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    47,    48,    49,    46,    50,    50,    52,    51,
<<<<<<< HEAD
      51,    53,    53,    54,    54,    55,    55,    56,    55,    57,
      57,    57,    57,    57,    58,    58,    59,    60,    60,    61,
      61,    61,    61,    61,    63,    62,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    70,
      71,    72,    73,    73,    74,    75,    75
=======
      51,    53,    53,    54,    53,    55,    55,    55,    55,    56,
      56,    57,    58,    58,    59,    59,    59,    59,    59,    61,
      60,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      68,    69,    70,    71,    71,    72,    73,    73
>>>>>>> refs/remotes/origin/main
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     7,     2,     3,     0,     6,
<<<<<<< HEAD
       4,     2,     3,     1,     2,     2,     3,     0,     3,     2,
       3,     5,     4,     8,     1,     3,     2,     1,     2,     0,
       8,     7,     5,     4,     0,     4,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     7,     5,     9,     5,
       4,     4,     4,     3,     5,     3,     1
=======
       4,     2,     3,     0,     3,     2,     6,     4,     8,     1,
       3,     2,     1,     2,     0,     8,     7,     5,     4,     0,
       4,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     1,     7,     5,     9,
       5,     4,     4,     4,     3,     5,     3,     1
>>>>>>> refs/remotes/origin/main
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,     0,     0,     0,
<<<<<<< HEAD
       6,     0,     0,     0,    17,     0,    29,     0,     7,    10,
       0,     0,     0,    19,     0,     0,     0,     4,    27,    15,
       0,     0,    13,    20,    18,     0,     0,     0,     0,    16,
       0,     0,    28,     9,     0,    11,    14,    54,    55,    22,
       0,     0,     0,    34,     5,    12,     0,     0,     0,     0,
       0,     0,    21,     0,    33,     0,    24,     0,    49,    50,
      51,    52,    53,     0,    26,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,    44,     0,     0,    38,    39,
      40,    41,    42,    43,    45,    46,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
      36,    23,    31,     0,     0,    66,     0,     0,     0,     0,
       0,    55,    47,     0,    63,     0,    37,    30,    60,     0,
       0,     0,     0,    61,     0,    62,    65,     0,    57,     0,
      59,    64,     0,     0,    56,     0,     0,    58
=======
       6,     0,     0,    13,     0,    24,     0,     7,    10,     0,
       0,    15,     0,     0,     0,     4,    22,    11,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,    33,
      34,    35,    36,    37,    38,    40,    41,    14,     0,     0,
       0,    12,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    31,    50,    51,    52,
      53,    54,    49,     0,    17,    56,     0,     0,    29,     5,
       0,    67,     0,     0,     0,     0,     0,    42,     0,     0,
      64,     0,    19,     0,    32,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    61,     0,     0,     0,     0,
      62,     0,    21,     0,    63,     0,     0,    44,    45,    46,
      47,    48,    16,     0,    27,     0,    66,     0,    58,     0,
      60,    65,    20,     0,    55,     0,     0,     0,    30,     0,
       0,    43,    18,    26,     0,    57,     0,    25,     0,    59
>>>>>>> refs/remotes/origin/main
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     1,     2,     8,    41,     5,     6,    12,    30,    31,
      16,    22,    85,    65,    66,    27,    28,    54,    67,    86,
      87,    88,   115,    89,    90,    91,    92,    93,    94,    95,
     116
=======
      -1,     1,     2,     8,    53,     5,     6,    12,    15,    20,
      36,    91,    92,    25,    26,    79,   104,    37,    38,    39,
      81,    40,    41,    42,    43,    44,    75,    46,    82
>>>>>>> refs/remotes/origin/main
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,    32,     5,  -100,    12,     5,    30,    54,    -9,    43,
    -100,    64,    61,    67,  -100,   -17,    31,    78,  -100,  -100,
      53,    87,    -9,   111,   -16,   102,    84,   105,  -100,  -100,
      17,    80,  -100,  -100,    53,     1,    97,   129,    99,  -100,
     107,   135,  -100,  -100,    85,  -100,  -100,  -100,  -100,    86,
     133,   106,     4,  -100,  -100,  -100,     1,     1,     1,     1,
       1,   108,  -100,   112,   120,    59,  -100,    72,    86,    86,
      86,    86,    86,   139,  -100,   135,   116,   124,   110,   113,
     114,   115,   117,    -1,   118,  -100,    63,   123,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,     1,   125,  -100,   135,
     143,     1,   121,     1,     1,     2,   130,     7,  -100,   126,
    -100,    86,  -100,   134,   122,    65,   127,   156,   131,   128,
      81,   -23,    86,   157,  -100,    74,  -100,  -100,  -100,     1,
      36,     1,    72,  -100,     1,  -100,    86,   150,    72,   136,
      72,    86,    72,   121,    72,   132,    72,    72
=======
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
    -102,    12,   -10,  -102,    11,   -10,    16,    37,    -6,    24,
    -102,    53,    67,  -102,    76,    84,    81,  -102,  -102,   128,
      -6,    91,    96,    36,    92,    98,  -102,  -102,    94,    95,
      97,   104,   108,     2,   109,    99,  -102,    47,   114,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,   119,    63,   115,
     113,  -102,   121,   125,  -102,   142,    63,    77,    63,    63,
      63,   126,   -18,   147,  -102,   122,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   127,    40,  -102,   154,     7,  -102,  -102,
     124,    -9,   129,   158,   131,   130,    60,    40,   160,   138,
    -102,    -1,  -102,   134,  -102,   164,    63,    63,    63,    63,
      63,   136,   150,    79,   128,  -102,    63,   107,    63,   128,
    -102,    63,  -102,   144,  -102,   169,   140,    40,    40,    40,
      40,    40,   171,   125,   155,    13,    40,   165,   128,   146,
     128,    40,  -102,    63,  -102,    63,   157,   125,  -102,   128,
      77,    40,    40,  -102,   159,   128,   143,  -102,   128,   128
>>>>>>> refs/remotes/origin/main
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -100,  -100,  -100,  -100,  -100,  -100,   162,  -100,  -100,   138,
     149,  -100,    -3,    66,    96,  -100,   147,   -73,  -100,   -74,
     -85,   -99,   -35,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     -97
=======
    -102,  -102,  -102,  -102,  -102,  -102,   178,  -102,   166,  -102,
       1,   110,    71,  -102,   163,   -97,  -102,  -101,   -33,   -56,
     -46,  -102,  -102,  -102,  -102,  -102,   -19,  -102,   -53
>>>>>>> refs/remotes/origin/main
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      49,   109,    97,   118,   105,    17,   119,    47,    47,    13,
     -48,    23,    36,    26,    24,   -48,    14,    32,    37,    17,
      15,    68,    69,    70,    71,    72,   113,    32,    46,    48,
     121,    26,     3,    63,   139,    13,    63,     4,    43,    53,
       7,    46,    64,   106,   145,   124,    15,    78,    79,    13,
      80,    81,    82,   109,    13,   109,   138,   137,   140,   109,
      25,   111,   109,    10,    83,    15,    84,   108,   144,   120,
     122,    13,   147,    11,    78,    79,    18,    80,    81,    82,
      20,    13,    15,    78,    79,    19,    80,    81,    82,   129,
      13,    83,    15,    84,   136,    76,    21,    77,    13,   141,
      83,    15,    84,    13,    56,    57,    58,    59,    60,    15,
      76,    29,   135,    45,    15,    33,    35,    39,    55,   133,
      56,    57,    58,    59,    60,    56,    57,    58,    59,    60,
      23,    50,    38,    24,    40,    51,    52,    38,    53,    61,
      74,    62,    75,    73,    96,    63,    99,   100,   112,   117,
     101,   102,   103,   114,   104,   107,   110,   127,   123,   126,
     128,   105,   134,   142,   131,   130,   132,     9,    44,   143,
     146,    34,    98,   125,    42
=======
      45,    84,    74,   125,    65,    85,   128,    60,   130,    16,
     127,    89,     3,    86,    87,   106,    24,   138,    45,    13,
      90,    16,     4,    14,    28,    29,   136,    30,    31,    32,
      96,    97,    98,    99,   100,   113,    89,   114,   145,     7,
     144,    33,    14,    34,    35,   102,    61,   149,    24,    10,
     117,   118,   119,   120,   121,   129,    11,    17,    28,    29,
     126,    30,    31,    32,    21,   131,    50,    22,    64,    67,
      68,    69,    70,    71,    18,    33,    14,    34,    35,    96,
      97,    98,    99,   100,   146,    45,    19,   141,    45,   142,
      45,    72,    65,    34,    73,    65,    48,    65,   110,    96,
      97,    98,    99,   100,    21,    83,    45,    22,    35,    45,
      78,    45,    65,    23,    27,   113,    65,   124,    28,    29,
      45,    30,    31,    32,    49,    51,    45,    52,    78,    45,
      45,    55,    56,    63,    57,    33,    14,    34,    35,    28,
      29,    58,    30,    31,    32,    59,    62,    66,    14,    76,
      77,    50,    80,    93,    88,    94,    33,    14,    34,    35,
     101,    95,   105,    60,   108,   111,   112,   107,   109,   115,
     116,   122,   123,    89,   133,   134,   135,   137,   139,   140,
     143,   148,   147,     9,   132,     0,    47,   103,    54
>>>>>>> refs/remotes/origin/main
};

static const yytype_uint8 yycheck[] =
{
<<<<<<< HEAD
      35,    86,    75,   102,     5,     8,   103,     6,     6,    18,
      33,    28,    28,    16,    31,    38,    25,    20,    34,    22,
      29,    56,    57,    58,    59,    60,    99,    30,    31,    28,
      28,    34,     0,    29,   131,    18,    29,    32,    21,     3,
      28,    44,    38,    44,   143,    38,    29,    11,    12,    18,
      14,    15,    16,   138,    18,   140,   130,   130,   132,   144,
      29,    96,   147,    33,    28,    29,    30,     4,   142,   104,
     105,    18,   146,    19,    11,    12,    33,    14,    15,    16,
      19,    18,    29,    11,    12,    21,    14,    15,    16,    24,
      18,    28,    29,    30,   129,    36,    29,    38,    18,   134,
      28,    29,    30,    18,    39,    40,    41,    42,    43,    29,
      36,    33,    38,    33,    29,    28,     5,    33,    33,    38,
      39,    40,    41,    42,    43,    39,    40,    41,    42,    43,
      28,    34,    30,    31,    29,     6,    37,    30,     3,     6,
      28,    35,    22,    35,     5,    29,    22,    37,    23,    28,
      37,    37,    37,    10,    37,    37,    33,    23,    28,    33,
      38,     5,     5,    13,    33,    38,    38,     5,    30,    33,
      38,    22,    76,   107,    27
=======
      19,    57,    48,   104,    37,    58,   107,     5,   109,     8,
     107,    29,     0,    59,    60,    24,    15,     4,    37,    25,
      38,    20,    32,    29,    11,    12,   123,    14,    15,    16,
      39,    40,    41,    42,    43,    36,    29,    38,   139,    28,
     137,    28,    29,    30,    31,    38,    44,   148,    47,    33,
      96,    97,    98,    99,   100,   108,    19,    33,    11,    12,
     106,    14,    15,    16,    28,   111,    30,    31,    21,     6,
       7,     8,     9,    10,    21,    28,    29,    30,    31,    39,
      40,    41,    42,    43,   140,   104,    19,   133,   107,   135,
     109,    28,   125,    30,    31,   128,     5,   130,    38,    39,
      40,    41,    42,    43,    28,    28,   125,    31,    31,   128,
       3,   130,   145,    29,    33,    36,   149,    38,    11,    12,
     139,    14,    15,    16,    28,    33,   145,    29,     3,   148,
     149,    37,    37,    34,    37,    28,    29,    30,    31,    11,
      12,    37,    14,    15,    16,    37,    37,    33,    29,    34,
      37,    30,    10,     6,    28,    33,    28,    29,    30,    31,
       6,    34,    38,     5,    33,     5,    28,    38,    38,    35,
       6,    35,    22,    29,     5,    35,     5,    22,    13,    33,
      23,    38,    23,     5,   113,    -1,    20,    77,    25
>>>>>>> refs/remotes/origin/main
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,    32,    50,    51,    28,    48,    51,
<<<<<<< HEAD
      33,    19,    52,    18,    25,    29,    55,    57,    33,    21,
      19,    29,    56,    28,    31,    29,    57,    60,    61,    33,
      53,    54,    57,    28,    55,     5,    28,    34,    30,    33,
      29,    49,    61,    21,    54,    33,    57,     6,    28,    67,
      34,     6,    37,     3,    62,    33,    39,    40,    41,    42,
      43,     6,    35,    29,    38,    58,    59,    63,    67,    67,
      67,    67,    67,    35,    28,    22,    36,    38,    11,    12,
      14,    15,    16,    28,    30,    57,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,     5,    62,    59,    22,
      37,    37,    37,    37,    37,     5,    44,    37,     4,    65,
      33,    67,    23,    62,    10,    67,    75,    28,    66,    75,
      67,    28,    67,    28,    38,    58,    33,    23,    38,    24,
      38,    33,    38,    38,     5,    38,    67,    62,    64,    75,
      64,    67,    13,    33,    64,    66,    38,    64
=======
      33,    19,    52,    25,    29,    53,    55,    33,    21,    19,
      54,    28,    31,    29,    55,    58,    59,    33,    11,    12,
      14,    15,    16,    28,    30,    31,    55,    62,    63,    64,
      66,    67,    68,    69,    70,    71,    72,    53,     5,    28,
      30,    33,    29,    49,    59,    37,    37,    37,    37,    37,
       5,    44,    37,    34,    21,    63,    33,     6,     7,     8,
       9,    10,    28,    31,    65,    71,    34,    37,     3,    60,
      10,    65,    73,    28,    64,    73,    65,    65,    28,    29,
      38,    56,    57,     6,    33,    34,    39,    40,    41,    42,
      43,     6,    38,    56,    61,    38,    24,    38,    33,    38,
      38,     5,    28,    36,    38,    35,     6,    65,    65,    65,
      65,    65,    35,    22,    38,    62,    65,    60,    62,    73,
      62,    65,    57,     5,    35,     5,    60,    22,     4,    13,
      33,    65,    65,    23,    60,    62,    64,    23,    38,    62
>>>>>>> refs/remotes/origin/main
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
#line 35 "limbaj.y"
    {currentScope = "global";;}
    break;

  case 3:
#line 35 "limbaj.y"
    {currentScope = "global";;}
    break;

  case 4:
#line 35 "limbaj.y"
    {currentScope = "main";;}
    break;

  case 5:
#line 35 "limbaj.y"
    {
    printf("Program corect sintactic\n");
;}
    break;

  case 8:
#line 43 "limbaj.y"
    {currentScope = (yyvsp[(2) - (2)].string);;}
    break;

  case 9:
#line 43 "limbaj.y"
<<<<<<< HEAD
    { if(!ids.existsUserdef((yyvsp[(2) - (6)].string))) {                        
=======
    { if(!ids.existsUserdef((yyvsp[(2) - (6)].string))) {
                        
>>>>>>> refs/remotes/origin/main
                        UserDefinedType newUserDef((yyvsp[(2) - (6)].string));
                          ids.addUserDef(newUserDef);
                     }
                     else {
                          std::cerr << "Error: class with name '" << (yyvsp[(2) - (6)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 10:
<<<<<<< HEAD
#line 51 "limbaj.y"
=======
#line 52 "limbaj.y"
>>>>>>> refs/remotes/origin/main
    { if(!ids.existsUserdef((yyvsp[(2) - (4)].string))) {
                          UserDefinedType newUserDef((yyvsp[(2) - (4)].string));
                          ids.addUserDef(newUserDef);
                     } else {
                          std::cerr << "Error: class with name '" << (yyvsp[(2) - (4)].string) << "' already exists." << std::endl;
<<<<<<< HEAD
=======
                     }
                    ;}
    break;

  case 13:
#line 63 "limbaj.y"
    {currentScope = "global";;}
    break;

  case 15:
#line 66 "limbaj.y"
    { if(!ids.existsVar((yyvsp[(2) - (2)].string))) {
                        Value varVal((yyvsp[(1) - (2)].string));
                        Variable newVar((yyvsp[(2) - (2)].string),varVal);
                        ids.addVar(newVar);
                     }
                     else {
                          std::cerr << "Error: variable with name '" << (yyvsp[(2) - (2)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 16:
#line 75 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(3) - (6)].string))) {
                        Vector newVector((yyvsp[(3) - (6)].string),(yyvsp[(1) - (6)].string),(yyvsp[(5) - (6)].value_int));
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << (yyvsp[(2) - (6)].string) << "' already exists." << std::endl;
>>>>>>> refs/remotes/origin/main
                     }
                    ;}
    break;

  case 17:
<<<<<<< HEAD
#line 71 "limbaj.y"
    {currentScope = "global";;}
    break;

  case 19:
#line 74 "limbaj.y"
    { if(!ids.existsVar((yyvsp[(2) - (2)].string))) {
                        Value varVal((yyvsp[(1) - (2)].string));
                        Variable newVar((yyvsp[(2) - (2)].string),varVal);
                        ids.addVar(newVar);
                     }
                     else {
                          std::cerr << "Error: variable with name '" << (yyvsp[(2) - (2)].string) << "' already exists." << std::endl;
=======
#line 84 "limbaj.y"
    {  if(!ids.existsVar((yyvsp[(2) - (4)].string))) {
                        Value varVal("int");
                        if(varVal.type == (yyvsp[(1) - (4)].string)){

                        Variable newVar((yyvsp[(2) - (4)].string),varVal);
                        ids.addVar(newVar);
                        } else {
                        std::cerr << "Error: variable with name '" << (yyvsp[(2) - (4)].string) << "' was attributed the wrong type." << std::endl;

                        }
                     }
                     else {
                          std::cerr << "Error: variable with name '" << (yyvsp[(2) - (4)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 18:
#line 99 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(1) - (8)].string))) {
                          Vector newVector((yyvsp[(3) - (8)].string),(yyvsp[(1) - (8)].string),(yyvsp[(5) - (8)].value_int));
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << (yyvsp[(2) - (8)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 21:
#line 113 "limbaj.y"
    {
        Parameter param((yyvsp[(2) - (2)].string),(yyvsp[(1) - (2)].string));
        ids.tempParams.push_back(param);
        ;}
    break;

  case 25:
#line 122 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (8)].string))) {
                        Function newFunc((yyvsp[(1) - (8)].string),(yyvsp[(2) - (8)].string));
                        newFunc.params = std::move(ids.tempParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (8)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 26:
#line 131 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (7)].string))) {
                          Function newFunc((yyvsp[(1) - (7)].string),(yyvsp[(2) - (7)].string));
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (7)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 27:
#line 139 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (5)].string))) {
                          Function newFunc((yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string));
                        newFunc.params = std::move(ids.tempParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (5)].string) << "' already exists." << std::endl;
>>>>>>> refs/remotes/origin/main
                     }
                    ;}
    break;

<<<<<<< HEAD
  case 20:
#line 84 "limbaj.y"
    {
                    if(!ids.existsVar((yyvsp[(3) - (3)].string))) {
                        Value varVal((yyvsp[(2) - (3)].string));
                        Variable newVar((yyvsp[(3) - (3)].string),varVal);
                         newVar.isConst = true;
                        ids.addVar(newVar);
                     }
                     else {
                          std::cerr << "Error: variable with name '" << (yyvsp[(3) - (3)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 21:
#line 95 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(2) - (5)].string))) {
                        Vector newVector((yyvsp[(2) - (5)].string),(yyvsp[(1) - (5)].string),(yyvsp[(4) - (5)].value_int));
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << (yyvsp[(2) - (5)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 22:
#line 104 "limbaj.y"
    {  if(!ids.existsVar((yyvsp[(2) - (4)].string))) {
                        Value varVal("int");
                        if(varVal.type == (yyvsp[(1) - (4)].string)){

                        Variable newVar((yyvsp[(2) - (4)].string),varVal);
                        ids.addVar(newVar);
                        } else {
                        std::cerr << "Error: variable with name '" << (yyvsp[(2) - (4)].string) << "' was attributed the wrong type." << std::endl;

                        }
                     }
                     else {
                          std::cerr << "Error: variable with name '" << (yyvsp[(2) - (4)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 23:
#line 119 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(1) - (8)].string))) {
                          Vector newVector((yyvsp[(3) - (8)].string),(yyvsp[(1) - (8)].string),(yyvsp[(5) - (8)].value_int));
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << (yyvsp[(2) - (8)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 26:
#line 133 "limbaj.y"
    {
        Parameter param((yyvsp[(2) - (2)].string),(yyvsp[(1) - (2)].string));
        ids.tempParams.push_back(param);
        ;}
    break;

  case 30:
#line 142 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (8)].string))) {
                        Function newFunc((yyvsp[(1) - (8)].string),(yyvsp[(2) - (8)].string));
                        newFunc.params = std::move(ids.tempParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (8)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 31:
#line 151 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (7)].string))) {
                          Function newFunc((yyvsp[(1) - (7)].string),(yyvsp[(2) - (7)].string));
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (7)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

  case 32:
#line 159 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (5)].string))) {
                          Function newFunc((yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string));
                        newFunc.params = std::move(ids.tempParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (5)].string) << "' already exists." << std::endl;
=======
  case 28:
#line 148 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (4)].string))) {
                          Function newFunc((yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].string));
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (4)].string) << "' already exists." << std::endl;
>>>>>>> refs/remotes/origin/main
                     }
                    ;}
    break;

<<<<<<< HEAD
  case 33:
#line 168 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(2) - (4)].string))) {
                          Function newFunc((yyvsp[(2) - (4)].string),(yyvsp[(1) - (4)].string));
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(2) - (4)].string) << "' already exists." << std::endl;
=======
  case 29:
#line 158 "limbaj.y"
    {currentScope = "main";;}
    break;

  case 42:
#line 176 "limbaj.y"
    { if(!ids.existsVar((yyvsp[(1) - (3)].string))) {
                          
>>>>>>> refs/remotes/origin/main
                     }
                    ;}
    break;

<<<<<<< HEAD
  case 34:
#line 178 "limbaj.y"
    {currentScope = "main";;}
    break;

  case 47:
#line 197 "limbaj.y"
    {                
                    if(!ids.existsVar((yyvsp[(1) - (3)].string))){
                    std::cerr << "Error: call of undeclared variable with name '" << (yyvsp[(1) - (3)].string) << "'" << std::endl;
                    }
                    else {
                         Variable* var = ids.getVar((yyvsp[(1) - (3)].string));
                         var->val.val = (yyvsp[(3) - (3)].value_int);
                         std::cout << "Assignment of variable with value '" << std::get<int>(var->val.val) << "'" << std::endl;
                    }
             ;}
    break;

  case 48:
#line 207 "limbaj.y"
    {
               if(!ids.existsVar((yyvsp[(1) - (3)].string))){
                    std::cerr << "Error: call of undeclared variable with name '" << (yyvsp[(1) - (3)].string) << "'" << std::endl;
                    }
                    else {
                         Variable* var = ids.getVar((yyvsp[(1) - (3)].string));
                         Variable* var2 = ids.getVar((yyvsp[(3) - (3)].string));
                         int sum = std::get<int>(var->val.val) + std::get<int>(var2->val.val);
                         var->val.val = sum;
                    }
          ;}
    break;

  case 49:
#line 220 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (3)].value_int) + (yyvsp[(3) - (3)].value_int); ;}
    break;

  case 50:
#line 221 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (3)].value_int) - (yyvsp[(3) - (3)].value_int); ;}
    break;

  case 51:
#line 222 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (3)].value_int) * (yyvsp[(3) - (3)].value_int); ;}
    break;

  case 52:
#line 223 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (3)].value_int) / (yyvsp[(3) - (3)].value_int); ;}
    break;

  case 53:
#line 224 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (3)].value_int) % (yyvsp[(3) - (3)].value_int); ;}
    break;

  case 54:
#line 225 "limbaj.y"
    { (yyval.value_int) = (yyvsp[(1) - (1)].value_int); ;}
    break;

  case 55:
#line 226 "limbaj.y"
    {
               if(!ids.existsVar((yyvsp[(1) - (1)].string))){
                    std::cerr << "Error: call of undeclared variable with name " << (yyvsp[(1) - (1)].string) << " " << std::endl;
                    }
                    else {
                         std::cout<< "asd";
                         Variable* var = ids.getVar((yyvsp[(1) - (1)].string));
                         (yyval.value_int) = std::get<int>(var->val.val);
                    }
          ;}
    break;

  case 60:
#line 248 "limbaj.y"
    { printf("%s\n",(yyvsp[(3) - (4)].string)); ;}
    break;

  case 61:
#line 250 "limbaj.y"
    { printf("%d\n",(yyvsp[(3) - (4)].value_int)); ;}
    break;

  case 62:
#line 252 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(1) - (4)].string))) {                          
=======
  case 43:
#line 180 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(1) - (6)].string))) {
                        
                     }
                    ;}
    break;

  case 49:
#line 191 "limbaj.y"
    { if(!ids.existsVar((yyvsp[(1) - (1)].string))){
                    std::cerr << "Error: call of undeclared variable with name '" << (yyvsp[(1) - (1)].string) << "'" << std::endl;
                }
                ;}
    break;

  case 55:
#line 200 "limbaj.y"
    { if(!ids.existsVect((yyvsp[(1) - (4)].string))){
                    std::cerr << "Error: call of undeclared vector with name '" << (yyvsp[(1) - (4)].string) << "'" << std::endl;
                }
                ;}
    break;

  case 56:
#line 204 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(1) - (1)].string))){
                    std::cerr << "Error: call of undeclared function with name '" << (yyvsp[(1) - (1)].string) << "'" << std::endl;
                }
                ;}
    break;

  case 61:
#line 220 "limbaj.y"
    { printf("%s\n",(yyvsp[(3) - (4)].string)); ;}
    break;

  case 62:
#line 222 "limbaj.y"
    { printf("%s\n",(yyvsp[(3) - (4)].string)); ;}
    break;

  case 63:
#line 224 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(1) - (4)].string))) {
                          
>>>>>>> refs/remotes/origin/main
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(1) - (4)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

<<<<<<< HEAD
  case 63:
#line 258 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(1) - (3)].string))) {                          
=======
  case 64:
#line 231 "limbaj.y"
    { if(!ids.existsFunc((yyvsp[(1) - (3)].string))) {
                          
>>>>>>> refs/remotes/origin/main
                     }
                     else {
                          std::cerr << "Error: function with name '" << (yyvsp[(1) - (3)].string) << "' already exists." << std::endl;
                     }
                    ;}
    break;

<<<<<<< HEAD
  case 64:
#line 267 "limbaj.y"
=======
  case 65:
#line 241 "limbaj.y"
>>>>>>> refs/remotes/origin/main
    { if(!ids.existsVar((yyvsp[(3) - (5)].string))) {
                    
                     }
                    ;}
    break;


/* Line 1267 of yacc.c.  */
<<<<<<< HEAD
#line 1821 "limbaj.tab.c"
=======
#line 1775 "limbaj.tab.c"
>>>>>>> refs/remotes/origin/main
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


<<<<<<< HEAD
#line 277 "limbaj.y"
=======
#line 251 "limbaj.y"
>>>>>>> refs/remotes/origin/main

void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     ids.printSymbolTable();
    
} 
