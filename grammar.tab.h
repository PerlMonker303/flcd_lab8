/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
