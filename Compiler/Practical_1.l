%{
#include<stdio.h>
int lc=0,sc=0,tc=0,oc=0;
%}

%%
\n    {lc++;}
([ ]) {sc++;}
\t    {tc++;}
.     {oc++;}
%%

int yywrap() { return 1; }

int main()
{
    yylex();
    printf("No. of Lines: %d\n",lc);
    printf("No. of Space: %d\n",sc);
    printf("No. of Tabs : %d\n",tc);
    printf("No. of Other Character: %d\n",oc);
    return 0;
}
