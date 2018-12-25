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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    mas = 258,
    men = 259,
    por = 260,
    div = 261,
    pot = 262,
    masmas = 263,
    menmen = 264,
    masigual = 265,
    menigual = 266,
    porigual = 267,
    divigual = 268,
    igual = 269,
    mayor = 270,
    menor = 271,
    mayorigual = 272,
    menorigual = 273,
    igualigual = 274,
    diferente = 275,
    and = 276,
    or = 277,
    not = 278,
    pari = 279,
    pard = 280,
    cori = 281,
    cord = 282,
    llai = 283,
    llad = 284,
    dospuntos = 285,
    ptcoma = 286,
    interr = 287,
    punto = 288,
    pr_entero = 289,
    pr_decimal = 290,
    pr_booleano = 291,
    pr_caracter = 292,
    pr_cadena = 293,
    pr_verdadero = 294,
    pr_falso = 295,
    pr_nada = 296,
    pr_imprimir = 297,
    pr_clase = 298,
    pr_publico = 299,
    pr_protegido = 300,
    pr_privado = 301,
    pr_vacio = 302,
    pr_este = 303,
    pr_hereda_de = 304,
    pr_importar = 305,
    pr_nuevo = 306,
    pr_sobrescribir = 307,
    pr_detener = 308,
    pr_continuar = 309,
    pr_retornar = 310,
    pr_si = 311,
    pr_sino = 312,
    pr_seleccion = 313,
    pr_caso = 314,
    pr_default = 315,
    pr_mientras = 316,
    pr_hacer = 317,
    pr_para = 318,
    pr_lista = 319,
    pr_insertar = 320,
    pr_obtener = 321,
    pr_buscar = 322,
    pr_pila = 323,
    pr_apilar = 324,
    pr_desapilar = 325,
    pr_cola = 326,
    pr_encolar = 327,
    pr_desencolar = 328,
    pr_mostraredd = 329,
    pr_leerteclado = 330,
    pr_concatenar = 331,
    pr_convertiracadena = 332,
    pr_convertiraentero = 333,
    entero = 334,
    decimal = 335,
    caracter = 336,
    cadena = 337,
    id = 338,
    menos = 339,
    neg = 340
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */
