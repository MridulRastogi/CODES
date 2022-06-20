%{
#include<stdio.h>
%}
%%
^[a-z A-Z _][a-z A-Z 0-9 _] {printf("Valid Identifier\n");}
^[^a-z A-Z _] {printf(" Not a valid Identifier\n");}
. ;	
%%
int yywrap() { return 1; }
int main()
{
    yylex();	
    return 0;
}
