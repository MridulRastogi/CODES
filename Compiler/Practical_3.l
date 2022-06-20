%{
#include<stdio.h>
%}
%%
[0-9]+"."[0-9]+ {printf("Decimal number\n");}
[0-9]+ {printf("Integer number\n");}
%%
int yywrap() { return 1; }
int main(){
    yylex();
    return 0;
}
