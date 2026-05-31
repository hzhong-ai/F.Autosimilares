CC = gcc
CFLAGS = -g -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: Arbolejem Arbolvariant Levyejem RetoArbol1 RetoArbol2

Arbolejem: turtlec.c SOLUCIONES_LAB/Arbolejem.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c SOLUCIONES_LAB/Arbolejem.c -o Arbolejem $(LDLIBS)

Arbolvariant: turtlec.c SOLUCIONES_LAB/Arbolvariant.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c SOLUCIONES_LAB/Arbolvariant.c -o Arbolvariant $(LDLIBS)

Levyejem: turtlec.c SOLUCIONES_LAB/Levyejem.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c SOLUCIONES_LAB/Levyejem.c -o Levyejem $(LDLIBS)

RetoArbol1: turtlec.c SOLUCIONES_LAB/RetoArbol1.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c SOLUCIONES_LAB/RetoArbol1.c -o RetoArbol1 $(LDLIBS)

RetoArbol2: turtlec.c SOLUCIONES_LAB/RetoArbol2.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c SOLUCIONES_LAB/RetoArbol2.c -o RetoArbol2 $(LDLIBS)

clean:
	rm -f Arbolejem Arbolvariant Levyejem RetoArbol1 RetoArbol2
