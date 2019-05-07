%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int yylex();
void yyerror(char *s);


void installid(char s[],int n);
int getid(char s[]);
void dis();
int relop(int a, int b, int c);
int cel_to_fah(int);
int fah_to_cel(int);
int factorial(int);
int km_to_m(int);
int m_to_km(int);

char reg[7][10]={"t1","t2","t3","t4","t5","t6"};

extern FILE *yyout;
extern FILE *yyin;
extern char *yytext;
extern char yylineno;

struct table{
char name[10];
int val;
}symbol[53];
%}

%union{
int no;
char var[10];
}

%token <var> id
%token <no> num
%token print EXIT IF ELSE WHILE ptable
%token<num> SQRT FACTORIAL
%token<num> CEL_TO_FAH FAH_TO_CEL M_TO_KM KM_TO_M
%type <no>  start exp assignment term condn wloop math_function metric_conversion
%start start
%left and or
%left '>' '<' eq ne ge le
%left '+' '-' '%'
%left '*' '/'

%%


start	: EXIT ';'		{exit(0);}
	| print exp ';'		{ printf("Printing: %d\n",$2); fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],$2,reg[0]); }
	| assignment ';'		{;}
	| start print exp ';'  { {printf("Printing: %d \n",$3);} fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],$3,reg[0]); ; }
	| start assignment ';'	{;}
	| start EXIT ';'	{exit(EXIT_SUCCESS);}
	| ptable ';' 		{ dis();}
	|start ptable ';'	{ dis();}
	| condn			{;}
	|start condn		{;}
  |wloop			{;}
	|start wloop		{;}
	|math_function			{;}
	|start math_function		{;}
	|metric_conversion			{;}
	|start metric_conversion		{;}
  ;


assignment : id '=' exp  { {installid($1,$3);} fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[0],$3,$1,reg[0]); ; }
			;
 condn	: IF '(' exp ')' '{' id '=' exp ';' '}' ELSE '{' id '=' exp ';''}' 	{ if($3>0){installid($6,$8);}else{installid($13,$15);}
	fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],$8,$6,reg[1],reg[2],$15,$13,reg[2]); ;}

	| IF '(' exp ')' '{' id '=' exp ';' '}' 				{ if($3>0){installid($6,$8);}
fprintf(yyout,"if nz %s;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],$8,$6,reg[1]); ;}

	| IF '(' exp ')' '{' id '=' exp ';' '}' ELSE '{' IF '(' exp ')' '{'id '=' exp ';''}' ELSE '{'id '=' exp ';''}' '}' 	{ if($3>0){installid($6,$8);}else{ if($15>0){installid($18,$20);}else{ installid($25,$27);} }
fprintf(yyout, "if z %s goto _MAINELSE; \n%s := %d;\n%s := %s;\n\n _MAINELSE : else;\n if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n;",reg[0],reg[1],$8,$6,reg[1],reg[2],reg[3],$20,$18,reg[3],reg[4],$27,$25,reg[4]); ; }

	| IF '(' exp ')' '{' print exp ';' '}' ELSE '{' print exp ';' '}' 	{ if($3>0){printf("Printing: %d\n",$7);}else{printf("Printing: %d\n",$13);}
fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\nprint %s;\n_LABEL : else;\n%s := %d;\nprint %s;\n\n",reg[0],reg[1],$7,reg[1],reg[2],$13,reg[2]);; }

	|IF '(' exp ')' '{' print exp ';' '}' 	{if($3>0){printf("Printing: %d\n",$7); }
fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$7,reg[1]) ; }
	;

/*Newly added features*/

/* Grammar for while loop statement */
wloop :  WHILE '(' exp '<' exp ')' '{' print exp ';' exp '+' '+' ';' '}' { while($3<$5){printf("Printing: %d\n",$3);$3=$3+1;}
			  fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

	    	|WHILE '(' exp '>' exp ')' '{' print exp ';' exp '-' '-' ';' '}' { while($3>$5){printf("Printing: %d\n",$3);$3=$3-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

				|WHILE '(' exp le exp ')' '{' print exp ';' exp '+' '+' ';' '}' { while($3<$5){printf("Printing: %d\n",$3);$3=$3+1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

				|WHILE '(' exp ge exp ')' '{' print exp ';' exp '-' '-' ';' '}' {while($3>$5){printf("Printing: %d\n",$3);$3=$3-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

				|WHILE '(' exp ne exp ')' '{' print exp ';' exp '-' '-' ';' '}' {while($3!=$5){printf("Printing: %d\n",$3);$3=$3-1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

				|WHILE '(' exp ne exp ')' '{' print exp ';' exp '+' '+' ';' '}' {while($3!=$5){printf("Printing: %d\n",$3);$3=$3+1;}
				fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s\n",reg[0],reg[1],$3,reg[1]) ; }

				;
/* End of Grammar for while loop statement */

/*Grammar for math functions */
math_function : id '=' math_function ';' { {installid($1,$3);}fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[2],$3,$1,reg[2]); }

								| FACTORIAL '('exp')'		{ $$ = factorial($3); }

								| SQRT '('exp')'   {$$=$3*$3;}

								;
/*End of grammar for math functions */

/*Grammar for metric conversion functions */
metric_conversion: id '=' metric_conversion ';' { {installid($1,$3);}
												fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[4],$3,$1,reg[4]); }

												| CEL_TO_FAH '('exp')' 	{ $$ = cel_to_fah($3); }

								        | FAH_TO_CEL '('exp')' { $$ = fah_to_cel($3); }

												| M_TO_KM '('exp')' { $$ = m_to_km($3); }

												| KM_TO_M '('exp')' { $$ = km_to_m($3); }

												;
/*End of grammar for metric conversion functions */

/*End of newly added features*/

/*Grammar for evaluating basic arithmetic and logical operations */
exp    	: term                 { {$$ = $1;} /*fprintf(yyout,"%s := %d;\n ",reg[0],$1);*/ ; }
       	| exp '+' exp          { {$$ = $1 + $3;} /*fprintf(yyout,"%s := %d + %d;\n ",reg[0],$1,$3);*/ ; }
       	| exp '-' exp          { {$$ = $1 - $3;} /*fprintf(yyout,"%s := %d - %d;\n ",reg[0],$1,$3);*/ ; }
				| exp '*' exp	       { {$$ = $1 * $3;} /*fprintf(yyout,"%s := %d * %d;\n ",reg[0],$1,$3);*/ ; }
				| exp '/' exp	       { {$$ = $1 / $3;} /*fprintf(yyout,"%s := %d / %d;\n ",reg[0],$1,$3);*/ ; }
				| exp '%'exp		{ {$$= $1 % $3;}}
				| exp '>' exp		{ {$$ =relop($1,$3,1);} /*fprintf(yyout,"%s := %c > %d;\n ",reg[0],$1,$3); */;}
				| exp '<' exp		{ {$$ =relop($1,$3,2);} /*fprintf(yyout,"%s := %c < %d;\n ",reg[0],$1,$3); */;}
				| exp eq exp		{ {$$ =relop($1,$3,3);} /*fprintf(yyout,"%s := %c eq %d;\n ",reg[0],$1,$3); */;}
				| exp ne exp		{ {$$ =relop($1,$3,4);} /*fprintf(yyout,"%s := %c neq %d;\n ",reg[0],$1,$3); */;}
				| exp ge exp		{ {$$ =relop($1,$3,5);} /*fprintf(yyout,"%s := %c ge %d;\n ",reg[0],$1,$3); */;}
				| exp le exp		{ {$$ =relop($1,$3,6);} /*fprintf(yyout,"%s := %c le %d;\n ",reg[0],$1,$3); */;}
				| '(' exp ')'		{ {$$ = $2;} /*fprintf(yyout,"%s := %d;\n ",reg[0],$2); */;}
				| exp and exp		{ {$$ =relop($1,$3,7);} /*fprintf(yyout,"%s := %c and %d;\n ",reg[0],$1,$3);*/ ;}
				| exp or exp		{ {$$ =relop($1,$3,8);} /*fprintf(yyout,"%s := %c or %d;\n ",reg[0],$1,$3);*/ ;}
				;
/*End of grammar for evaluating basic arithmetic and logical operations */

/*Grammar for identifer and number */
term   	: num                {$$ = $1;}
	|id			{$$=getid($1);}
;
/*End of grammar for identifer and number */

%%

int relop(int a , int b ,int op)
{
		switch(op)
		{
				case 1:if(a>b){return 1;} else{return 0;} break;
				case 2:if(a<b){return 1;} else{return 0;} break;
				case 3:if(a==b){return 1;} else{return 0;} break;
				case 4:if(a!=b){return 1;} else{return 0;} break;
				case 5:if(a>=b){return 1;} else{return 0;} break;
				case 6:if(a<=b){return 1;} else{return 0;} break;
				case 7:if(a>0 && b>0 ){return 1;}else{return 0;}break;
				case 8:if(a>0 || b>0 ){return 1;}else{return 0;}break;
		}
}

void dis()
{
	int i;
	printf("Index\tVar\tVal\n");
	for(i=0;i<53;i++)
	{
			 if(symbol[i].val!=-101)
			 printf("%d\t%s\t%d\n",i,symbol[i].name,symbol[i].val);
	}
}

void installid(char str[],int n)
{
		int index,i;
		index=str[0]%53;
		i=index;
		if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
		{
				symbol[index].val=n;
				strcpy(symbol[index].name,str);
		}
		else
		{
				i=(i+1)%53;
				while(i!=index)
				{
						if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
						{
							symbol[i].val=n;
							strcpy(symbol[i].name,str);
							break;
						}
						i=(i+1)%53;
				}
		}
}


int getid(char str[])
{
		int index,i;
		index=str[0]%53;
		i=index;
		if(strcmp(str,symbol[index].name)==0)
		{
				return(symbol[index].val);
		}
		else
		{
			i=(i+1)%53;
		 	while(i!=index)
			{
					if(strcmp(str,symbol[i].name)==0)
					{
						return (symbol[i].val);
						break;
					}
					i=(i+1)%53;
			}
			if(i==index)
			{
					printf("Not initialised.\n");
			}
		}
}

/* Function to convert celsius to fahrenheit */
int cel_to_fah(int cel)
{
		return cel * 9 / 5 + 32;
}
/* Function to convert fahrenheit to celsius */
int fah_to_cel(int fah)
{
		return (fah - 32) * 5 / 9;
}
/* Function to convert kilometers to miles*/
int km_to_m(int km)
{
		return km * 0.62137;
}
/* Function to convert miles to kilometers */
int m_to_km(int m)
{
	return m / 0.62137;
}

/* Function to calculate factorial of a number */
int factorial(int n)
{
	int x; int f=1;
	for (x=1; x<=n; x++) {
		f *= x;
	}
	return f;
}

void yyerror (char *s)
{
		fprintf(stderr,"Error at line %d in %s ",yylineno,s);
}

int main(int argc[],char* argv[])
{
		int i;
		for(i=0;i<53;i++)
		{
				symbol[i].val=-101;
		}
		yyout = fopen("output.txt","a");
		return yyparse();
}
