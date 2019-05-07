/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "var.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int yylex();
void yyerror(char *s);


void installid(char s[],int n);
int getid(char s[]);
void dis();
int relop(int a, int b, int c);
int cel_to_fah(int);
int fah_to_cel(int);
int factorial(int);
int km_to_m(int);
int m_to_km(int);

char reg[7][10]={"t1","t2","t3","t4","t5","t6"};

extern FILE *yyout;
extern FILE *yyin;
extern char *yytext;
extern char yylineno;

struct table{
char name[10];
int val;
}symbol[53];

#line 98 "var.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "var.tab.h".  */
#ifndef YY_YY_VAR_TAB_H_INCLUDED
# define YY_YY_VAR_TAB_H_INCLUDED
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
    id = 258,
    num = 259,
    print = 260,
    EXIT = 261,
    IF = 262,
    ELSE = 263,
    WHILE = 264,
    ptable = 265,
    SQRT = 266,
    FACTORIAL = 267,
    CEL_TO_FAH = 268,
    FAH_TO_CEL = 269,
    M_TO_KM = 270,
    KM_TO_M = 271,
    and = 272,
    or = 273,
    eq = 274,
    ne = 275,
    ge = 276,
    le = 277
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "var.y" /* yacc.c:355  */

int no;
char var[10];

#line 166 "var.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 183 "var.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   651

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    27,     2,     2,
      32,    33,    28,    25,     2,    26,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      20,    31,    19,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    72,    74,
      77,    80,    83,    86,    93,    96,    99,   102,   105,   108,
     115,   117,   119,   125,   128,   130,   132,   134,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   161,   162
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "id", "num", "print", "EXIT", "IF",
  "ELSE", "WHILE", "ptable", "SQRT", "FACTORIAL", "CEL_TO_FAH",
  "FAH_TO_CEL", "M_TO_KM", "KM_TO_M", "and", "or", "'>'", "'<'", "eq",
  "ne", "ge", "le", "'+'", "'-'", "'%'", "'*'", "'/'", "';'", "'='", "'('",
  "')'", "'{'", "'}'", "$accept", "start", "assignment", "condn", "wloop",
  "math_function", "metric_conversion", "exp", "term", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    62,
      60,   274,   275,   276,   277,    43,    45,    37,    42,    47,
      59,    61,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF -26

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-26)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     516,   -25,     4,   -18,    -6,     6,    33,     8,    34,    35,
      59,    65,    68,   110,    71,   -26,   -26,   -26,   -26,    58,
     -26,   -26,     4,   320,   -26,   -26,     4,     4,   -26,     4,
       4,     4,     4,     4,     4,   -26,     4,    73,    75,    77,
     -26,   -26,   -26,   -26,   -26,    78,    81,    84,   517,   155,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   -26,   184,   530,   201,   218,   235,   252,
     269,   286,   334,   -26,   -26,   -26,   135,   -26,   -26,   -26,
      60,    60,   -24,   -24,   -24,   -24,   -24,   -24,    17,    17,
      17,   -26,   -26,    31,     4,     4,     4,     4,     4,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,    78,    18,   107,   136,
     600,   609,   618,   106,     4,   105,   118,   119,   122,   123,
       4,   348,    97,   103,   161,   162,   163,   362,   125,     4,
       4,     4,     4,     4,   150,   178,   376,   390,   404,   418,
     432,   179,   156,     4,     4,     4,     4,     4,   157,   187,
     543,   556,   569,   582,   595,    61,     4,     7,    10,    12,
      15,    72,    74,   158,   164,   446,   165,   167,   168,   169,
     185,   186,     4,     4,   159,   196,   197,   198,   213,   214,
     215,   460,   303,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     230,   180,   -26,   263,   236,     4,   474,   247,   275,   250,
     296,   270,     4,   488,   265,   281,   -26
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    12,    14,    16,     0,
      54,    53,     0,     0,    38,     2,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
      11,    13,    15,    17,     4,    54,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     9,     6,     0,    30,    33,    50,
      51,    52,    44,    45,    46,    47,    48,    49,    39,    40,
      43,    41,    42,     0,     0,     0,     0,     0,     0,    32,
      31,    34,    35,    36,    37,     5,     0,     0,    44,    45,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    25,    24,    29,    28,    27,    26,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -26,   -26,   304,   305,   321,     9,    43,    -2,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    46,    47,    88,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    58,    59,    60,    61,    62,    19,    20,    21,    17,
      20,    21,    25,    20,    21,    20,    21,    48,    20,    21,
      49,   113,    42,   114,    64,    65,    26,    66,    67,    68,
      69,    70,    71,   166,    72,   167,    22,   168,    27,    22,
      29,   169,    22,    18,    22,    61,    62,    22,    80,    81,
      82,    83,    84,    85,    86,    87,    43,    89,    90,    91,
      92,    45,    21,    28,   163,   107,    30,    31,   164,     7,
       8,     9,    10,    11,    12,    20,    21,    20,    21,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      22,    32,   108,   109,   110,   111,   112,    33,   170,   171,
      34,    44,   129,    73,    22,    74,    22,    75,   130,    76,
      35,    77,   121,     1,    78,    36,    37,     4,   127,     5,
      38,     7,     8,     9,    10,    11,    12,   136,   137,   138,
     139,   140,    58,    59,    60,    61,    62,   120,   106,   122,
     115,   150,   151,   152,   153,   154,     7,     8,     9,    10,
      11,    12,   123,   124,   165,    89,   125,   126,    89,    89,
     135,    58,    59,    60,    61,    62,   131,   132,   133,   116,
     181,   182,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   141,   142,   148,    79,   172,
     149,   155,   156,   196,   183,   175,   173,   176,   177,   178,
     203,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   193,   179,   180,    93,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   184,   185,   186,    99,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   187,   188,
     189,   100,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   192,   194,   195,   101,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   198,   199,   200,   102,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   201,
     205,   202,   103,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   206,    39,    40,   104,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,    41,     0,   191,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   105,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   128,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   134,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   143,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     144,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   145,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   146,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   147,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   174,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     190,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   197,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   204,     1,
       0,     2,     3,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    50,    51,    94,
      95,    54,    96,    97,    98,    58,    59,    60,    61,    62,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   157,
      60,    61,    62,    50,    51,    52,    53,    54,    55,    56,
      57,   158,    59,    60,    61,    62,    50,    51,    52,    53,
      54,    55,    56,    57,   159,   160,    60,    61,    62,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   161,    60,
      61,    62,    50,    51,    52,    53,    54,    55,    56,    57,
     162,    59,    60,    61,    62,    58,    59,    60,    61,    62,
       0,     0,     0,   117,    58,    59,    60,    61,    62,     0,
       0,     0,   118,    58,    59,    60,    61,    62,     0,     0,
       0,   119
};

static const yytype_int16 yycheck[] =
{
       2,    25,    26,    27,    28,    29,    31,     3,     4,     0,
       3,     4,    30,     3,     4,     3,     4,    19,     3,     4,
      22,     3,    13,     5,    26,    27,    32,    29,    30,    31,
      32,    33,    34,    26,    36,    25,    32,    25,    32,    32,
      32,    26,    32,     0,    32,    28,    29,    32,    50,    51,
      52,    53,    54,    55,    56,    57,    13,    59,    60,    61,
      62,     3,     4,    30,     3,    34,    32,    32,     7,    11,
      12,    13,    14,    15,    16,     3,     4,     3,     4,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      32,    32,    94,    95,    96,    97,    98,    32,    26,    25,
      32,    30,     5,    30,    32,    30,    32,    30,     5,    31,
       0,    30,   114,     3,    30,     5,     6,     7,   120,     9,
      10,    11,    12,    13,    14,    15,    16,   129,   130,   131,
     132,   133,    25,    26,    27,    28,    29,    31,     3,    34,
      33,   143,   144,   145,   146,   147,    11,    12,    13,    14,
      15,    16,    34,    34,   156,   157,    34,    34,   160,   161,
      35,    25,    26,    27,    28,    29,     5,     5,     5,    33,
     172,   173,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    35,     8,     8,    33,    31,
      34,    34,     5,   195,    35,    30,    32,    30,    30,    30,
     202,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    34,    30,    30,    33,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    35,    35,    35,    33,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    35,    35,
      35,    33,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    35,     3,    31,    33,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    35,     8,    34,    33,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
      35,    31,    33,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    35,    13,    13,    33,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    13,    -1,    33,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
      -1,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     9,    10,    11,    12,    13,
      14,    15,    16,    37,    38,    39,    40,    41,    42,    31,
       3,     4,    32,    43,    44,    30,    32,    32,    30,    32,
      32,    32,    32,    32,    32,     0,     5,     6,    10,    38,
      39,    40,    41,    42,    30,     3,    41,    42,    43,    43,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    30,    30,    30,    31,    30,    30,    33,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    33,    19,    20,    22,    23,    24,    33,
      33,    33,    33,    33,    33,    30,     3,    34,    43,    43,
      43,    43,    43,     3,     5,    33,    33,    33,    33,    33,
      31,    43,    34,    34,    34,    34,    34,    43,    30,     5,
       5,     5,     5,     5,    30,    35,    43,    43,    43,    43,
      43,    35,     8,    30,    30,    30,    30,    30,     8,    34,
      43,    43,    43,    43,    43,    34,     5,    26,    25,    25,
      26,    26,    25,     3,     7,    43,    26,    25,    25,    26,
      26,    25,    31,    32,    30,    30,    30,    30,    30,    30,
      30,    43,    43,    35,    35,    35,    35,    35,    35,    35,
      30,    33,    35,    34,     3,    31,    43,    30,    35,     8,
      34,     3,    31,    43,    30,    35,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    38,    39,
      39,    39,    39,    39,    40,    40,    40,    40,    40,    40,
      41,    41,    41,    42,    42,    42,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    44,    44
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     3,    17,
      10,    30,    15,     9,    15,    15,    15,    15,    15,    15,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 53 "var.y" /* yacc.c:1646  */
    {exit(0);}
#line 1462 "var.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 54 "var.y" /* yacc.c:1646  */
    { printf("Printing: %d\n",(yyvsp[-1].no)); fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); }
#line 1468 "var.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "var.y" /* yacc.c:1646  */
    {;}
#line 1474 "var.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "var.y" /* yacc.c:1646  */
    { {printf("Printing: %d \n",(yyvsp[-1].no));} fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); ; }
#line 1480 "var.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "var.y" /* yacc.c:1646  */
    {;}
#line 1486 "var.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "var.y" /* yacc.c:1646  */
    {exit(EXIT_SUCCESS);}
#line 1492 "var.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1498 "var.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1504 "var.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "var.y" /* yacc.c:1646  */
    {;}
#line 1510 "var.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "var.y" /* yacc.c:1646  */
    {;}
#line 1516 "var.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 63 "var.y" /* yacc.c:1646  */
    {;}
#line 1522 "var.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "var.y" /* yacc.c:1646  */
    {;}
#line 1528 "var.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 65 "var.y" /* yacc.c:1646  */
    {;}
#line 1534 "var.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "var.y" /* yacc.c:1646  */
    {;}
#line 1540 "var.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "var.y" /* yacc.c:1646  */
    {;}
#line 1546 "var.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "var.y" /* yacc.c:1646  */
    {;}
#line 1552 "var.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "var.y" /* yacc.c:1646  */
    { {installid((yyvsp[-2].var),(yyvsp[0].no));} fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[0],(yyvsp[0].no),(yyvsp[-2].var),reg[0]); ; }
#line 1558 "var.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-14].no)>0){installid((yyvsp[-11].var),(yyvsp[-9].no));}else{installid((yyvsp[-4].var),(yyvsp[-2].no));}
	fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-9].no),(yyvsp[-11].var),reg[1],reg[2],(yyvsp[-2].no),(yyvsp[-4].var),reg[2]); ;}
#line 1565 "var.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-7].no)>0){installid((yyvsp[-4].var),(yyvsp[-2].no));}
fprintf(yyout,"if nz %s;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-2].no),(yyvsp[-4].var),reg[1]); ;}
#line 1572 "var.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 80 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-27].no)>0){installid((yyvsp[-24].var),(yyvsp[-22].no));}else{ if((yyvsp[-15].no)>0){installid((yyvsp[-12].var),(yyvsp[-10].no));}else{ installid((yyvsp[-5].var),(yyvsp[-3].no));} }
fprintf(yyout, "if z %s goto _MAINELSE; \n%s := %d;\n%s := %s;\n\n _MAINELSE : else;\n if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n;",reg[0],reg[1],(yyvsp[-22].no),(yyvsp[-24].var),reg[1],reg[2],reg[3],(yyvsp[-10].no),(yyvsp[-12].var),reg[3],reg[4],(yyvsp[-3].no),(yyvsp[-5].var),reg[4]); ; }
#line 1579 "var.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-12].no)>0){printf("Printing: %d\n",(yyvsp[-8].no));}else{printf("Printing: %d\n",(yyvsp[-2].no));}
fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\nprint %s;\n_LABEL : else;\n%s := %d;\nprint %s;\n\n",reg[0],reg[1],(yyvsp[-8].no),reg[1],reg[2],(yyvsp[-2].no),reg[2]);; }
#line 1586 "var.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "var.y" /* yacc.c:1646  */
    {if((yyvsp[-6].no)>0){printf("Printing: %d\n",(yyvsp[-2].no)); }
fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-2].no),reg[1]) ; }
#line 1593 "var.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "var.y" /* yacc.c:1646  */
    { while((yyvsp[-12].no)<(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)+1;}
			  fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1600 "var.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 96 "var.y" /* yacc.c:1646  */
    { while((yyvsp[-12].no)>(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1607 "var.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 99 "var.y" /* yacc.c:1646  */
    { while((yyvsp[-12].no)<(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)+1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1614 "var.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "var.y" /* yacc.c:1646  */
    {while((yyvsp[-12].no)>(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1621 "var.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "var.y" /* yacc.c:1646  */
    {while((yyvsp[-12].no)!=(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1628 "var.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 108 "var.y" /* yacc.c:1646  */
    {while((yyvsp[-12].no)!=(yyvsp[-10].no)){printf("Printing: %d\n",(yyvsp[-12].no));(yyvsp[-12].no)=(yyvsp[-12].no)+1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-12].no),reg[1]) ; }
#line 1635 "var.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "var.y" /* yacc.c:1646  */
    { {installid((yyvsp[-3].var),(yyvsp[-1].no));}fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[2],(yyvsp[-1].no),(yyvsp[-3].var),reg[2]); }
#line 1641 "var.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "var.y" /* yacc.c:1646  */
    { (yyval.no) = factorial((yyvsp[-1].no)); }
#line 1647 "var.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "var.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no)*(yyvsp[-1].no);}
#line 1653 "var.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 125 "var.y" /* yacc.c:1646  */
    { {installid((yyvsp[-3].var),(yyvsp[-1].no));}
												fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[4],(yyvsp[-1].no),(yyvsp[-3].var),reg[4]); }
#line 1660 "var.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 128 "var.y" /* yacc.c:1646  */
    { (yyval.no) = cel_to_fah((yyvsp[-1].no)); }
#line 1666 "var.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "var.y" /* yacc.c:1646  */
    { (yyval.no) = fah_to_cel((yyvsp[-1].no)); }
#line 1672 "var.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "var.y" /* yacc.c:1646  */
    { (yyval.no) = m_to_km((yyvsp[-1].no)); }
#line 1678 "var.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 134 "var.y" /* yacc.c:1646  */
    { (yyval.no) = km_to_m((yyvsp[-1].no)); }
#line 1684 "var.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[0].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$1);*/ ; }
#line 1690 "var.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 143 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) + (yyvsp[0].no);} /*fprintf(yyout,"%s := %d + %d;\n ",reg[0],$1,$3);*/ ; }
#line 1696 "var.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) - (yyvsp[0].no);} /*fprintf(yyout,"%s := %d - %d;\n ",reg[0],$1,$3);*/ ; }
#line 1702 "var.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) * (yyvsp[0].no);} /*fprintf(yyout,"%s := %d * %d;\n ",reg[0],$1,$3);*/ ; }
#line 1708 "var.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) / (yyvsp[0].no);} /*fprintf(yyout,"%s := %d / %d;\n ",reg[0],$1,$3);*/ ; }
#line 1714 "var.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "var.y" /* yacc.c:1646  */
    { {(yyval.no)= (yyvsp[-2].no) % (yyvsp[0].no);}}
#line 1720 "var.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 148 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),1);} /*fprintf(yyout,"%s := %c > %d;\n ",reg[0],$1,$3); */;}
#line 1726 "var.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 149 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),2);} /*fprintf(yyout,"%s := %c < %d;\n ",reg[0],$1,$3); */;}
#line 1732 "var.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),3);} /*fprintf(yyout,"%s := %c eq %d;\n ",reg[0],$1,$3); */;}
#line 1738 "var.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),4);} /*fprintf(yyout,"%s := %c neq %d;\n ",reg[0],$1,$3); */;}
#line 1744 "var.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),5);} /*fprintf(yyout,"%s := %c ge %d;\n ",reg[0],$1,$3); */;}
#line 1750 "var.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),6);} /*fprintf(yyout,"%s := %c le %d;\n ",reg[0],$1,$3); */;}
#line 1756 "var.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-1].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$2); */;}
#line 1762 "var.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),7);} /*fprintf(yyout,"%s := %c and %d;\n ",reg[0],$1,$3);*/ ;}
#line 1768 "var.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 156 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),8);} /*fprintf(yyout,"%s := %c or %d;\n ",reg[0],$1,$3);*/ ;}
#line 1774 "var.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 161 "var.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1780 "var.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 162 "var.y" /* yacc.c:1646  */
    {(yyval.no)=getid((yyvsp[0].var));}
#line 1786 "var.tab.c" /* yacc.c:1646  */
    break;


#line 1790 "var.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 166 "var.y" /* yacc.c:1906  */


int relop(int a , int b ,int op)
{
		switch(op)
		{
				case 1:if(a>b){return 1;} else{return 0;} break;
				case 2:if(a<b){return 1;} else{return 0;} break;
				case 3:if(a==b){return 1;} else{return 0;} break;
				case 4:if(a!=b){return 1;} else{return 0;} break;
				case 5:if(a>=b){return 1;} else{return 0;} break;
				case 6:if(a<=b){return 1;} else{return 0;} break;
				case 7:if(a>0 && b>0 ){return 1;}else{return 0;}break;
				case 8:if(a>0 || b>0 ){return 1;}else{return 0;}break;
		}
}

void dis()
{
	int i;
	printf("Index\tVar\tVal\n");
	for(i=0;i<53;i++)
	{
			 if(symbol[i].val!=-101)
			 printf("%d\t%s\t%d\n",i,symbol[i].name,symbol[i].val);
	}
}

void installid(char str[],int n)
{
		int index,i;
		index=str[0]%53;
		i=index;
		if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
		{
				symbol[index].val=n;
				strcpy(symbol[index].name,str);
		}
		else
		{
				i=(i+1)%53;
				while(i!=index)
				{
						if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
						{
							symbol[i].val=n;
							strcpy(symbol[i].name,str);
							break;
						}
						i=(i+1)%53;
				}
		}
}


int getid(char str[])
{
		int index,i;
		index=str[0]%53;
		i=index;
		if(strcmp(str,symbol[index].name)==0)
		{
				return(symbol[index].val);
		}
		else
		{
			i=(i+1)%53;
		 	while(i!=index)
			{
					if(strcmp(str,symbol[i].name)==0)
					{
						return (symbol[i].val);
						break;
					}
					i=(i+1)%53;
			}
			if(i==index)
			{
					printf("Not initialised.\n");
			}
		}
}

/* Function to convert celsius to fahrenheit */
int cel_to_fah(int cel)
{
		return cel * 9 / 5 + 32;
}
/* Function to convert fahrenheit to celsius */
int fah_to_cel(int fah)
{
		return (fah - 32) * 5 / 9;
}
/* Function to convert kilometers to miles*/
int km_to_m(int km)
{
		return km * 0.62137;
}
/* Function to convert miles to kilometers */
int m_to_km(int m)
{
	return m / 0.62137;
}

/* Function to calculate factorial of a number */
int factorial(int n)
{
	int x; int f=1;
	for (x=1; x<=n; x++) {
		f *= x;
	}
	return f;
}

void yyerror (char *s)
{
		fprintf(stderr,"Error at line %d in %s ",yylineno,s);
}

int main(int argc[],char* argv[])
{
		int i;
		for(i=0;i<53;i++)
		{
				symbol[i].val=-101;
		}
		yyout = fopen("output.txt","a");
		return yyparse();
}
