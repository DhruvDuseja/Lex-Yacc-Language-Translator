%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
%}
%%

"*"(.|\n)*"*"     				{strcpy(yylval.var_name, yytext); return COMMENT;}
"Procedure"       				{return PROC;}
"Main"            				{return MAIN;}
"Begin"           				{return BEGN;}
":"               				{return COLON;}
"End"             				{return END;}
"var"             				{return VAR_DECL;}
"int"             				{yylval.data_type=0; return INT;}
"char"            				{yylval.data_type=1; return CHAR;}
"float"           				{yylval.data_type=2; return FLOAT;}
"double"          				{yylval.data_type=3; return DOUBLE;}
"Write"           				{return WRITE;}
"Read"            				{return READ;}
"For"             				{return FOR;}
"To"              				{return TO;}
"Of"              				{return OF;}
"Do"              				{return DO;}
"EndFor"          				{return ENDFOR;}
"If"              				{return IF;}
"ElseIf"          				{return ELSEIF;}
"Else"            				{return ELSE;}
"EndIf"           				{return ENDIF;}
"goto"            				{return GOTO;}
"Repeat"          				{return REPEAT;}
"Until"           				{return UNTIL;}
"While"           				{return WHILE;}
"EndWhile"        				{return ENDWHILE;}
"<-"              				{return ARROW;}
"("               				{return LB;}
")"               				{return RB;}
";"               				{return SC;}
","               				{return COMA;}
":="              				{return ASSIGNMENT;}
"And"             				{return LAND;}
"Or"              				{return LOR;}
">="              				{return GEQ;}
"<="              				{return LEQ;}
">"	              				{return GT;}
"<"	              				{return LT;}
"!="              				{return NEQ;}
"=="              				{return DEQ;}
"+"	              				{return PLUS;}
"-"	              				{return MINUS;}
"*"	              				{return MUL;}
"/"	              				{return DIV;}
"%"	              				{return MOD;}
"!"	              				{return NOT;}
'[^'"]*'          				{strcpy(yylval.text, yytext); return TEXT;}
[a-zA-Z]+         				{strcpy(yylval.var_name, yytext); return VAR;}
[0-9]+            				{yylval.value = atoi(yytext); return NUMBER;}
Array((\[[0-9]+\]){2}) 		{return ARRAY;}
[\n\t ]+          				{/* ignore whitespace, newline, tab */}

%%

int yywrap(void) {
	return 1;
}
