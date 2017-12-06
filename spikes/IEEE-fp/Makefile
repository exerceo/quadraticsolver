CC = gcc
C_FLAGS = -Wall -pedantic -std=c99
LIBS = -lm

default: nan-inf

nan-inf.o: nan-inf.c
	${CC} ${CFLAGS} -c nan-inf.c

nan-inf: nan-inf.o
	${CC} ${CFLAGS} ${LIBS} -o nan-inf nan-inf.o

clean:
	rm -rf *.o nan-inf