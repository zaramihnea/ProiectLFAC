default:
	rm -f lex.yy.c tema.tab.c tema.tab.h tema
	bison -d tema.y
	flex tema.l
	gcc -o tema lex.yy.c tema.tab.c -ll