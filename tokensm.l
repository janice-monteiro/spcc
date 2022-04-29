%option noyywrap

%{
#include<stdio.h>
int keyword=0, id=0, sp_char=0, no=0, op=0;
%}

%%
"if"|"while"|"elif"|"break" {keyword++; printf("Keyword: %s\n", yytext);}
[A-z_][A-z0-9_]* {id++; printf("Identifier: %s\n", yytext);}    //variable
[0-9]+[0-9]* {no++; printf("Number: %s\n", yytext);}
"="|"+"|"-"|"*"|"/" {op++; printf("Operator: %s\n", yytext); }
"("|")"|"{"|"}"|";"|":" {sp_char++; printf("Special Character: %s\n", yytext);}
\n printf("Total Keyword = %d \nTotal Identifier = %d \nTotal Special Character = %d \nTotal Number = %d \nTotal Operator = %d",keyword,id,sp_char,no,op);
%%
int main()
{
	printf("Enter expression: ");
	yylex();
	return 0;
}

