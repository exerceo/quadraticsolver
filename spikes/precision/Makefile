CC=gcc
CFLAGS=-Wall

default: precision

precision.o: precision.c precision.h
	${CC} ${CFLAGS} -c precision.c

precision: precision.o
	${CC} ${CFLAGS} -o precision precision.o -lm

clean:
	rm -rf *.o precision