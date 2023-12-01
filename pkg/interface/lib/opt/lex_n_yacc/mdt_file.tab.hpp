/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED
# define YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int mdt_filedebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MODEL = 258,                   /* MODEL  */
    MODEL_SOURCE = 259,            /* MODEL_SOURCE  */
    INPUT = 260,                   /* INPUT  */
    OUTPUT = 261,                  /* OUTPUT  */
    INOUT = 262,                   /* INOUT  */
    INTERN = 263,                  /* INTERN  */
    PRIMITIVE = 264,               /* PRIMITIVE  */
    INSTANCE = 265,                /* INSTANCE  */
    NAME = 266                     /* NAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "src/mdt_file.y"

    char                 ychar[IntfNs::NAME_LEN];
    IntfNs::MdtPortType  yportType;
    IntfNs::MdtNames     *ynames;
    IntfNs::MdtPortToNet *yportToNet;

#line 82 "lib/opt/lex_n_yacc/mdt_file.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE mdt_filelval;


int mdt_fileparse (void* param);


#endif /* !YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED  */