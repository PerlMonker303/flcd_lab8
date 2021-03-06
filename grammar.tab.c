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
#line 1 "grammar.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <string.h>
	extern FILE *yyin;
	extern char *yytext;
	extern int yylineno;

	char stringOfProd[1000][3];
	int c = 0;

#line 77 "grammar.tab.c" /* yacc.c:339  */

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
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    START = 258,
    FINISH = 259,
    DEF = 260,
    NUMBER = 261,
    STRING = 262,
    CHAR = 263,
    ARRAY = 264,
    OF = 265,
    UNDEFINED = 266,
    READ = 267,
    IF = 268,
    STARTIF = 269,
    FINISHIF = 270,
    ASSIGN = 271,
    WHILE = 272,
    STARTWHILE = 273,
    FINISHWHILE = 274,
    PROC = 275,
    STARTPROC = 276,
    FINISHPROC = 277,
    CALL = 278,
    RETURN = 279,
    PRINT = 280,
    id = 281,
    constant = 282,
    NEGPOSDIGIT = 283,
    ERRORNUMCONST = 284,
    OP_PLUS = 285,
    OP_MINUS = 286,
    OP_MUL = 287,
    OP_DIV = 288,
    OP_LT = 289,
    OP_LTE = 290,
    OP_EQ = 291,
    OP_NEQ = 292,
    OP_RT = 293,
    OP_RTE = 294,
    OP_OR = 295,
    OP_AND = 296,
    SEP_SEMICOL = 297,
    SEP_COM = 298,
    SEP_COL = 299,
    SEP_SQBR = 300,
    SEP_SQBREND = 301,
    SEP_RBR = 302,
    SEP_RBREND = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "grammar.y" /* yacc.c:355  */

	char varname[26];
	struct attributes
	{
		char varn[20];
	} attrib;

#line 174 "grammar.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    32,    34,    35,    37,    38,    40,    41,
      42,    43,    44,    46,    48,    50,    51,    53,    55,    56,
      58,    59,    60,    62,    64,    65,    67,    69,    70,    71,
      73,    74,    75,    77,    78,    80,    81,    83,    85,    86,
      87,    89,    91,    92,    93,    95,    96,    98,   100,   101,
     103,   105,   107,   108,   110,   111,   112,   114,   116,   117,
     119,   120,   121,   122,   124,   126,   128,   129,   131,   133,
     134,   136,   137,   138,   139,   140,   141,   143,   144,   146,
     148,   150,   151,   153,   155,   156,   158,   159
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "FINISH", "DEF", "NUMBER",
  "STRING", "CHAR", "ARRAY", "OF", "UNDEFINED", "READ", "IF", "STARTIF",
  "FINISHIF", "ASSIGN", "WHILE", "STARTWHILE", "FINISHWHILE", "PROC",
  "STARTPROC", "FINISHPROC", "CALL", "RETURN", "PRINT", "id", "constant",
  "NEGPOSDIGIT", "ERRORNUMCONST", "OP_PLUS", "OP_MINUS", "OP_MUL",
  "OP_DIV", "OP_LT", "OP_LTE", "OP_EQ", "OP_NEQ", "OP_RT", "OP_RTE",
  "OP_OR", "OP_AND", "SEP_SEMICOL", "SEP_COM", "SEP_COL", "SEP_SQBR",
  "SEP_SQBREND", "SEP_RBR", "SEP_RBREND", "$accept", "program", "cmds",
  "cmdsconf", "cmd", "simplecmd", "defcmd", "declist", "declistconf",
  "declaration", "dtype", "primitive", "arraydecl", "arraydeclconf",
  "assigncmd", "assigncmdconf", "symbolvalue", "symbolvalueid",
  "symbolvalueconf", "expressionstart", "expression", "term", "muldiv",
  "factor", "readcmd", "readcmdconf", "printcmd", "expressionprint",
  "expressionprintconf", "factorprint", "returncmd", "returncmdconf",
  "structcmd", "ifstmt", "condition", "conditionconf", "basiccondition",
  "basicconditionconf", "comparisonoperator", "logicaloperator",
  "whilestmt", "procstmt", "procstmtconf", "callstmt", "paramslist",
  "paramslistconf", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       5,    34,    11,     3,     8,    22,    30,    22,    36,    40,
     -14,   -32,    19,    34,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,    24,   -61,    18,    -4,
      39,   -61,    26,    38,    86,    23,    57,    84,    56,    58,
     -10,   -61,   -61,    52,    53,   -61,   -61,     1,   -61,   -61,
     -61,    72,     3,   -61,    26,   -61,    26,   -61,    60,    62,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,    -1,    34,   -61,
     -61,   -61,    22,    -5,    34,   -12,   -10,    59,   -10,   -10,
     -61,   -10,   -10,   -61,   -61,   -61,    63,    74,   -61,   -61,
     -61,   -61,    64,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,    95,   -61,   -61,   -10,   -61,   -61,
      93,    96,    66,   -61,    73,    70,   -61,    52,    52,    53,
      53,   -61,     1,   -61,    61,   -61,    71,   -61,    34,    99,
     -10,   -61,   -61,   -61,   -61,   -61,   -61,   -61,    75,    76,
     -61,   -61,   101,    34,   -61,   114,   115,   -61,   104,    12,
      12,   -61,   -61,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     6,     8,     9,    10,    11,    12,
       7,    60,    61,    62,    63,     1,     0,    13,    15,    48,
      33,    31,     0,     0,     0,    66,     0,     0,     0,     0,
       0,    46,    58,    40,    44,    57,    59,     0,     2,     5,
       3,     0,     0,    14,     0,    47,     0,    30,     0,     0,
      32,    71,    73,    75,    76,    72,    74,     0,     0,    78,
      77,    65,     0,     0,     0,     0,    85,     0,     0,     0,
      37,     0,     0,    41,    54,    55,     0,    52,    56,    20,
      21,    22,     0,    17,    18,    19,    16,    49,    34,    35,
      36,    70,    69,    68,     0,    67,    29,     0,    26,    27,
       0,     0,     0,    80,    86,     0,    45,    40,    40,    44,
      44,    50,     0,    51,     0,    64,     0,    79,     0,     0,
      85,    84,    83,    38,    39,    42,    43,    53,     0,     0,
      23,    28,     0,     0,    87,     0,     0,    81,     0,     0,
       0,    82,    25,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -13,   -61,   -61,   -61,   -61,   -45,   -61,   -61,
     -61,   -60,   -61,   -61,   -61,   -61,    -2,   -61,   -11,    -8,
     -26,    15,   -24,    16,   -61,   -61,   -61,     6,   -61,   -61,
     -61,   -61,   -61,   -61,    -3,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,    -9,     2,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    12,    50,    13,    14,    15,    27,    53,    28,
      93,    94,    95,   140,    16,   108,    41,    57,    60,   114,
      80,    43,    83,    44,    17,    55,    18,    86,   123,    87,
      19,    45,    20,    21,    34,    71,    35,   103,    67,    72,
      22,    23,   113,    24,   115,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,    46,    42,    33,    37,    33,   106,    96,     1,     9,
     101,    25,    30,    31,    26,    47,    30,    31,    89,    90,
      91,    30,    31,    48,     9,    30,    31,    84,    85,    26,
     112,    32,    77,    40,    29,    32,   111,    40,    88,     3,
      32,    54,   107,    97,    32,    98,     4,     5,    30,    31,
       6,     7,    58,    59,     8,   104,    36,     9,    10,    11,
      52,   110,    38,    69,    70,   102,    39,    32,    51,   105,
      33,   109,    61,    62,    63,    64,    65,    66,    89,    90,
      91,    92,    78,    79,    56,    81,    82,   138,   139,   152,
     153,   133,   134,   117,   118,   135,   136,   119,   120,   126,
      68,    73,    74,    75,   122,    76,    99,   116,   100,   124,
     125,   121,   127,    88,   129,   142,   130,   128,   132,   141,
     143,   145,   146,   147,   149,   150,   151,     0,   137,     0,
     148,     0,   144
};

static const yytype_int16 yycheck[] =
{
      13,    10,    10,     5,     7,     7,    11,    52,     3,    23,
      11,     0,    26,    27,    26,    47,    26,    27,     6,     7,
       8,    26,    27,     4,    23,    26,    27,    26,    27,    26,
      75,    45,    40,    47,    26,    45,    48,    47,    47,     5,
      45,    45,    47,    54,    45,    56,    12,    13,    26,    27,
      16,    17,    26,    27,    20,    68,    26,    23,    24,    25,
      42,    74,    26,    40,    41,    67,    26,    45,    44,    72,
      72,    73,    34,    35,    36,    37,    38,    39,     6,     7,
       8,     9,    30,    31,    45,    32,    33,    26,    27,   149,
     150,   117,   118,    78,    79,   119,   120,    81,    82,   107,
      14,    44,    18,    47,    30,    47,    46,    48,    46,    45,
      15,    48,    19,   122,    48,   128,    43,    21,    48,    48,
      21,    46,    46,    22,    10,    10,    22,    -1,   122,    -1,
     143,    -1,   130
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,     5,    12,    13,    16,    17,    20,    23,
      24,    25,    51,    53,    54,    55,    63,    73,    75,    79,
      81,    82,    89,    90,    92,     0,    26,    56,    58,    26,
      26,    27,    45,    65,    83,    85,    26,    83,    26,    26,
      47,    65,    68,    70,    72,    80,    92,    47,     4,    51,
      52,    44,    42,    57,    45,    74,    45,    66,    26,    27,
      67,    34,    35,    36,    37,    38,    39,    87,    14,    40,
      41,    84,    88,    44,    18,    47,    47,    68,    30,    31,
      69,    32,    33,    71,    26,    27,    76,    78,    92,     6,
       7,     8,     9,    59,    60,    61,    56,    67,    67,    46,
      46,    11,    65,    86,    51,    83,    11,    47,    64,    65,
      51,    48,    56,    91,    68,    93,    48,    70,    70,    72,
      72,    48,    30,    77,    45,    15,    68,    19,    21,    48,
      43,    94,    48,    69,    69,    71,    71,    76,    26,    27,
      62,    48,    51,    21,    93,    46,    46,    22,    51,    10,
      10,    22,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    55,    56,    57,    57,    58,    59,    59,
      60,    60,    60,    61,    62,    62,    63,    64,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    68,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    76,    77,    77,    78,    78,    78,    79,    80,    80,
      81,    81,    81,    81,    82,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      90,    91,    91,    92,    93,    93,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     2,     3,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     1,     3,     1,
       2,     1,     2,     0,     2,     2,     2,     2,     3,     3,
       0,     2,     3,     3,     0,     3,     1,     3,     0,     2,
       4,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     5,     2,     0,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     4,     5,     5,     2,     0,     0,     2
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
#line 30 "grammar.y" /* yacc.c:1646  */
    { char t[3]="0\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1384 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "grammar.y" /* yacc.c:1646  */
    { char t[3]="1\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1390 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "grammar.y" /* yacc.c:1646  */
    { char t[3]="2\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1396 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "grammar.y" /* yacc.c:1646  */
    { char t[3]="3\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1402 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "grammar.y" /* yacc.c:1646  */
    { char t[3]="4\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1408 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "grammar.y" /* yacc.c:1646  */
    { char t[3]="5\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1414 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 40 "grammar.y" /* yacc.c:1646  */
    { char t[3]="6\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1420 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "grammar.y" /* yacc.c:1646  */
    { char t[3]="7\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1426 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "grammar.y" /* yacc.c:1646  */
    { char t[3]="8\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1432 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "grammar.y" /* yacc.c:1646  */
    { char t[3]="9\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1438 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "grammar.y" /* yacc.c:1646  */
    { char t[3]="10\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1444 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 46 "grammar.y" /* yacc.c:1646  */
    { char t[3]="11\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1450 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "grammar.y" /* yacc.c:1646  */
    { char t[3]="12\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1456 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "grammar.y" /* yacc.c:1646  */
    { char t[3]="13\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1462 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "grammar.y" /* yacc.c:1646  */
    { char t[3]="14\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1468 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "grammar.y" /* yacc.c:1646  */
    { char t[3]="15\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1474 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 55 "grammar.y" /* yacc.c:1646  */
    { char t[3]="16\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1480 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "grammar.y" /* yacc.c:1646  */
    { char t[3]="17\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1486 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 58 "grammar.y" /* yacc.c:1646  */
    { char t[3]="18\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1492 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 59 "grammar.y" /* yacc.c:1646  */
    { char t[3]="19\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1498 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "grammar.y" /* yacc.c:1646  */
    { char t[3]="20\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1504 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 62 "grammar.y" /* yacc.c:1646  */
    { char t[3]="21\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1510 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "grammar.y" /* yacc.c:1646  */
    { char t[3]="22\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1516 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 65 "grammar.y" /* yacc.c:1646  */
    { char t[3]="23\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1522 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 67 "grammar.y" /* yacc.c:1646  */
    { char t[3]="24\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1528 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "grammar.y" /* yacc.c:1646  */
    { char t[3]="25\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1534 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 70 "grammar.y" /* yacc.c:1646  */
    { char t[3]="26\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1540 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 71 "grammar.y" /* yacc.c:1646  */
    { char t[3]="27\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1546 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "grammar.y" /* yacc.c:1646  */
    { char t[3]="28\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1552 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 74 "grammar.y" /* yacc.c:1646  */
    { char t[3]="29\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1558 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 75 "grammar.y" /* yacc.c:1646  */
    { char t[3]="30\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1564 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 77 "grammar.y" /* yacc.c:1646  */
    { char t[3]="31\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1570 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 78 "grammar.y" /* yacc.c:1646  */
    { char t[3]="32\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1576 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 80 "grammar.y" /* yacc.c:1646  */
    { char t[3]="33\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1582 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 81 "grammar.y" /* yacc.c:1646  */
    { char t[3]="34\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1588 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 83 "grammar.y" /* yacc.c:1646  */
    { char t[3]="35\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1594 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 85 "grammar.y" /* yacc.c:1646  */
    { char t[3]="36\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1600 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 86 "grammar.y" /* yacc.c:1646  */
    { char t[3]="37\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1606 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 87 "grammar.y" /* yacc.c:1646  */
    { char t[3]="38\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1612 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 89 "grammar.y" /* yacc.c:1646  */
    { char t[3]="39\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1618 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 91 "grammar.y" /* yacc.c:1646  */
    { char t[3]="40\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1624 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 92 "grammar.y" /* yacc.c:1646  */
    { char t[3]="41\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1630 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 93 "grammar.y" /* yacc.c:1646  */
    { char t[3]="42\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1636 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 95 "grammar.y" /* yacc.c:1646  */
    { char t[3]="43\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1642 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 96 "grammar.y" /* yacc.c:1646  */
    { char t[3]="44\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1648 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 98 "grammar.y" /* yacc.c:1646  */
    { char t[3]="45\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1654 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 100 "grammar.y" /* yacc.c:1646  */
    { char t[3]="46\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1660 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 101 "grammar.y" /* yacc.c:1646  */
    { char t[3]="47\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1666 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 103 "grammar.y" /* yacc.c:1646  */
    { char t[3]="48\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1672 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 105 "grammar.y" /* yacc.c:1646  */
    { char t[3]="49\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1678 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 107 "grammar.y" /* yacc.c:1646  */
    { char t[3]="50\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1684 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 108 "grammar.y" /* yacc.c:1646  */
    { char t[3]="51\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1690 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 110 "grammar.y" /* yacc.c:1646  */
    { char t[3]="52\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1696 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 111 "grammar.y" /* yacc.c:1646  */
    { char t[3]="53\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1702 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 112 "grammar.y" /* yacc.c:1646  */
    { char t[3]="54\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1708 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 114 "grammar.y" /* yacc.c:1646  */
    { char t[3]="55\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1714 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 116 "grammar.y" /* yacc.c:1646  */
    { char t[3]="56\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1720 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 117 "grammar.y" /* yacc.c:1646  */
    { char t[3]="57\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1726 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 119 "grammar.y" /* yacc.c:1646  */
    { char t[3]="58\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1732 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 120 "grammar.y" /* yacc.c:1646  */
    { char t[3]="59\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1738 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 121 "grammar.y" /* yacc.c:1646  */
    { char t[3]="60\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1744 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 122 "grammar.y" /* yacc.c:1646  */
    { char t[3]="61\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1750 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 124 "grammar.y" /* yacc.c:1646  */
    { char t[3]="62\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1756 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 126 "grammar.y" /* yacc.c:1646  */
    { char t[3]="63\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1762 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 128 "grammar.y" /* yacc.c:1646  */
    { char t[3]="64\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1768 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 129 "grammar.y" /* yacc.c:1646  */
    { char t[3]="65\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1774 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 131 "grammar.y" /* yacc.c:1646  */
    { char t[3]="66\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1780 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 133 "grammar.y" /* yacc.c:1646  */
    { char t[3]="67\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1786 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 134 "grammar.y" /* yacc.c:1646  */
    { char t[3]="68\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1792 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 136 "grammar.y" /* yacc.c:1646  */
    { char t[3]="69\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1798 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 137 "grammar.y" /* yacc.c:1646  */
    { char t[3]="70\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1804 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 138 "grammar.y" /* yacc.c:1646  */
    { char t[3]="71\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1810 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 139 "grammar.y" /* yacc.c:1646  */
    { char t[3]="72\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1816 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 140 "grammar.y" /* yacc.c:1646  */
    { char t[3]="73\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1822 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 141 "grammar.y" /* yacc.c:1646  */
    { char t[3]="74\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1828 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 143 "grammar.y" /* yacc.c:1646  */
    { char t[3]="75\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1834 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 144 "grammar.y" /* yacc.c:1646  */
    { char t[3]="76\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1840 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 146 "grammar.y" /* yacc.c:1646  */
    { char t[3]="77\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1846 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 148 "grammar.y" /* yacc.c:1646  */
    { char t[3]="78\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1852 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 150 "grammar.y" /* yacc.c:1646  */
    { char t[3]="79\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1858 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 151 "grammar.y" /* yacc.c:1646  */
    { char t[3]="80\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1864 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 153 "grammar.y" /* yacc.c:1646  */
    { char t[3]="81\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1870 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 155 "grammar.y" /* yacc.c:1646  */
    { char t[3]="82\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1876 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 156 "grammar.y" /* yacc.c:1646  */
    { char t[3]="83\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1882 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 158 "grammar.y" /* yacc.c:1646  */
    { char t[3]="84\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1888 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 159 "grammar.y" /* yacc.c:1646  */
    { char t[3]="85\0";strcpy(stringOfProd[c],t);c+=1;}
#line 1894 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 1898 "grammar.tab.c" /* yacc.c:1646  */
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
#line 161 "grammar.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
	if (argc == 2) {
		yyin = fopen(argv[1], "r");
		yyparse();
	}
	else{
		printf("No input file given!\n");
	}
  	if(0==yyparse()) printf("Result yyparse OK");
}

void reverseString(){
	char aux[3];
	for(int i=0;i<c / 2;i++){
		strcpy(aux, stringOfProd[i]);
		strcpy(stringOfProd[i], stringOfProd[c-i-1]);
		strcpy(stringOfProd[c-i-1], aux);
	}
}

int yyerror(char *s)
{
	printf("String of productions: \n");
	reverseString(stringOfProd);
	for(int i=0;i<c;i++){
		printf("%s ", stringOfProd[i]);
	}
	printf("\n");
    printf("Error on line #%d\n", yylineno);
    printf("Unexpected token: '%s'\n", yytext);
    return 0;
}
