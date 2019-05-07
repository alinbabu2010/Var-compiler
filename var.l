%{
#include "var.tab.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
%}
%option yylineno

%%
"&"                     {return and;}
"|"                     {return or;}
"if"                    {return IF;}
"else"                  {return ELSE;}
"while"                 {return WHILE;}
"=="                    {return eq;}
"!="                    {return ne;}
"<="                    {return le;}
"kmtom"                 {return KM_TO_M;}
"mtokm"                 {return M_TO_KM;}
"ctof"				          { return CEL_TO_FAH; }
"ftoc"                  { return FAH_TO_CEL; }
"sqrt"								  { return SQRT; }
"fact"			  					{ return FACTORIAL; }
">="                    {return ge;}
"exit"                  {return EXIT;}
"print"                 {return print;}
"ptable"                {return ptable;}
[0-9]+                  {yylval.no=atoi(yytext);return num;}
[a-z]([a-z]|[0-9])*	    {strcpy(yylval.var,yytext); return id;}
[\t \v \n]				      {;}
[- + ; ( ) * / = < > { } % ] {return *yytext;}
%%

int yywrap()
{
  return 1;
}
