default:
	rm -f lex.yy.c tema.tab.c tema.tab.h tema
	bison -d tema.y
	flex tema.l
	g++ IdList.cpp lex.yy.c  tema.tab.c -std=c++11 -o $1