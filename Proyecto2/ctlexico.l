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
CARACTER    ['][^\n\'][']
CADENA      ["][^\n\"]+["]
ID          [A-Za-z][A-Za-z0-9]+
COMMENTMUL  [/][*].*[*][/]
COMMENTUNI  [/][/].*[\n\r]

%%

"+"         {return mas;}
"-"         {return men;}
"*"         {return por;}
"/"         {return div;}
"^"         {return pot;}
"++"        {return masmas;}
"--"        {return menmen;}

"+="        {return masigual;}
"-="        {return menigual;}
"*="        {return porigual;}
"/="        {return divigual;}
"="         {return igual;}

">"         {return mayor;}
"<"         {return menor;}
">="        {return mayorigual;}
"<="        {return menorigual;}
"=="        {return igualigual;}
"!="        {return diferente;}

"&&"        {return and;}
"||"        {return or;}
"!"         {return not;}

"("         {return pari;}
")"         {return pard;}
"["         {return cori;}
"]"         {return cord;}
"{"         {return llai;}
"}"         {return llad;}

":"         {return dospuntos;}
";"         {return ptcoma;}
"?"         {return interr;}
"."         {return punto;}

"entero"    {return pr_entero;}
"decimal"   {return pr_decimal;}
"booleano"  {return pr_booleano;}
"caracter"  {return pr_caracter;}
"cadena"    {return pr_cadena;}
"verdadero" {return pr_verdadero;}
"falso"     {return pr_falso;}

"nada"      {return pr_nada;}
"imprimir"  {return pr_imprimir;}
"clase"     {return pr_clase;}
"publico"   {return pr_public;}
"protegido" {return pr_protegido;}
"privado"   {return pr_privado;}
"vacio"     {return pr_vacio;}
"este"      {return pr_este;}
"hereda_de" {return pr_hereda_de;}
"importar"  {return pr_importar;}
"nuevo"     {return pr_nuevo;}
"@sobrescribir" {return pr_sobrescribir;}

"detener"   {return pr_detener;}
"continuar" {return pr_continuar;}
"retornar"  {return pr_retornar;}

"si"        {return pr_si;}
"sino"      {return pr_sino;}
"selecciona"    {return pr_seleccion;}
"caso"      {return pr_caso;}
"default"   {return pr_default;}
"mientras"  {return pr_mientras;}
"hacer"     {return pr_hacer;}
"para"      {return pr_para;}

"lista"     {return pr_lista;}
"insertar"  {return pr_insertar;}
"obtener"   {return pr_obtener;}
"buscar"    {return pr_buscar;}
"pila"      {return pr_pila;}
"apilar"    {return pr_apilar;}
"desapilar" {return pr_desapilar;}
"cola"      {return pr_cola;}
"encolar"   {return pr_encolar;}
"desencolar"    {return pr_desencolar;}
"mostraredd"    {return pr_mostraredd;}
"leerteclado"   {return pr_leerteclado;}

"concatenar" {return pr_concatenar;}
"convertiracadena"  {return pr_convertiracadena;}
"convertiraentero"  {return pr_convertiraentero;}

"\n"        {yycolm = 0;}

{ENTERO}    {return entero;}
{DECIMAL}   {return decimal;}
{CARACTER}  {return caracter;}
{CADENA}    {return cadena;}
{ID}        {return id;}
{COMMENTMUL}   {}
{COMMENTUNI}   {}

[:blank:]    {}
[\t\r\f\v\b] {}
.           {printf("Caracter no reconocido %s", yytext); printf("En la linea: %d \n", yylineno);}

%%
