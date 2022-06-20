%{
%}
ALPHA [A-Z a-z]
DIGIT [0-9]

%%
{ALPHA} ({ALPHA} | {DIGIT})* return ID;
{DIGIT}+ {yylval = atoi(yytext); return ID;}
[\n \t] yyterminate();
yylval=atoi(yytext); return ID; }
%%

return yytext[0];
