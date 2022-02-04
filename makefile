all:	
	bison -d y.y
	flex lex.l 
	gcc lex.yy.c y.tab.c y.tab.h -o output

clean:
	rm lex.yy.c y.tab.c y.tab.h output.exe