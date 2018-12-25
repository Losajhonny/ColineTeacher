%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include "scanner.h"

extern int yylineno;
extern char *yyltext;
extern int line;
exter FILE *yyin;
void yyerror(char *s);
%}

%token mas men por div pot masmas menmen

%token masigual menigual porigual divigual igual

%token mayor menor mayorigual menorigual igualigual diferente

%token and or not

%token pari pard
%token cori cord
%token llai llad

%token dospuntos ptcoma interr punto

%token pr_entero
%token pr_decimal
%token pr_booleano
%token pr_caracter
%token pr_cadena
%token pr_verdadero
%token pr_falso

%token pr_nada
%token pr_imprimir
%token pr_clase
%token pr_publico
%token pr_protegido
%token pr_privado
%token pr_vacio
%token pr_este
%token pr_hereda_de
%token pr_importar
%token pr_nuevo
%token pr_sobrescribir

%token pr_detener
%token pr_continuar
%token pr_retornar

%token pr_si
%token pr_sino
%token pr_seleccion
%token pr_caso
%token pr_default
%token pr_mientras
%token pr_hacer
%token pr_para

%token pr_lista
%token pr_insertar
%token pr_obtener
%token pr_buscar
