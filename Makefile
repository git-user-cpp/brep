brep: clear
	clang src/main.c src/menu.c src/fun.c -o brep -Wall -pedantic

clear:
	@rm -f brep
