%option noyywrap
%option yylineno

%{
#include <stdio.h>
#include <stdlib.h>
#include <QString>
#include "parser.h"

int yycolm = 0;

%}

ENTERO      [0-9]+
DECIMAL     [0-9]+"."[0-9]+
CARACTER    ['] [^\n\'] [']
CADENA      ["] [^\n\"] ["]

COMMENT     "//".*\n\r | "//".*\n | "//".*\r | "/*".*"*/"

//BOOLEANO en las palabras reservadas


//OPERACIONES ARITMETICAS
"+"         {return mas;}
"-"         {return men;}
"*"         {return por;}
"/"         {return div;}
"^"         {return pot;}
"++"        {return masmas;}
"--"        {return menmen;}

//ASIGNACION Y OPERACION
"+="        {return masigual;}
"-="        {return menigual;}
"*="        {return porigual;}
"/="        {return divigual;}

//OPERACIONES RELACIONALES
">"         {return mayor;}
"<"         {return menor;}
">="        {return mayorigual;}
"<="        {return menorigual;}
"=="        {return igualigual;}
"!="        {return diferente;}

//OPERACIONES LOGICAS
"&&"        {return and;}
"||"        {return or;}
"!"         {return not;}
