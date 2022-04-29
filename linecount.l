%option noyywrap
%{
   #include<stdio.h>
   int line = 0;
   int lala = 0;
%}

%%
[A-z][0-9]* { lala++;}
[\n] {line++;}
\n\n {printf("Lines Count = %d",line+1);}
%%

int main()
{
	printf("Enter Text : \n");
	yylex();
	return 0;
}
