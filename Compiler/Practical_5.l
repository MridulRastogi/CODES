%{
#include<stdio.h>
int lc=0,sc=0,tc=0,oc=0,wc=0;
%}
%%
[a-zA-Z0-9]* {wc++;}
\n {lc++;}
([ ]) {sc++;}
\t {tc++;}
. {oc++;}
%%
int yywrap(void) {}
int main(){
    extern FILE *yyin, *yyout;
    yyin = fopen("input.txt","r");
    yyout = fopen("output.txt","w+");
    yylex();
    fprintf(yyout,"No. of lines: %d\n",lc);
    fprintf(yyout,"No. of Space: %d\n",sc);
    fprintf(yyout,"No. of tabs: %d\n",tc);
    fprintf(yyout,"No. of words: %d\n",wc);
    fprintf(yyout,"No. of Other Character: %d\n",oc);
    return 0;
}

