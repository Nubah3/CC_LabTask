
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUDE = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     PRINTF = 262,
     SCANF = 263,
     IF = 264,
     ELSE = 265,
     SWITCH = 266,
     CASE = 267,
     DEFAULT = 268,
     BREAK = 269,
     RETURN = 270,
     MAIN = 271,
     IDENTIFIER = 272,
     INTEGER = 273,
     FLOAT_NUM = 274,
     STRING = 275,
     CHARACTER = 276,
     HEADER_FILE = 277,
     HEADER_INCOMPLETE = 278,
     NE = 279,
     EQ = 280,
     ASSIGN = 281,
     PLUS = 282,
     MINUS = 283,
     MULTIPLY = 284,
     DIVIDE = 285,
     LPAREN = 286,
     RPAREN = 287,
     LBRACE = 288,
     RBRACE = 289,
     SEMICOLON = 290,
     COMMA = 291,
     AMPERSAND = 292,
     COLON = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


