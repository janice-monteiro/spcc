%option noyywrap
%{
#include<stdio.h>
#include<stdlib.h>
int var = 0, op = 0, b = 0;
%}

%%
[A-z0-9]+ {var++;}
"+"|"-"|"*"|"/" {op++;}
"(" {b++;}
")" {b--;}
\n {if(b==0 && var>op){printf("Valid Expression");}else{printf("Invalid Expression");};exit(0);}
%%

int main()
{
printf("Enter expression: ");
yylex();
return 0;
}

