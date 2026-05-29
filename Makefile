CC = gcc
CFLAGS = -g -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: solucion1

solucion1: turtlec.c examples/solucion1.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/solucion1.c -o solucion1 $(LDLIBS)

clean:
	rm -f solucion1
