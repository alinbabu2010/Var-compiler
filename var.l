%{
#include "var.tab.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
%}
%option yylineno
%%
"&"				{ 	return and; 	}
"|"				{ 	return or; 	}
"if"				{	return IF;	}
"else"				{	return ELSE;}
"do"        {return DO;}
"while"     {return WHILE;}
"for"       {return FOR;}
"=="				{	return eq;	}
"!="				{	return ne;	}
"<="				{	return le;	}
">="				{	return ge;	}
"exit"				{	return EXIT;	}
"print"				{	return print;	}
"ptable"			{ 	return ptable;	}
[0-9]+				{	yylval.no=atoi(yytext) ; return num;	}
[a-z]([a-z]|[0-9])*		{	strcpy(yylval.var,yytext); return id;}
[\t \v \n]				{;}
[- + ; ( ) * / = < > { } % ]			{ return *yytext;}
%%


int yywrap()
{
return 1;
}
