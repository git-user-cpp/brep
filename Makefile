brep: clear
	clang src/main.c src/menu/menu.c src/functionality/fun.c -o brep -Wall -pedantic

clear:
	@rm -f brep
