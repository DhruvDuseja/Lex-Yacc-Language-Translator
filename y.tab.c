/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "project.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int expn_type = -1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tabs = 0;
	char loop_var[30];
	int array_dims[2];
	struct symbol_table{char var_name[30]; int type;} sym_table[20];
	extern int lookup_in_table(char var[30]);
	extern void insert_to_table(char var[30], int type);
	extern void indent();
	char var_list[20][30];
	int string_or_var[20];
	extern int *yytext;

#line 94 "y.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 250 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

#define YYUNDEFTOK  2
#define YYMAXUTOK   308

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    49,    52,    52,    54,    67,    91,    67,
      93,   120,   120,   130,   130,   157,   158,   159,   159,   159,
     160,   160,   160,   161,   161,   161,   162,   162,   163,   164,
     164,   165,   166,   162,   168,   169,   171,   171,   171,   173,
     173,   174,   174,   174,   176,   176,   178,   178,   179,   181,
     181,   182,   182,   201,   202,   221,   222,   224,   228,   232,
     236,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     257,   275
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "PROC", "MAIN", "BEGN",
  "COLON", "END", "VAR_DECL", "INT", "CHAR", "FLOAT", "DOUBLE", "WRITE",
  "READ", "FOR", "TO", "OF", "DO", "ENDFOR", "IF", "ELSEIF", "ELSE",
  "ENDIF", "GOTO", "REPEAT", "UNTIL", "WHILE", "ENDWHILE", "ARROW", "LB",
  "RB", "SC", "COMA", "ASSIGNMENT", "LAND", "LOR", "GEQ", "LEQ", "GT",
  "LT", "NEQ", "DEQ", "PLUS", "MINUS", "MUL", "DIV", "MOD", "NOT", "TEXT",
  "VAR", "NUMBER", "ARRAY", "$accept", "prm", "$@1", "PROG_STATEMENTS",
  "PROG_STATEMENT", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "IF_BLOCK", "$@19", "$@20", "ELSEIF_BLOCKS", "ELSEIF_BLOCK", "$@21",
  "$@22", "ELSE_BLOCK", "$@23", "TO_READ", "$@24", "TO_WRITE", "$@25",
  "$@26", "VAR_LIST", "DATA_TYPE", "A_EXPN", "$@27", "$@28", "$@29",
  "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37", "$@38",
  "$@39", "$@40", "TERMINAL", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -74

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-74)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    10,    17,    -6,   -74,    11,    36,    40,   -74,   -74,
      -2,   -74,    45,     2,    24,    25,    27,    28,   -74,   -74,
      30,    55,   -74,    39,   -74,    34,    62,   -74,    19,   -74,
     -74,    23,   -74,   -74,   -74,    43,   -74,   -13,     2,    20,
     -30,    49,    52,    32,    -1,   -74,    13,    -1,   -74,   -74,
     -74,   -74,    47,   -74,   -74,   -74,   -74,   -74,   -74,    42,
      53,    68,    69,    70,    72,   -74,   -74,   -74,   -74,   117,
     -74,    73,    76,   136,    -1,    -1,   -74,   -74,    90,   -74,
      77,   -30,    79,    19,   -74,    80,    -1,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   186,   153,   120,    -8,   -30,   -74,
     -74,   -74,   -74,   -74,   -74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
     -74,   -74,    84,   -74,   -15,   120,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   170,
     -74,   120,   -74,   -74,   -74,    51,   -74,   102,   -74,   -74,
      -1,   199,    92,   103,   -74,   -74,   100,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     5,
       0,    35,     0,     0,     0,     0,     0,     0,    17,    23,
       0,     7,     4,    40,     3,    56,     0,    11,     0,    26,
      36,     0,     5,    20,    34,     0,    15,     0,     0,     0,
       0,    46,     0,     0,     0,    18,     0,     0,     8,    41,
      44,    39,     0,    55,    57,    58,    59,    60,    13,     0,
      49,    51,     0,     0,     0,    27,    71,    90,    91,     0,
      89,     0,     0,     0,     0,     0,     5,    16,     0,     6,
       0,     0,     0,     0,    10,     0,     0,    37,    73,    75,
      79,    77,    81,    83,    87,    85,    61,    63,    65,    67,
      69,    19,    24,    21,     0,     0,    45,     0,     0,    52,
      12,    47,    28,    72,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    42,     0,    50,     0,    38,    74,    76,    80,    78,
      82,    84,    88,    86,    62,    64,    66,    68,    70,     0,
       5,     0,    14,    29,    25,     0,    43,     0,    22,    30,
       0,    31,     0,     0,    32,     5,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,   -32,   -24,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    54,   -74,   -73,   -74,   -74,   101,    31,   -29,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,    -4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    22,    35,    74,    40,    78,    31,
      71,    47,   129,    32,   128,    43,    85,   134,   157,   160,
     162,   165,    23,    44,   114,    37,    51,    75,   151,    52,
      76,    42,    63,    62,    80,    81,    26,    59,    69,   123,
     124,   125,   126,   127,    86,   115,   116,   118,   117,   119,
     120,   122,   121,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    11,    54,    55,    56,    57,    12,    13,   109,    49,
      50,     1,    14,    15,    16,     3,    11,     4,    73,    17,
      60,    61,    13,    18,    19,     5,    20,    14,    15,    16,
      54,    55,    56,    57,    17,   133,    67,    68,    18,    19,
      72,    20,     7,     6,   106,   104,   105,     8,    66,    21,
      67,    68,    24,    25,    11,    27,    28,   113,    29,    30,
      13,    33,    34,    36,    21,    14,    15,    16,    38,    39,
      41,    77,    17,    58,    45,    79,    18,    19,    48,    20,
     158,   -48,   135,    65,    64,   -53,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     -54,    82,    21,    11,    83,    84,   101,   102,   107,    13,
     112,   108,   110,   150,    14,    15,    16,   152,   155,   159,
     167,    17,   164,    11,   163,    18,    19,   156,    20,    13,
     153,   161,     0,   166,    14,    15,    16,   111,   132,    53,
       0,    17,     0,     0,     0,    18,    19,     0,    20,    87,
       0,    21,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,   103,     0,
       0,    21,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   131,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   154,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   130,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
      32,     3,    10,    11,    12,    13,     8,     9,    81,    22,
      23,     4,    14,    15,    16,     5,     3,     0,    47,    21,
      50,    51,     9,    25,    26,    31,    28,    14,    15,    16,
      10,    11,    12,    13,    21,   108,    51,    52,    25,    26,
      27,    28,     6,    32,    76,    74,    75,     7,    49,    51,
      51,    52,     7,    51,     3,    31,    31,    86,    31,    31,
       9,    31,     7,    24,    51,    14,    15,    16,    34,     7,
      51,    24,    21,    53,    51,    33,    25,    26,    35,    28,
      29,    32,   114,    51,    32,    32,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      32,    32,    51,     3,    34,    33,    33,    31,    18,     9,
      30,    34,    33,    19,    14,    15,    16,    33,   150,    17,
      20,    21,    19,     3,    32,    25,    26,   151,    28,     9,
     134,   160,    -1,   165,    14,    15,    16,    83,   107,    38,
      -1,    21,    -1,    -1,    -1,    25,    26,    -1,    28,    32,
      -1,    51,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    32,    -1,
      -1,    51,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    55,     5,     0,    31,    32,     6,     7,    56,
      57,     3,     8,     9,    14,    15,    16,    21,    25,    26,
      28,    51,    58,    76,     7,    51,    90,    31,    31,    31,
      31,    63,    67,    31,     7,    59,    24,    79,    34,     7,
      61,    51,    85,    69,    77,    51,    57,    65,    35,    22,
      23,    80,    83,    90,    10,    11,    12,    13,    53,    91,
      50,    51,    87,    86,    32,    51,    49,    51,    52,    92,
     107,    64,    27,    92,    60,    81,    84,    24,    62,    33,
      88,    89,    32,    34,    33,    70,    98,    32,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    33,    31,    32,    92,    92,    57,    18,    34,    87,
      33,    85,    30,    92,    78,    99,   100,   102,   101,   103,
     104,   106,   105,    93,    94,    95,    96,    97,    68,    66,
      33,    32,    91,    87,    71,    57,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      19,    82,    33,   107,    32,    57,    58,    72,    29,    17,
      73,    92,    74,    32,    19,    75,    57,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    55,    57,    57,    58,    59,    60,    58,
      58,    61,    58,    62,    58,    58,    58,    63,    64,    58,
      65,    66,    58,    67,    68,    58,    69,    70,    71,    72,
      73,    74,    75,    58,    58,    58,    77,    78,    76,    79,
      79,    81,    82,    80,    84,    83,    86,    85,    85,    88,
      87,    89,    87,    87,    87,    90,    90,    91,    91,    91,
      91,    93,    92,    94,    92,    95,    92,    96,    92,    97,
      92,    98,    92,    99,    92,   100,    92,   101,    92,   102,
      92,   103,    92,   104,    92,   105,    92,   106,    92,    92,
     107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    10,     2,     0,     5,     0,     0,     6,
       5,     0,     6,     0,     8,     2,     4,     0,     0,     5,
       0,     0,     9,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,    18,     2,     1,     0,     0,     7,     2,
       0,     0,     0,     6,     0,     3,     0,     4,     1,     0,
       4,     0,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     3,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 49 "project.y"
    { printf("#include<stdio.h>\nint main()\n{\n");  }
#line 1486 "y.tab.c"
    break;

  case 3:
#line 50 "project.y"
    { printf("\n}"); }
#line 1492 "y.tab.c"
    break;

  case 6:
#line 54 "project.y"
    {
                if(current_data_type == 0) { printf("int "); }
                else if(current_data_type == 1) { printf("char "); }
                else if(current_data_type == 2) { printf("float "); }
                else if(current_data_type == 3) { printf("double "); }

                for(int i=0; i<idx-1; i++)
                {
                    printf("%s, ", var_list[i]);
                }
                printf("%s;\n", var_list[idx-1]);
                idx = 0;
                }
#line 1510 "y.tab.c"
    break;

  case 7:
#line 67 "project.y"
    {
                    printf("%s", (yyvsp[0].var_name));
                    if((temp=lookup_in_table((yyvsp[0].var_name)))!=-1)
              					{
              						if(expn_type==-1)
              						{
              							expn_type=temp;
              						}
                          else if(expn_type!=temp)
              						{
              							printf("\ntype mismatch in the expression\n");
              							yyerror("");
              							exit(0);
              						}
              					}
                        else
              					{
              						printf("\n variable \"%s\" undeclared\n",(yyvsp[0].var_name));
              						yyerror("");
              						exit(0);
              					}
              					expn_type=-1;

                    }
#line 1539 "y.tab.c"
    break;

  case 8:
#line 91 "project.y"
    { printf("="); }
#line 1545 "y.tab.c"
    break;

  case 9:
#line 91 "project.y"
    { printf(";\n"); }
#line 1551 "y.tab.c"
    break;

  case 10:
#line 93 "project.y"
    {
              printf("scanf(\"");
              for(int i=0; i<idx; i++)
              {
                if((temp=lookup_in_table(var_list[i])) != -1)
                {
                  if(temp==0) { printf("%%d"); }
                  else if(temp==1) { printf("%%c"); }
                  else if(temp==2) { printf("%%f"); }
                  else if(temp==3) { printf("%%lf"); }
                }
                else
                {
                  printf("Undeclared variable %s !", yylval.var_name);
                  yyerror("");
                  exit(0);
                }
              }
              printf("\"");
              for(int i=0; i<idx; i++)
              {
                printf(",&%s", var_list[i]);
              }
                printf(");\n");
                idx=0; //done checking and printing, reuse var_list.
              }
#line 1582 "y.tab.c"
    break;

  case 11:
#line 120 "project.y"
    { printf("printf(\""); }
#line 1588 "y.tab.c"
    break;

  case 12:
#line 120 "project.y"
    {
                printf("\"");
                for(int i=0; i<idx; i++)
                {
                  printf(",%s", var_list[i]);
                }
                printf(");\n");
                idx = 0;
              }
#line 1602 "y.tab.c"
    break;

  case 13:
#line 130 "project.y"
    {
							 		int j = 0;
									for(int i=0; i<strlen(yytext); i++)
									{
										if(isdigit(yytext[i]))
											{
												array_dims[j] = (int)yytext[i];
												j++;
											}
										}
									}
#line 1618 "y.tab.c"
    break;

  case 14:
#line 142 "project.y"
    {
                if(current_data_type == 0) { printf("int "); }
                else if(current_data_type == 1) { printf("char "); }
                else if(current_data_type == 2) { printf("float "); }
                else if(current_data_type == 3) { printf("double "); }
								else { printf("Invalid data type"); }

								printf(var_list[idx - 1]);
								idx = 0;

								for(int i=0; i<2; i++)
								{ printf("[%d]", array_dims[i]); }
								printf(";\n");
							}
#line 1637 "y.tab.c"
    break;

  case 17:
#line 159 "project.y"
    { printf("goto "); }
#line 1643 "y.tab.c"
    break;

  case 18:
#line 159 "project.y"
    { printf("%s", yylval.var_name); }
#line 1649 "y.tab.c"
    break;

  case 19:
#line 159 "project.y"
    { printf(";"); }
#line 1655 "y.tab.c"
    break;

  case 20:
#line 160 "project.y"
    { printf("while("); }
#line 1661 "y.tab.c"
    break;

  case 21:
#line 160 "project.y"
    { printf("){\n"); }
#line 1667 "y.tab.c"
    break;

  case 22:
#line 160 "project.y"
    { printf("}\n"); }
#line 1673 "y.tab.c"
    break;

  case 23:
#line 161 "project.y"
    { printf("do{\n");  }
#line 1679 "y.tab.c"
    break;

  case 24:
#line 161 "project.y"
    { printf("} while("); }
#line 1685 "y.tab.c"
    break;

  case 25:
#line 161 "project.y"
    { printf(");\n"); }
#line 1691 "y.tab.c"
    break;

  case 26:
#line 162 "project.y"
    { printf("for("); }
#line 1697 "y.tab.c"
    break;

  case 27:
#line 162 "project.y"
    { strcpy(loop_var, yylval.var_name); printf(loop_var); }
#line 1703 "y.tab.c"
    break;

  case 28:
#line 163 "project.y"
    { printf("="); }
#line 1709 "y.tab.c"
    break;

  case 29:
#line 164 "project.y"
    { printf("; %s", loop_var); }
#line 1715 "y.tab.c"
    break;

  case 30:
#line 164 "project.y"
    { printf("<="); }
#line 1721 "y.tab.c"
    break;

  case 31:
#line 165 "project.y"
    { printf("; %s++", loop_var); }
#line 1727 "y.tab.c"
    break;

  case 32:
#line 166 "project.y"
    { printf("){\n");   }
#line 1733 "y.tab.c"
    break;

  case 33:
#line 167 "project.y"
    {  printf("}\n");}
#line 1739 "y.tab.c"
    break;

  case 34:
#line 168 "project.y"
    { printf("%s:\n", yylval.var_name); }
#line 1745 "y.tab.c"
    break;

  case 35:
#line 169 "project.y"
    { printf("/%s/\n", yylval.var_name); }
#line 1751 "y.tab.c"
    break;

  case 36:
#line 171 "project.y"
    {   printf("if("); }
#line 1757 "y.tab.c"
    break;

  case 37:
#line 171 "project.y"
    { printf("){\n");   }
#line 1763 "y.tab.c"
    break;

  case 38:
#line 171 "project.y"
    {   printf("}\n"); }
#line 1769 "y.tab.c"
    break;

  case 41:
#line 174 "project.y"
    { printf("else if("); }
#line 1775 "y.tab.c"
    break;

  case 42:
#line 174 "project.y"
    { printf("){\n"); }
#line 1781 "y.tab.c"
    break;

  case 43:
#line 174 "project.y"
    { printf("\n}\n"); }
#line 1787 "y.tab.c"
    break;

  case 44:
#line 176 "project.y"
    { printf("else{\n"); }
#line 1793 "y.tab.c"
    break;

  case 45:
#line 176 "project.y"
    { printf("\n}\n"); }
#line 1799 "y.tab.c"
    break;

  case 46:
#line 178 "project.y"
    { strcpy(var_list[idx], yylval.var_name); idx++; }
#line 1805 "y.tab.c"
    break;

  case 48:
#line 179 "project.y"
    { strcpy(var_list[idx], yylval.var_name); idx++; }
#line 1811 "y.tab.c"
    break;

  case 49:
#line 181 "project.y"
    { printf("%s", yylval.text); }
#line 1817 "y.tab.c"
    break;

  case 51:
#line 182 "project.y"
    {
                if((temp=lookup_in_table((yyvsp[0].var_name))) != -1)
                {
									if(temp==0)
										printf("%%d");
									else if(temp==1)
										printf("%%c");
									else if(temp==2)
										printf("%%f");
									else
										printf("%%lf");
								}
								else
								{
									printf("Cannot read undeclared variable %s !", yylval.var_name);
									yyerror("");
									exit(0);
								}
                strcpy(var_list[idx], yylval.var_name); idx++; }
#line 1841 "y.tab.c"
    break;

  case 53:
#line 201 "project.y"
    { printf("%s", yylval.text); }
#line 1847 "y.tab.c"
    break;

  case 54:
#line 202 "project.y"
    { if((temp=lookup_in_table((yyvsp[0].var_name))) != -1) {
									if(temp==0)
										printf("%%d");
									else if(temp==1)
										printf("%%c");
									else if(temp==2)
										printf("%%f");
									else
										printf("%%lf");
								}
								else
								{
									printf("Cannot read undeclared variable %s !", yylval.var_name);
									yyerror("");
									exit(0);
								}
                strcpy(var_list[idx], yylval.var_name); idx++;
            }
#line 1870 "y.tab.c"
    break;

  case 55:
#line 221 "project.y"
    { strcpy(var_list[idx], (yyvsp[-2].var_name)); idx++; insert_to_table((yyvsp[-2].var_name), current_data_type); }
#line 1876 "y.tab.c"
    break;

  case 56:
#line 222 "project.y"
    { strcpy(var_list[idx], (yyvsp[0].var_name)); idx++; insert_to_table((yyvsp[0].var_name), current_data_type); }
#line 1882 "y.tab.c"
    break;

  case 57:
#line 224 "project.y"
    {
     						(yyval.data_type)=(yyvsp[0].data_type);
     						current_data_type=(yyvsp[0].data_type);
     					}
#line 1891 "y.tab.c"
    break;

  case 58:
#line 228 "project.y"
    {
     						(yyval.data_type)=(yyvsp[0].data_type);
     						current_data_type=(yyvsp[0].data_type);
     					}
#line 1900 "y.tab.c"
    break;

  case 59:
#line 232 "project.y"
    {
     						(yyval.data_type)=(yyvsp[0].data_type);
     						current_data_type=(yyvsp[0].data_type);
     					}
#line 1909 "y.tab.c"
    break;

  case 60:
#line 236 "project.y"
    {
     						(yyval.data_type)=(yyvsp[0].data_type);
     						current_data_type=(yyvsp[0].data_type);
     					}
#line 1918 "y.tab.c"
    break;

  case 61:
#line 241 "project.y"
    {printf("+");}
#line 1924 "y.tab.c"
    break;

  case 63:
#line 242 "project.y"
    {printf("-");}
#line 1930 "y.tab.c"
    break;

  case 65:
#line 243 "project.y"
    {printf("*");}
#line 1936 "y.tab.c"
    break;

  case 67:
#line 244 "project.y"
    {printf("/");}
#line 1942 "y.tab.c"
    break;

  case 69:
#line 245 "project.y"
    {printf("%%");}
#line 1948 "y.tab.c"
    break;

  case 71:
#line 246 "project.y"
    {printf("!");}
#line 1954 "y.tab.c"
    break;

  case 73:
#line 247 "project.y"
    {printf("&&");}
#line 1960 "y.tab.c"
    break;

  case 75:
#line 248 "project.y"
    {printf("||");}
#line 1966 "y.tab.c"
    break;

  case 77:
#line 249 "project.y"
    {printf("<=");}
#line 1972 "y.tab.c"
    break;

  case 79:
#line 250 "project.y"
    {printf(">=");}
#line 1978 "y.tab.c"
    break;

  case 81:
#line 251 "project.y"
    {printf(">");}
#line 1984 "y.tab.c"
    break;

  case 83:
#line 252 "project.y"
    {printf("<");}
#line 1990 "y.tab.c"
    break;

  case 85:
#line 253 "project.y"
    {printf("==");}
#line 1996 "y.tab.c"
    break;

  case 87:
#line 254 "project.y"
    {printf("!=");}
#line 2002 "y.tab.c"
    break;

  case 90:
#line 257 "project.y"
    {
              if((temp=lookup_in_table(yylval.var_name))!=-1) {
                printf("%s", yylval.var_name);
                if(expn_type==-1){
                  expn_type=temp;
                }
                else if(expn_type!=temp){
                  printf("\ntype mismatch in the expression\n");
                  yyerror("");
                  exit(0);
                }
              }
              else{
                printf("\n variable \"%s\" undeclared\n", yylval.var_name);
                yyerror("");
                exit(0);
              }
          }
#line 2025 "y.tab.c"
    break;

  case 91:
#line 275 "project.y"
    { printf("%d", yylval.value); }
#line 2031 "y.tab.c"
    break;


#line 2035 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 277 "project.y"


int lookup_in_table(char var[30])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym_table[i].var_name, var)==0)
			return sym_table[i].type;
	}
	return -1;
}

void insert_to_table(char var[30], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym_table[table_idx].var_name,var);
		sym_table[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

void indent() {
	for(int i = 0; i < tabs; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	success = 0;
	return 0;
}
