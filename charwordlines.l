%option noyywrap
%{
   #include<stdio.h>
   int character = 0;
   int word = 0;
   int sentence = 0;
   int line = 0;
   int tab = 0;
   int number = 0;
   int space = 0;
   int total_character = 0;
%}

%%
[A-z]+[0-9]* {word++; character=character+yyleng;}
[\n] {line++;}
[.] {sentence++; character=character+yyleng;}  
[\t] {tab++; character=character+yyleng;}
[0-9] {number++; character=character+yyleng;}
" " {space++; character=character+yyleng;} 
\n\n {printf("Characters Count = %d\nWords Count = %d\nSentences Count = %d\nLines Count = %d\nTabs Count = %d\nNumbers Count = %d\nSpaces Count = %d",character,word,sentence,line+1,tab,number,space);}
%%

int main()
{
	printf("Enter Text : \n");
	yylex();
	return 0;
}


