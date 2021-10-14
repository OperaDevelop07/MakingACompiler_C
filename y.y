%{
  #include <stdio.h>
  #include <string.h>
  
  /*
  #include "HeaderFiles/langFunctions.h"
  #include "HeaderFiles/validators.h"
  */

  extern char Data_Type[50];

  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;
  
  /*
  void storeDataType(char*);
  int isDuplicate(char*, char*);
  void storeIdentifier(char*,char*);
  void DuplicateIdentifierError(char*);
  char* retrieveDataType();
  void clearBuffers();
  int isValidAssignment(char*);
  void AssignmentError(char*);
  char* extractIdentifier(char[]);

  //For Array Identifiers
  int noOfArrayIdentifiers=0;
  char extractedIdentifier[50][50];
  */
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
%token <strVal> STRUCT

%token PROGRAM STARTMAIN ENDMAIN /*here is the added feature for my grammar */
%token VARS EOL
%token WHILE ENDWHILE FOR TO STEP ENDFOR
%token FUNCTION RETURN END_FUNCTION
%token IF THEN ELSEIF ELSE ENDIF SWITCH CASE DEFAULT ENDSWITCH
%token PRINT BREAK
%token  COMMA   SINGLE_QUOTES   SEMI_COLON   EQUALS 
%token  BRACKET_OPEN  BRACKET_CLOSE   CURLY_BRACE_OPEN  CURLY_BRACE_CLOSE BIG_BRACKET_OPEN  BIG_BRACKET_CLOSE DOUBLE_QUOTES COLON FOR_ASSIGN COMNT_OP
%token ANDOP OROP GRTOP LESSOP EQCHK NONEQCHK ADDOP SUBOP MULOP DIVOP POWOP







//%type <strVal> DECLARATION
//%type <strVal> EXPRESSION
//%type <strVal> FUNCTION_DECLARATION 



%%
   

PROGRAMM_DEF :  PROGRAM IDENTIFIER NEWLINE
                FUNCTION_DECLARATION 
                STARTMAIN 
                VAR_DECL 
                COMMAND_BODY
                ENDMAIN EOL

NEWLINE:  '\n'
       | NEWLINE NEWLINE 

DATA_TYPE : CHAR
          | INTEGER        
        

FUNCTION_DECLARATION : 
                     | FUNCTION IDENTIFIER BRACKET_OPEN FUNC_PARAMS BRACKET_CLOSE 
                       FUNC_BODY 
                       END_FUNCTION 



FUNC_BODY : VAR_DECL 
            COMMAND_BODY
            RETURN RTN_VAL 
            
         

RTN_VAL : LITERAL
        | IDENTIFIER

LITERAL : INTEGER_VALUE
        | STRING_VALUE
        | CHARACTER_VALUE

FUNC_PARAMS : INTEGER_VALUE
            | STRING_VALUE
            | VAR_ID /*paradoxi oti oi parametroi gia mia synartisi einai eite integer,strings kai onomata metabliton,gia tis metablites den xreiazetai na exoun dilothei */
            | FUNC_PARAMS COMMA FUNC_PARAMS

VAR_DECL : NEWLINE
         | VARS DATA_TYPE VAR_LIST SEMI_COLON
         | VAR_DECL NEWLINE VAR_DECL

VAR_LIST : VAR_ID 
         | VAR_LIST COMMA VAR_LIST

VAR_ID : CHARACTER_VALUE
       | IDENTIFIER
       | ARRAY_IDENTIFIER

COMMAND_BODY : 
             | NEWLINE
             | COMMAND /*i make this command body so that we can skip commands if we want so */ 

COMMAND : ASSIGN_CMD
        | LOOP_CMD  
        | CONTRL_CMD
        | PRINT_CMD
        | BREAK_CMD
        | COMMENT_CMD /*we just ignore anything after % until the end of line,later we will do multiline comments with states */        

ASSIGN_CMD :  VAR_ID EQUALS EXPRESSION SEMI_COLON
           | ASSIGN_CMD NEWLINE ASSIGN_CMD
           | ASSIGN_CMD ASSIGN_CMD  

LOOP_CMD : WHILE_CMD
         | FOR_CMD

WHILE_CMD : WHILE BRACKET_OPEN LOGIC_COND BRACKET_CLOSE 
            COMMAND_BODY
            ENDWHILE
          /*we accept and empty whiles->anafora*/

LOGIC_COND : EXPRESSION LOGIC_OP EXPRESSION /*skepsou an edo xreiazetai anadromi*/

LOGIC_OP :       ANDOP 
            |    OROP 
            |    GRTOP 
            |    LESSOP 
            |    EQCHK 
            |    NONEQCHK 
            

FOR_CMD : VAR_ID FOR_ASSIGN INTEGER TO INTEGER STEP INTEGER 
          COMMAND_BODY
          ENDFOR

CONTRL_CMD : IF_CMD
           | SWITCH_CMD

IF_CMD : IF BRACKET_OPEN LOGIC_COND BRACKET_CLOSE THEN 
         COMMAND_BODY
         ELIF_BOD
         ELSE_BOD 
         ENDIF

ELIF_BOD : NEWLINE         /*0 one or more else ifs*/
         | ELSEIF
           COMMAND_BODY
         | ELIF_BOD ELIF_BOD /*so we can have recursion and repeat else ifs */  

ELSE_BOD : NEWLINE        /*0 or 1 else since its not must have in an if command like else ifs above*/
         | ELSE
           COMMAND_BODY


SWITCH_CMD : SWITCH BRACKET_OPEN EXPRESSION BRACKET_CLOSE
             CASE_BOD
             DEFAULT_BOD
             ENDSWITCH

CASE_BOD :  CASE BRACKET_OPEN EXPRESSION BRACKET_CLOSE COLON
            COMMAND_BODY
          | CASE_BOD CASE_BOD

DEFAULT_BOD : NEWLINE            /*0 or 1 default permitted*/
            |  DEFAULT COLON
               COMMAND_BODY         

PRINT_CMD : PRINT BRACKET_OPEN DOUBLE_QUOTES TEXT DOUBLE_QUOTES   BIG_BRACKET_OPEN COMMA VAR_ID BIG_BRACKET_CLOSE BRACKET_CLOSE SEMI_COLON

TEXT : 
     | STRING

COMMENT_CMD : ONELINE_COMNT 

BREAK_CMD : BREAK 



EXPRESSION : LITERAL
           | VAR_ID
           | FUNCTION
           | BRACKET_OPEN EXPRESSION BRACKET_CLOSE
           | EXPRESSION BASIC_OPER EXPRESSION

BASIC_OPER : ADDOP
           | SUBOP
           | MULOP
           | DIVOP
           | POWOP







/*
DECLARATION : EXPRESSION  SEMI_COLON                              { clearBuffers(); }
      |   FUNCTION_DECLARATION SEMI_COLON
      | STRUCT  IDENTIFIER  STRUCTURE_DEFINITION  SEMI_COLON  
      | STRUCT  IDENTIFIER  STRUCTURE_DEFINITION  IDENTIFIER_LIST   SEMI_COLON
      | DECLARATION EXPRESSION  SEMI_COLON                        { clearBuffers(); }
      | DECLARATION FUNCTION_DECLARATION SEMI_COLON                         
      | DECLARATION   STRUCT  IDENTIFIER  STRUCTURE_DEFINITION  SEMI_COLON
      | DECLARATION   STRUCT  IDENTIFIER  STRUCTURE_DEFINITION  IDENTIFIER_LIST   SEMI_COLON

      | error '>'                     {/* ' > ' stops execution all together }
      ;

VARIABLE_DECL : VARS 

EXPRESSION  : VARS DATA_TYPE IDENTIFIER              {
                                  if(!isDuplicate($2,retrieveDataType())){
                                    storeIdentifier($2,retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError($2);
                                  } 
                                }



      | EXPRESSION  EQUALS  NUMBER            {;}

      | EXPRESSION  COMMA IDENTIFIER          {
                                  if(!isDuplicate($3,retrieveDataType())){
                                    storeIdentifier($3,retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError($3);
                                  }
                                }




      | DATA_TYPE   ARRAY_IDENTIFIER            {
                                    
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($2));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType())){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                }

      | EXPRESSION  EQUALS  CURLY_BRACE_OPEN  PARAMETER_LIST  CURLY_BRACE_CLOSE  

      | EXPRESSION COMMA ARRAY_IDENTIFIER             {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($3));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType())){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }


      | error '>'                   {/* no need to call yyerror cuz of line 1570 of y.tab.c}
      ;
          

NUMBER    : INTEGER_VALUE                 {if(!isValidAssignment("int")){ AssignmentError(itoaa($1));}}
      | FLOAT_VALUE                   {if(!isValidAssignment("float")){ AssignmentError(ftoa($1));}}
      | CHARACTER_VALUE                 {if(!isValidAssignment("char")){ AssignmentError(ctoa($1));}   }
      | STRING_VALUE                  {if(!isValidAssignment("char*")){ AssignmentError($1);} }
      ;


PARAMETER_LIST  : NUMBER
         | PARAMETER_LIST  COMMA   NUMBER
          |   NUMBER EQUALS NUMBER                        { yyerror("Two or more equal signs are not allowed in C");} 
          |   error '>'
        ;


STRUCTURE_DEFINITION  : CURLY_BRACE_OPEN  DECLARATION   CURLY_BRACE_CLOSE
            ;

FUNCTION_DECLARATION : DATA_TYPE IDENTIFIER BRACKET_OPEN DATA_TYPE_LIST BRACKET_CLOSE {
  
                                          if(!isDuplicate($2,retrieveDataType())){
                                            storeIdentifier($2,retrieveDataType());
                                            storeDataType($1);
                                          }else{
                                            DuplicateIdentifierError($2);
                                          } 

                                        }
          ;

IDENTIFIER_LIST     : IDENTIFIER
            | IDENTIFIER_LIST   COMMA   IDENTIFIER
            ;

DATA_TYPE_LIST      : DATA_TYPE
            | DATA_TYPE_LIST  COMMA DATA_TYPE
            ;


*/
%%


int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}