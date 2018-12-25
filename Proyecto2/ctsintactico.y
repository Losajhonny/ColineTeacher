%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

extern int yylineno;
extern char *yyltext;
extern int line;
exter FILE *yyin;
void yyerror(char *s);
%}

%token mas
