default:
	rm -f lex.yy.c limbaj.tab.c limbaj.tab.h limbaj
	bison -d limbaj.y
	flex limbaj.l
	g++ IdList.cpp lex.yy.c  limbaj.tab.c -std=c++17 -o limbaj