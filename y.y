%{
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <math.h>
  #include "DeclValidn.h"


  static char* errMsg;

  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;


 int install ( char *sym_name ){  
   
   symrec *s;
   s = getsym (sym_name);
   if (s == 0){
        s = putsym (sym_name);
        return 0;
        }
   else { 
          //printf( "%s is already defined\n", sym_name );
          
          return 1;
   }
}

int context_check( char *sym_name )
{ if ( getsym( sym_name ) == 0 ){ 
     
     //printf( "%s is an undeclared identifier\n", sym_name ); 
     return 1;
   }
   return 0;
}
  
%}


%define parse.lac full
%define parse.error verbose


%union {
  int intVal;
  char* dataType;
  char* strVal;
  /*float floatVal;*/
  char charVal;
}

%start PROGRAMM_DEF

%token <charVal>  CHARACTER_VALUE
%token <intVal>   INTEGER_VALUE
/*%token <floatVal> FLOAT_VALUE*/
%token <strVal> STRING_VALUE
%token <comntOne> ONELINE_COMNT


%token <intVal> INTEGER
/*%token <floatVal> FLOAT*/
%token <charVal> CHAR
%token <strVal> STRING
/*%token <dataType> DATA_TYPE*/
%token <strVal>  IDENTIFIER  ARRAY_IDENTIFIER
/*%token <strVal> STRUCT
*/




%token PROGRAM STARTMAIN ENDMAIN /*here is the added feature for my grammar */
%token WHILE ENDWHILE FOR TO STEP ENDFOR
%token FUNCTION RETURN END_FUNCTION STRUCT ENDSTRUCT TYPEDEF imag_type
%token IF THEN ELSEIF ELSE ENDIF SWITCH CASE DEFAULT ENDSWITCH
%token PRINT BREAK
%token VARS COMMA   SINGLE_QUOTES   SEMI_COLON   EQUALS COLON
%token  BRACKET_OPEN  BRACKET_CLOSE   CURLY_BRACE_OPEN  CURLY_BRACE_CLOSE BIG_BRACKET_OPEN  BIG_BRACKET_CLOSE LEFT_APOSTR RIGHT_APOSTR FOR_ASSIGN 
%token ANDOP OROP GRTOP LESSOP EQCHK NONEQCHK ADDOP SUBOP MULOP DIVOP POWOP



%left COMMA
%right EQUALS
%left  ANDOP OROP
%left EQCHK NONEQCHK
%left GRTOP LESSOP 
%left ADDOP SUBOP
%left MULOP DIVOP
%left POWOP
%left BRACKET_OPEN BRACKET_CLOSE BIG_BRACKET_OPEN BIG_BRACKET_CLOSE




%%
 
  

PROGRAMM_DEF :  PROGRAM IDENTIFIER '\n' NEWLINE
                STRUCT_FN
                FUNCTION_DEC
                STARTMAIN NEWLINE
                VAR_DECL 
                COMMAND_BODY
                ENDMAIN
             | PROGRAM IDENTIFIER '\n' NEWLINE
                STRUCT_FN
                FUNCTION_DEC
                STARTMAIN NEWLINE
                COMMAND_BODY
                ENDMAIN
             |
                PROGRAM IDENTIFIER '\n' NEWLINE
                STRUCT_FN
                FUNCTION_DEC
                STARTMAIN NEWLINE
                ENDMAIN        

STRUCT_FN   : STRUCT_DEFN
            | STRUCT_DEFN STRUCT
            | /*i define structs to be optional->report definitions*/   

STRUCT_DEFN : STRUCT imag_type'\n' NEWLINE 
              VAR_DECL
              ENDSTRUCT NEWLINE                                            
            | TYPEDEF STRUCT imag_type'\n' NEWLINE 
              VAR_DECL
              imag_type ENDSTRUCT NEWLINE

             
 /*imaginary type for struct,we define that structs will be of only a single type,a statement  included in the report also*/

NEWLINE :
        | '\n'

        

FUNCTION_DEC : FUNCTION_DECLARATION
             |
             ;

FUNCTION_DECLARATION:  FUNCTION_STRC 
                     | FUNCTION_STRC FUNCTION_DECLARATION
                     ; 


FUNCTION_STRC:     FUNCTION IDENTIFIER BRACKET_OPEN FUNC_PARAMS BRACKET_CLOSE '\n' 
                   FUNC_BODY 
                   END_FUNCTION NEWLINE 
                   {    //install( $2 );
                         if(install( $2 ) == 1){
                            char stringAlrd[500] = "Existing definition for function ";
  
                            char *funcName = $2;
   
                            strcat(stringAlrd, funcName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd);     
                            }
                     }
                         
                  
FUNC_PARAMS : INTEGER_VALUE
            | STRING_VALUE
            | IDENTIFIER /*paradoxi oti oi parametroi gia mia synartisi einai eite integer,strings kai onomata metabliton,gia tis metablites den xreiazetai na exoun dilothei */
            | FUNC_PARAMS COMMA FUNC_PARAMS


FUNC_BODY : VAR_DECL 
            COMMAND_BODY   
            RETURN RTN_VAL NEWLINE
          | COMMAND_BODY 
            RETURN RTN_VAL NEWLINE 
          | VAR_DECL 
            RETURN RTN_VAL NEWLINE
          | RETURN RTN_VAL NEWLINE
          ;      


VAR_DECL : VAR_BODY
         | VAR_BODY VAR_DECL


VAR_BODY : VARS DATA_TYPE VAR_LIST SEMI_COLON NEWLINE  /*make a good recursion so that multiple variable declarations are supported and dont forget to always include the empty rule at the end but this produces many conflicts so check your overall grammar definitions*/
         
          

DATA_TYPE : CHAR
          | INTEGER
          | STRUCT imag_type/*we define also a spesific struct imag_type as an alternative type for struct variables*/



VAR_LIST : DECL_ID
         | VAR_LIST COMMA VAR_LIST 




DECL_ID: CHARACTER_VALUE  /*you can delete this and just place in VAR_DECL the VAR_ID rule,this rule was created to install the symbols we are declaring as variables in the programm*/
       | IDENTIFIER 
       { 
          if(install( $1 ) == 1){
             char stringAlrd[500] = "Existing definition for variable ";
  
             char *varName = $1;
   
                            strcat(stringAlrd, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd); 

          } 
          
       }
       | ARRAY_IDENTIFIER
       { 
          if(install( $1 ) == 1){
             char stringAlrd[500] = "Existing definition for variable ";
  
             char *varName = $1;
   
                            strcat(stringAlrd, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(stringAlrd); 

          } 
          
       }

VAR_ID : CHARACTER_VALUE 
       | IDENTIFIER 
       {    //install( $2 );
                         if(context_check( $1 ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = $1;
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }
       | ARRAY_IDENTIFIER
       {    //install( $2 );
                         if(context_check( $1 ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = $1;
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }

//FUNC_VAR:    /*this is a rule for just the variables that are used as parameters inside the*/       


RTN_VAL : LITERAL
        | VAR_ID 
        ;
        

LITERAL : INTEGER_VALUE
        | STRING_VALUE



COMMAND_BODY : COMMAND 
             | COMMAND COMMAND_BODY /*i make this command body so that we can skip commands if we want so */ 
             ;
 
COMMAND : ASSIGN_CMD NEWLINE
        | LOOP_CMD  NEWLINE
        | CONTRL_CMD NEWLINE
        | PRINT_CMD NEWLINE
        | BREAK_CMD NEWLINE
 /*we just ignore anything after % until the end of line,later we will do multiline comments with states */        
        

ASSIGN_CMD :   VAR_ID EQUALS EXPRESSION SEMI_COLON 
         

 

LOOP_CMD : WHILE_CMD
         | FOR_CMD

WHILE_CMD : WHILE BRACKET_OPEN LOGIC_COND BRACKET_CLOSE NEWLINE
            COMMAND_BODY 
            ENDWHILE 
          /*we accept and empty whiles->anafora*/

LOGIC_COND : 
            EXPRESSION LOGIC_OP EXPRESSION /*skepsou an edo xreiazetai anadromi*/

LOGIC_OP :       ANDOP 
            |    OROP 
            |    GRTOP 
            |    LESSOP 
            |    EQCHK 
            |    NONEQCHK 
            

FOR_CMD : FOR VAR_ID FOR_ASSIGN INTEGER_VALUE TO INTEGER_VALUE STEP INTEGER_VALUE NEWLINE 
          COMMAND_BODY
          ENDFOR 
         

CONTRL_CMD : IF_CMD
           | SWITCH_CMD

IF_CMD : IF BRACKET_OPEN LOGIC_COND BRACKET_CLOSE THEN NEWLINE
         COMMAND_BODY 
         ELIF_STR 
         ELSE_BOD 
         ENDIF  

ELIF_STR : ELIF
         |
         ; 

ELIF: ELIF_BOD
    | ELIF_BOD ELIF
    ; 

ELIF_BOD : ELSEIF NEWLINE
           COMMAND_BODY        /*0 one or more else ifs*/                    /*so we can have recursion and repeat else ifs */  
         ;

ELSE_BOD : ELSE NEWLINE
           COMMAND_BODY        /*0 or 1 else since its not must have in an if command like else ifs above*/
         | 
         ;

SWITCH_CMD : SWITCH BRACKET_OPEN EXPRESSION BRACKET_CLOSE NEWLINE
             CASE_BOD 
             DEFAULT_BOD 
             ENDSWITCH

CASE_BOD : CASE_STR 
         | CASE_STR CASE_BOD
         ;

CASE_STR    :  CASE BRACKET_OPEN EXPRESSION BRACKET_CLOSE COLON NEWLINE
               COMMAND_BODY


DEFAULT_BOD :             /*0 or 1 default permitted*/
            |  DEFAULT COLON NEWLINE
               COMMAND_BODY         
            |  DEFAULT COLON NEWLINE

PRINT_CMD : PRINT BRACKET_OPEN LEFT_APOSTR TEXT RIGHT_APOSTR BIG_BRACKET_OPEN COMMA VAR_ID BIG_BRACKET_CLOSE BRACKET_CLOSE SEMI_COLON 
          | PRINT BRACKET_OPEN LEFT_APOSTR TEXT RIGHT_APOSTR BRACKET_CLOSE SEMI_COLON   /*proairetiki dilosi metablitis stin print*/

TEXT : TEXT_MUL
     |

TEXT_MUL : TEXT_SINGL
         | TEXT_SINGL TEXT_MUL


TEXT_SINGL : STRING_VALUE 
           | CHARACTER_VALUE 
           | IDENTIFIER     
           | ARRAY_IDENTIFIER

 

BREAK_CMD : BREAK SEMI_COLON


EXPRESSION : EXPR_PART
           | EXPR_PART BASIC_OPER EXPRESSION
           | BRACKET_OPEN EXPRESSION BRACKET_CLOSE
      
           

EXPR_PART       : INTEGER_VALUE /*NOTE!!!!! here note that we can recognise an expression like var2 = var3 + 5 * 2^(3/(var1+var3)); but not one like var2 = var3 + 5 * 2^(3-7/(var1+var3)); so you need to fix what causes a - or + operation not to work properly like in this scenario described here->maybe grammar is not complete or precedence with +-*/
                | VAR_ID 
                | FUNC_CALL  
                

FUNC_CALL: IDENTIFIER BRACKET_OPEN FUNC_PARMSCALL BRACKET_CLOSE 
{if(context_check( $1 ) == 1) {
  
  char stringSampl[500] = "Not existing declaration for function ";
  
  char *funcName = $1;
   
  strcat(stringSampl, funcName);

  //printf("Here is the name of func %s",stringSampl);

  yyerror(stringSampl);
  } 
 }

FUNC_PARMSCALL :  INTEGER_VALUE
            | STRING_VALUE
            | IDENTIFIER /*paradoxi oti oi parametroi gia mia synartisi einai eite integer,strings kai onomata metabliton,gia tis metablites den xreiazetai na exoun dilothei */
            {    //install( $2 );
                         if(context_check( $1 ) == 1){
                            char notDefVarF[500] = "Not existing definition for variable ";
  
                            char *varName = $1;
   
                            strcat(notDefVarF, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVarF);     
                            }
                     }
            | ARRAY_IDENTIFIER
                        {    
                           if(context_check( $1 ) == 1){
                            char notDefVar[500] = "Not existing definition for variable ";
  
                            char *varName = $1;
   
                            strcat(notDefVar, varName);

                            //printf("Here is the name of func %s",stringSampl);

                            yyerror(notDefVar);     
                            }
                     }         
            | FUNC_PARAMS COMMA FUNC_PARAMS

BASIC_OPER : ADDOP
           | SUBOP
           | MULOP
           | DIVOP
           | POWOP

%%


int main(){

  yyparse();
  printf("No Errors!!\n");

  return 0;
}

