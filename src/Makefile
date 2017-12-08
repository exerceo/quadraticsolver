CC = gcc
C_FLAGS = -Wall -pedantic -std=c99
LIBS = -lm

qsolver: build_input build_qsolver
	$(CC) qsolver_main.c input.o qsolver.o $(C_FLAGS) $(LIBS) -o qsolver

deploy: qsolver
	cp qsolver ../deployment

t1: build_qsolver build_cunit
	$(CC) cunit/t1.c cunit.o qsolver.o $(C_FLAGS) $(LIBS) -o t1

t2: build_input build_cunit
	$(CC) cunit/t2.c cunit.o input.o $(C_FLAGS) $(LIBS) -o t2

build_input: input/input.c
	$(CC) input/input.c -c $(C_FLAGS) 

build_qsolver: qsolver_math/qsolver.c
	$(CC) qsolver_math/qsolver.c -c $(C_FLAGS)

build_cunit: build_qsolver cunit/cunit.c
	$(CC) cunit/cunit.c -c $(C_FLAGS)

clean:
	rm -rf *.o qsolver t1 t2