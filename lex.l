%{  
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "y.tab.h"
    void extern yyerror(char*);
    void InvalidToken();

%}
%option noyywrap
%option yylineno

%x multi_comment
%x oneline_comment


%%


"'"                                             {return SINGLE_QUOTES;}
"“"                                             {return LEFT_APOSTR;}  
"”"                                             {return RIGHT_APOSTR;}
","                                             {return COMMA;}
":"                                             {return COLON;}
":="                                            {return FOR_ASSIGN;}
";"                                             {return SEMI_COLON;}
"="                                             {return EQUALS;}
"("                                             {return BRACKET_OPEN;}
")"                                             {return BRACKET_CLOSE;}
"{"                                             {return CURLY_BRACE_OPEN;}
"}"                                             {return CURLY_BRACE_CLOSE;}
"["                                             {return BIG_BRACKET_OPEN;}
"]"                                             {return BIG_BRACKET_CLOSE;}
"AND"                                           {return ANDOP;}
"OR"                                            {return OROP;}
">"                                             {return GRTOP;} 
"<"                                             {return LESSOP;}
"=="                                            {return EQCHK;}
"!="                                            {return NONEQCHK;} 
"+"                                             {return ADDOP;}
"-"                                             {return SUBOP;} 
"*"                                             {return MULOP;} 
"/"                                             {return DIVOP;} 
"^"                                             {return POWOP;}
"PROGRAM"                                       {return PROGRAM;}
"STARTMAIN"                                     {return STARTMAIN;}
"ENDMAIN"                                       {return ENDMAIN;}
"FUNCTION"                                      {return FUNCTION;} 
"RETURN"                                        {return RETURN;}
"END_FUNCTION"                                  {return END_FUNCTION;} 
"VARS"                                          {return VARS;} 
"CHAR"                                          {return CHAR;}
"INTEGER"                                       {return INTEGER;} 
"WHILE"                                         {return WHILE;}
"ENDWHILE"                                      {return ENDWHILE;} 
"FOR"                                           {return FOR;}
"TO"                                            {return TO;}
"STEP"                                          {return STEP;}
"ENDFOR"                                        {return ENDFOR;}
"IF"                                            {return IF;}
"THEN"                                          {return THEN;}
"ELSEIF"                                        {return ELSEIF;}
"ELSE"                                          {return ELSE;}
"ENDIF"                                         {return ENDIF;} 
"SWITCH"                                        {return SWITCH;} 
"CASE"                                          {return CASE;}
"DEFAULT"                                       {return DEFAULT;}
"ENDSWITCH"                                     {return ENDSWITCH;}
"PRINT"                                         {return PRINT;}
"BREAK"                                         {return BREAK;}
"STRUCT"                                        {return STRUCT;}
"imag_type"                                     {return imag_type;} 
"TYPEDEF"                                       {return TYPEDEF;}
"ENDSTRUCT"                                     {return ENDSTRUCT;}
 



"/*"     {BEGIN(multi_comment); }
<multi_comment>[^*]*        { }
<multi_comment>"*"+[^*/]*   { }
<multi_comment>"*/"+[ \t\r\n]*         { BEGIN(INITIAL); }


"%".*+[ \t\r\n]*   {  }


[a-zA-Z_]                                       {yylval.charVal = yytext[1];    return CHARACTER_VALUE;}
[0-9]+                                          {yylval.intVal = atoi(yytext);  return INTEGER_VALUE;}

[a-zA-Z][_a-zA-Z0-9]*(\[[0-9]+\])+              {yylval.strVal = strdup(yytext); return ARRAY_IDENTIFIER;}
[a-zA-Z_][_a-zA-Z0-9]*                           {yylval.dataType = strdup(yytext); return IDENTIFIER;}


\"(\\.|[^"])*\"                                 {yylval.strVal = strdup(yytext); return STRING_VALUE;}



[ \t\r\n]                                         ;
[\r\n]+                                          {return '\n';}


<<EOF>>                                         { yyterminate(); return 0; }
.                                               {InvalidToken(); return *yytext;}

%%


void yyerror(char *s) {
    fprintf(stderr, "\nERROR ON LINE %d : \n %s\n", yylineno, s);
    exit(0);
}

void InvalidToken(){
    printf("ERROR ON LINE %d : \n Invalid Token %s\n", yylineno,yytext);
    exit(0);
}
