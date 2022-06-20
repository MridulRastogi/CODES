%{
%}

start \/\*
end \*\/

/*Rule Section*/
%%

\/\/(.*) ;

{start}.*{end} ;

%%

int yywrap(void)
{
return 1;
}

int main()
{
yyin=fopen("input.txt","r");
yyout=fopen("out.txt","w");
yylex();
return 0;
}
