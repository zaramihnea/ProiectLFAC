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
     TYPEOF = 290
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
#define TYPEOF 290




/* Copy the first part of user declarations.  */
#line 1 "tema.y"

#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
#include "functii.h"
int yylex();
int yyerror();



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
#line 186 "tema.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 199 "tema.tab.c"

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   403

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      43,    44,    38,    36,    42,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    18,    24,    26,    30,
      33,    36,    39,    42,    45,    50,    56,    62,    68,    74,
      80,    85,    90,    95,   100,   104,   108,   112,   116,   122,
     128,   137,   143,   152,   158,   167,   173,   182,   188,   194,
     200,   206,   212,   214,   218,   221,   224,   227,   230,   234,
     237,   241,   243,   246,   250,   253,   258,   260,   265,   270,
     274,   276,   278,   280,   282,   287,   291,   295,   301,   307,
     309,   311,   316,   318,   320,   322,   324,   327,   332,   334,
     336,   340,   344,   349,   356,   364,   372,   380,   396,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    55,    -1,    50,    41,    -1,    49,
      50,    41,    -1,    52,    24,    56,    25,    -1,    49,    52,
      24,    56,    25,    -1,    51,    -1,    50,    42,    51,    -1,
       3,    27,    -1,     5,    27,    -1,     7,    27,    -1,     4,
      27,    -1,     6,    27,    -1,     3,    27,    12,    32,    -1,
      11,     3,    27,    12,    32,    -1,    11,     4,    27,    12,
      28,    -1,    11,     6,    27,    12,    30,    -1,    11,     7,
      27,    12,    29,    -1,    11,     5,    27,    12,    31,    -1,
       4,    27,    12,    28,    -1,     7,    27,    12,    29,    -1,
       5,    27,    12,    31,    -1,     6,    27,    12,    30,    -1,
       4,    34,    28,    -1,     7,    34,    28,    -1,     5,    34,
      28,    -1,     6,    34,    28,    -1,     5,    33,    28,    12,
      32,    -1,     4,    33,    43,    53,    44,    -1,     4,    33,
      43,    53,    44,    45,    56,    46,    -1,     5,    33,    43,
      53,    44,    -1,     5,    33,    43,    53,    44,    45,    56,
      46,    -1,     7,    33,    43,    53,    44,    -1,     7,    33,
      43,    53,    44,    45,    56,    46,    -1,     6,    33,    43,
      53,    44,    -1,     6,    33,    43,    53,    44,    45,    56,
      46,    -1,    10,    27,    24,    49,    25,    -1,     4,    33,
      43,    53,    44,    -1,     5,    33,    43,    53,    44,    -1,
       7,    33,    43,    53,    44,    -1,     6,    33,    43,    53,
      44,    -1,    54,    -1,    53,    42,    54,    -1,     7,    27,
      -1,     5,    27,    -1,     4,    27,    -1,     6,    27,    -1,
      15,    56,    26,    -1,    57,    41,    -1,    56,    57,    41,
      -1,    62,    -1,    56,    62,    -1,    27,    12,    60,    -1,
       9,    28,    -1,     9,    27,    36,    28,    -1,     8,    -1,
      33,    43,    61,    44,    -1,    35,    43,    58,    44,    -1,
      58,    13,    59,    -1,    59,    -1,    27,    -1,    28,    -1,
      29,    -1,    33,    43,    61,    44,    -1,    60,    13,    60,
      -1,    60,    14,    60,    -1,    43,    60,    14,    60,    44,
      -1,    43,    60,    13,    60,    44,    -1,    27,    -1,    31,
      -1,    33,    43,    61,    44,    -1,    28,    -1,    32,    -1,
      29,    -1,    30,    -1,    27,    33,    -1,    34,    43,    28,
      44,    -1,    28,    -1,    27,    -1,    61,    42,    28,    -1,
      61,    42,    27,    -1,    33,    43,    61,    44,    -1,    61,
      42,    33,    43,    61,    44,    -1,    16,    27,    14,    60,
      18,    56,    63,    -1,    16,    27,    13,    60,    18,    56,
      63,    -1,    21,    27,    14,    60,    23,    56,    22,    -1,
      20,    27,    14,    60,    42,    27,    14,    60,    42,    27,
      13,    13,    23,    56,    22,    -1,    17,    56,    63,    -1,
      19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    34,    35,    36,    37,    40,    41,    45,
      54,    63,    72,    81,    90,    99,   109,   119,   129,   139,
     149,   158,   167,   176,   185,   194,   203,   212,   221,   233,
     242,   251,   260,   269,   278,   287,   296,   305,   318,   322,
     326,   330,   337,   338,   342,   345,   348,   351,   357,   360,
     361,   362,   363,   367,   384,   387,   396,   399,   416,   425,
     426,   430,   437,   444,   451,   459,   460,   461,   462,   463,
     472,   473,   483,   486,   489,   492,   495,   501,   513,   514,
     518,   519,   523,   540,   545,   552,   559,   566,   577,   578
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
  "FLOAT", "BOOL", "CHAR", "STRING", "FUNCTIE", "VECTOR", "TYPEOF", "'+'",
  "'-'", "'*'", "'/'", "'%'", "';'", "','", "'('", "')'", "'['", "']'",
  "$accept", "progr", "declaratii", "declaratie", "variabila", "functie",
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,    59,    44,    40,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    53,    53,    54,    54,    54,    54,    55,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     4,     5,     1,     3,     2,
       2,     2,     2,     2,     4,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     3,     3,     3,     3,     5,     5,
       8,     5,     8,     5,     8,     5,     8,     5,     5,     5,
       5,     5,     1,     3,     2,     2,     2,     2,     3,     2,
       3,     1,     2,     3,     2,     4,     1,     4,     4,     3,
       1,     1,     1,     1,     4,     3,     3,     5,     5,     1,
       1,     4,     1,     1,     1,     1,     2,     4,     1,     1,
       3,     3,     4,     6,     7,     7,     7,    15,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     9,    12,     0,     0,    10,     0,     0,
      13,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    26,     0,     0,
      27,     0,     0,    25,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     4,     0,     0,     0,     0,     0,     8,     0,    14,
      20,     0,     0,     0,     0,     0,    42,    22,     0,     0,
      23,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,    48,     0,
      52,    49,     0,     0,     0,     0,     0,     5,    46,    45,
      47,    44,     0,    29,    28,    31,    35,    33,    37,    15,
      16,    19,    17,    18,     0,     0,     0,     0,     0,    69,
      72,    74,    75,    70,    73,     0,     0,     0,    53,    79,
      78,     0,     0,    61,    62,    63,     0,     0,    60,    50,
       6,     0,     0,     0,     0,    43,     0,     0,     0,     0,
      55,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    81,    80,     0,     0,
      59,    29,    31,    35,    33,    30,    32,    36,    34,     0,
       0,     0,     0,    71,    77,     0,     0,    82,     0,    64,
       0,    89,    85,    84,     0,    86,    68,    67,     0,     0,
       0,    83,    88,     0,     0,     0,     0,     0,     0,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    85,    86,    36,    68,
      69,   157,   158,   148,   152,    70,   232
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
     318,   -17,    62,    67,    72,    75,    -9,   300,    38,   168,
      41,  -194,    20,    37,    39,    28,    63,    95,     7,    83,
     103,   133,   159,   134,   152,   183,   176,   192,   197,   216,
     221,   224,  -194,   275,   164,   232,  -194,  -194,   327,   275,
     227,   234,   233,  -194,   236,   256,   233,  -194,   239,   233,
    -194,   250,   233,  -194,   318,   277,   281,   282,   285,   307,
    -194,    35,   293,   299,   308,   324,   266,   312,   209,   315,
    -194,  -194,   275,    87,   118,   165,   170,  -194,   225,  -194,
    -194,   330,   331,   332,   333,    80,  -194,  -194,   329,   124,
    -194,   205,  -194,   213,   137,   334,   335,   336,   338,   340,
     326,  -194,    61,   350,   351,   284,    98,   194,  -194,   337,
    -194,  -194,   245,   328,    33,   339,   341,  -194,  -194,  -194,
    -194,  -194,   233,     0,  -194,    10,    19,    23,  -194,  -194,
    -194,  -194,  -194,  -194,   342,   284,   284,   284,   284,   343,
    -194,  -194,  -194,  -194,  -194,   344,   345,   284,   202,  -194,
    -194,   346,   257,  -194,  -194,  -194,   347,    -5,  -194,  -194,
    -194,   233,   233,   233,   233,  -194,   275,   275,   275,   275,
    -194,   140,   172,    -2,    56,  -194,    98,   349,   218,   284,
     284,    98,   122,  -194,    98,   194,  -194,   297,   298,   301,
     302,    21,    57,    77,   161,   275,   275,   348,   275,   305,
     352,   284,   284,   202,   202,   306,  -194,  -194,   354,   309,
    -194,   353,   355,   356,   357,  -194,  -194,  -194,  -194,   193,
     193,   358,   255,  -194,  -194,    -8,     8,  -194,    98,  -194,
     275,  -194,  -194,  -194,   284,  -194,  -194,  -194,   310,   193,
      18,  -194,  -194,   359,   360,   361,   362,   275,   265,  -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,   325,    -7,   365,    -6,   -45,   258,  -194,   -39,
     -59,  -194,   196,  -121,  -156,   -55,  -193
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      78,    89,    34,    35,    91,   179,   180,    93,   185,   109,
      13,   179,   180,   110,   171,   172,   173,   174,    26,   109,
     199,   179,   180,   110,   -38,   205,   178,   233,   209,    60,
      61,   179,   180,   112,   -39,    45,   236,    62,    32,   186,
     197,    63,    64,   -41,    39,   166,   242,   -40,    65,    40,
      46,    41,   237,   109,    66,   167,    67,   110,   203,   204,
     243,    45,   100,   101,   168,    60,    61,   215,   169,   179,
     180,    42,   238,    62,   135,   136,   162,    63,    64,   198,
     225,   226,    37,    38,    65,    60,    61,    34,    35,    14,
      66,    43,    67,    62,    17,    15,    16,    63,    64,    20,
      18,    19,    23,   216,    65,    21,    22,    44,    24,    25,
      66,    47,    67,   240,    14,    48,   187,   188,   189,   190,
     113,    16,   122,   217,   123,   149,   150,   191,   192,   193,
     194,   151,   109,   109,   109,   109,   110,   110,   110,   110,
       1,     2,     3,     4,     5,    17,    51,     6,     7,   206,
     207,   114,    19,   179,   180,   208,   219,   220,   195,   222,
     109,   109,   128,   109,   110,   110,   122,   110,   125,    60,
      61,     1,     2,     3,     4,     5,    49,    62,     6,     7,
     109,    63,    64,    33,   110,   179,   180,    50,    65,   109,
     196,   239,    20,   110,    66,    52,    67,    23,   115,    22,
      54,    60,    61,   116,    25,    71,    38,   218,   248,    62,
     230,    53,   231,    63,    64,   179,   180,    60,    61,    55,
      65,   153,   154,   155,    56,    62,    66,   156,    67,    63,
      64,   201,   202,    60,    61,   108,    65,    81,    82,    83,
      84,    62,    66,    57,    67,    63,    64,   122,    58,   126,
     117,    59,    65,    60,    61,   122,    72,   127,    66,    79,
      67,    62,    80,    60,    61,    63,    64,    87,    88,    90,
     160,    62,    65,    60,    61,    63,    64,   235,    66,    92,
      67,    62,    65,    60,    61,    63,    64,   249,    66,    95,
      67,    62,    65,    96,    97,    63,    64,    98,    66,   182,
      67,   183,    65,    27,    28,    29,    30,    31,    66,   106,
      67,   139,   140,   141,   142,   143,   144,   145,   146,    99,
     102,     1,     2,     3,     4,     5,   103,   147,     6,     7,
       1,    73,    74,    75,    76,   104,   105,     6,     7,   122,
     122,   211,   212,   122,   122,   213,   214,   182,   182,   223,
     227,   182,   182,   229,   241,   107,   111,   118,   119,   120,
     121,   124,   134,   130,   137,   138,   129,   131,   132,   133,
     170,   161,   234,   245,   246,   221,   175,   200,   159,    94,
     165,   210,   163,     0,   164,   247,   244,   176,   177,   181,
     184,     0,     0,     0,     0,     0,   224,   228,   166,     0,
     167,   168,   169,    77
};

static const yytype_int16 yycheck[] =
{
      39,    46,     9,     9,    49,    13,    14,    52,    13,    68,
      27,    13,    14,    68,   135,   136,   137,   138,    27,    78,
     176,    13,    14,    78,    24,   181,   147,   220,   184,     8,
       9,    13,    14,    72,    24,    28,    44,    16,     0,    44,
      42,    20,    21,    24,    24,    45,   239,    24,    27,    12,
      43,    12,    44,   112,    33,    45,    35,   112,   179,   180,
      42,    28,    27,    28,    45,     8,     9,    46,    45,    13,
      14,    43,   228,    16,    13,    14,    43,    20,    21,    23,
     201,   202,    41,    42,    27,     8,     9,    94,    94,    27,
      33,    28,    35,    16,    27,    33,    34,    20,    21,    27,
      33,    34,    27,    46,    27,    33,    34,    12,    33,    34,
      33,    28,    35,   234,    27,    12,   161,   162,   163,   164,
      33,    34,    42,    46,    44,    27,    28,   166,   167,   168,
     169,    33,   191,   192,   193,   194,   191,   192,   193,   194,
       3,     4,     5,     6,     7,    27,    12,    10,    11,    27,
      28,    33,    34,    13,    14,    33,   195,   196,    18,   198,
     219,   220,    25,   222,   219,   220,    42,   222,    44,     8,
       9,     3,     4,     5,     6,     7,    43,    16,    10,    11,
     239,    20,    21,    15,   239,    13,    14,    28,    27,   248,
      18,   230,    27,   248,    33,    43,    35,    27,    33,    34,
      24,     8,     9,    33,    34,    41,    42,    46,   247,    16,
      17,    28,    19,    20,    21,    13,    14,     8,     9,    27,
      27,    27,    28,    29,    27,    16,    33,    33,    35,    20,
      21,    13,    14,     8,     9,    26,    27,     4,     5,     6,
       7,    16,    33,    27,    35,    20,    21,    42,    27,    44,
      25,    27,    27,     8,     9,    42,    24,    44,    33,    32,
      35,    16,    28,     8,     9,    20,    21,    31,    12,    30,
      25,    16,    27,     8,     9,    20,    21,    22,    33,    29,
      35,    16,    27,     8,     9,    20,    21,    22,    33,    12,
      35,    16,    27,    12,    12,    20,    21,    12,    33,    42,
      35,    44,    27,     3,     4,     5,     6,     7,    33,    43,
      35,    27,    28,    29,    30,    31,    32,    33,    34,    12,
      27,     3,     4,     5,     6,     7,    27,    43,    10,    11,
       3,     4,     5,     6,     7,    27,    12,    10,    11,    42,
      42,    44,    44,    42,    42,    44,    44,    42,    42,    44,
      44,    42,    42,    44,    44,    43,    41,    27,    27,    27,
      27,    32,    36,    28,    14,    14,    32,    31,    30,    29,
      28,    43,    14,    13,    13,    27,    33,    28,    41,    54,
     122,   185,    43,    -1,    43,    23,    27,    43,    43,    43,
      43,    -1,    -1,    -1,    -1,    -1,    44,    43,    45,    -1,
      45,    45,    45,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    11,    48,    49,
      50,    51,    52,    27,    27,    33,    34,    27,    33,    34,
      27,    33,    34,    27,    33,    34,    27,     3,     4,     5,
       6,     7,     0,    15,    50,    52,    55,    41,    42,    24,
      12,    12,    43,    28,    12,    28,    43,    28,    12,    43,
      28,    12,    43,    28,    24,    27,    27,    27,    27,    27,
       8,     9,    16,    20,    21,    27,    33,    35,    56,    57,
      62,    41,    24,     4,     5,     6,     7,    51,    56,    32,
      28,     4,     5,     6,     7,    53,    54,    31,    12,    53,
      30,    53,    29,    53,    49,    12,    12,    12,    12,    12,
      27,    28,    27,    27,    27,    12,    43,    43,    26,    57,
      62,    41,    56,    33,    33,    33,    33,    25,    27,    27,
      27,    27,    42,    44,    32,    44,    44,    44,    25,    32,
      28,    31,    30,    29,    36,    13,    14,    14,    14,    27,
      28,    29,    30,    31,    32,    33,    34,    43,    60,    27,
      28,    33,    61,    27,    28,    29,    33,    58,    59,    41,
      25,    43,    43,    43,    43,    54,    45,    45,    45,    45,
      28,    60,    60,    60,    60,    33,    43,    43,    60,    13,
      14,    43,    42,    44,    43,    13,    44,    53,    53,    53,
      53,    56,    56,    56,    56,    18,    18,    42,    23,    61,
      28,    13,    14,    60,    60,    61,    27,    28,    33,    61,
      59,    44,    44,    44,    44,    46,    46,    46,    46,    56,
      56,    27,    56,    44,    44,    60,    60,    44,    43,    44,
      17,    19,    63,    63,    14,    22,    44,    44,    61,    56,
      60,    44,    63,    42,    27,    13,    13,    23,    56,    22
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
    {printf("Program corect sintactic!\n");;}
    break;

  case 9:
#line 45 "tema.y"
    {
    if(va_string_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_string_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 10:
#line 54 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_char_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 11:
#line 63 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_float_declarare_only((yyvsp[(2) - (2)].nume));
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 12:
#line 72 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_int_declare_only((yyvsp[(2) - (2)].nume));
    else { 
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 13:
#line 81 "tema.y"
    {
    if(va_bool_EsteDeclarata((yyvsp[(2) - (2)].nume))==-1)
        variabila_bool_declare_only((yyvsp[(2) - (2)].nume));
    else { 
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 14:
#line 90 "tema.y"
    {
    if(va_string_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1)
        variabila_string_declarare_only((yyvsp[(2) - (4)].nume));
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 15:
#line 99 "tema.y"
    { 
    if(va_string_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_string_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].string));
        Facemconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror();
        printf("Redefiniti variabila");
        YYABORT;
    }
;}
    break;

  case 16:
#line 109 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_int_declare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare)); 
        Facemconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 17:
#line 119 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_bool_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare_bool));
        Facemconst((yyvsp[(3) - (5)].nume));
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 18:
#line 129 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_float_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].valoare_float)); 
        Facemconst((yyvsp[(3) - (5)].nume)); 
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 19:
#line 139 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(3) - (5)].nume))==-1) {
        variabila_char_declarare_init((yyvsp[(3) - (5)].nume),(yyvsp[(5) - (5)].caracter));  
        Facemconst((yyvsp[(3) - (5)].nume)); 
    } else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 20:
#line 149 "tema.y"
    {
    if(va_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_int_declare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare));
    else { 
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 21:
#line 158 "tema.y"
    {
    if(va_float_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_float_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare_float));
    else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 22:
#line 167 "tema.y"
    {
    if(va_char_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_char_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].caracter));
    else { 
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 23:
#line 176 "tema.y"
    {
    if(va_bool_EsteDeclarata((yyvsp[(2) - (4)].nume))==-1) 
        variabila_bool_declarare_init((yyvsp[(2) - (4)].nume),(yyvsp[(4) - (4)].valoare_bool));
    else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
;}
    break;

  case 24:
#line 185 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'i', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 25:
#line 194 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'f', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 26:
#line 203 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'c', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 27:
#line 212 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (3)].nume)) == -1) 
    v_Declarare_definitie((yyvsp[(2) - (3)].nume), 'b', (yyvsp[(3) - (3)].valoare));
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
;}
    break;

  case 28:
#line 221 "tema.y"
    {
  if(v_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) {
    if(vs_decl((yyvsp[(2) - (5)].nume), (yyvsp[(3) - (5)].valoare), (yyvsp[(5) - (5)].string)) == -1){
      yyerror();
      printf("Depaseste dimensiune vectorului");
    }
  } else {
    yyerror();
    printf("Redefiniti functia \n");
    YYABORT;
  }
;}
    break;

  case 29:
#line 233 "tema.y"
    { 
  if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (5)].nume), "int"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
;}
    break;

  case 30:
#line 242 "tema.y"
    { 
  if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (8)].nume), "int"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
;}
    break;

  case 31:
#line 251 "tema.y"
    {
  if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (5)].nume), "char"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
;}
    break;

  case 32:
#line 260 "tema.y"
    { 
  if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (8)].nume), "char"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
;}
    break;

  case 33:
#line 269 "tema.y"
    {
  if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (5)].nume), "float"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
;}
    break;

  case 34:
#line 278 "tema.y"
    { 
  if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (8)].nume), "float"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
;}
    break;

  case 35:
#line 287 "tema.y"
    {
  if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (5)].nume), "bool"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
;}
    break;

  case 36:
#line 296 "tema.y"
    { 
  if(f_EsteDeclarata((yyvsp[(2) - (8)].nume)) == -1) 
    f_Declarare_definitie((yyvsp[(2) - (8)].nume), "bool"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
;}
    break;

  case 37:
#line 305 "tema.y"
    {
  if(cl_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
    cl_Declarare_definitie((yyvsp[(2) - (5)].nume)); 
  else {
    yyerror();
    printf("Redefiniti clasa\n");
    YYABORT;
  }
;}
    break;

  case 38:
#line 318 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "int");
  ;}
    break;

  case 39:
#line 322 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "char");
  ;}
    break;

  case 40:
#line 326 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "float");
  ;}
    break;

  case 41:
#line 330 "tema.y"
    {
    if(f_EsteDeclarata((yyvsp[(2) - (5)].nume)) == -1) 
      f_Declarare_definitie((yyvsp[(2) - (5)].nume), "bool");
  ;}
    break;

  case 44:
#line 342 "tema.y"
    {
    Parametru1((yyvsp[(2) - (2)].nume));
  ;}
    break;

  case 45:
#line 345 "tema.y"
    {
    Parametru2((yyvsp[(2) - (2)].nume));
  ;}
    break;

  case 46:
#line 348 "tema.y"
    {
    Parametrii((yyvsp[(2) - (2)].nume));
  ;}
    break;

  case 47:
#line 351 "tema.y"
    {
    Parametru3((yyvsp[(2) - (2)].nume));
  ;}
    break;

  case 53:
#line 367 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (3)].nume)) == -1) {
      yyerror(); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else {
      if (EsteConst((yyvsp[(1) - (3)].nume)) == 1) {
        yyerror(); 
        printf("Variabila %s este de tip const \n", (yyvsp[(1) - (3)].nume)); 
        YYABORT; 
      } else if (FacemNegativ((yyvsp[(1) - (3)].nume)) == 0) {
        yyerror(); 
        printf("Asignarea nu a avut loc pentru variabila %s \n", (yyvsp[(1) - (3)].nume));
        YYABORT;
      }
    } 
  ;}
    break;

  case 54:
#line 384 "tema.y"
    {
    Eval((yyvsp[(2) - (2)].valoare));
  ;}
    break;

  case 55:
#line 387 "tema.y"
    {
    if (strcmp((type((yyvsp[(2) - (4)].nume))), "int") == 0) 
      Eval(valoare((yyvsp[(2) - (4)].nume)) + (yyvsp[(4) - (4)].valoare)); 
    else {
      yyerror();
      printf("Variabila nu este de tipul dorit\n");
      YYABORT;
    }
  ;}
    break;

  case 56:
#line 396 "tema.y"
    {
    print_symbol();
  ;}
    break;

  case 57:
#line 399 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror(); 
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 1) {
        yyerror();    
        printf("Tipul parametrilor nu corespund \n"); 
        YYABORT; 
      } else if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 2) {
        yyerror();    
        printf("Numarul de parametrii nu corespund \n"); 
        YYABORT; 
      }
    }
  ;}
    break;

  case 58:
#line 416 "tema.y"
    {
    if (Afisare() == 0) 
      printf("Tipul expresiei este int \n"); 
    else if (Afisare() == 1) 
      printf("Tipul expresiei este float \n");
  ;}
    break;

  case 60:
#line 426 "tema.y"
    {;}
    break;

  case 61:
#line 430 "tema.y"
    {
    if (AdaugVector((yyvsp[(1) - (1)].nume)) == 0) {
      yyerror();  
      printf("elementele sunt de tip diferit \n");  
      YYABORT;
    }
  ;}
    break;

  case 62:
#line 437 "tema.y"
    {
    if (AdaugareVector((yyvsp[(1) - (1)].valoare)) == 0) {
      yyerror(); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 63:
#line 444 "tema.y"
    {
    if (AdaugareeVector((yyvsp[(1) - (1)].valoare_float)) == 0) {
      yyerror(); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  ;}
    break;

  case 69:
#line 463 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(1) - (1)].nume)) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    } else {
      IdprimesteId((yyvsp[(1) - (1)].nume));
    }
  ;}
    break;

  case 71:
#line 473 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror();
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      inlocuireFunctie((yyvsp[(1) - (4)].nume));
      FunctieInFunctie3();
    }
  ;}
    break;

  case 72:
#line 483 "tema.y"
    {
    inlocuireaInt((yyvsp[(1) - (1)].valoare));
  ;}
    break;

  case 73:
#line 486 "tema.y"
    {
    inlocuireaString((yyvsp[(1) - (1)].string));
  ;}
    break;

  case 74:
#line 489 "tema.y"
    {
    inlocuireaFloat((yyvsp[(1) - (1)].valoare_float));
  ;}
    break;

  case 75:
#line 492 "tema.y"
    {
    inlocuireaBool((yyvsp[(1) - (1)].valoare_bool));
  ;}
    break;

  case 76:
#line 495 "tema.y"
    {
    if (cl_EsteDeclarata((yyvsp[(1) - (2)].nume)) == -1) {
      yyerror();
      printf("Clasa nu a fost declarata");
    }
  ;}
    break;

  case 77:
#line 501 "tema.y"
    {
    if (v_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror();
      printf("Vectorul nu a fost declarat\n");
      YYABORT;
    } else {
      AsignareDeVector((yyvsp[(1) - (4)].nume));
    }
  ;}
    break;

  case 79:
#line 514 "tema.y"
    {
    VerificareParametru((yyvsp[(1) - (1)].nume));
    FunctieInFunctie();
  ;}
    break;

  case 81:
#line 519 "tema.y"
    {
    printf("%s \n", (yyvsp[(3) - (3)].nume));
    VerificareParametru((yyvsp[(3) - (3)].nume));
  ;}
    break;

  case 82:
#line 523 "tema.y"
    {
    if (f_EsteDeclarata((yyvsp[(1) - (4)].nume)) == -1) {
      yyerror();
      printf("Functia nu a fost declarata\n");
      YYABORT;
    }
    if (VerificaParametruFIF((yyvsp[(1) - (4)].nume)) == 1) {
      yyerror();
      printf("Tipul parametrilor nu corespund \n");
      YYABORT;
    } else if (VerificareFunctie((yyvsp[(1) - (4)].nume)) == 2) {
      yyerror();
      printf("Numarul de parametrii nu corespund \n");
      YYABORT;
    }
    FunctieInFunctie2();
  ;}
    break;

  case 84:
#line 545 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 85:
#line 552 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 86:
#line 559 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (7)].nume)) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;

  case 87:
#line 566 "tema.y"
    {
    if (va_EsteDeclarata((yyvsp[(2) - (15)].nume)) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2346 "tema.tab.c"
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


#line 580 "tema.y"


int yyerror(char * s){
printf("_err: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
int ok=0;
yyin=fopen(argv[1],"r");
yyparse();
print_symbol();
print_table();
}

