CC = gcc
C_FLAGS = -Wall -pedantic -std=c99
LIBS = -lm

qsolver: build_input build_qsolver
	$(CC) qsolver_main.c input.o qsolver.o $(C_FLAGS) $(LIBS) -o qsolver

build_input: input/input.c
	$(CC) input/input.c -c $(C_FLAGS) 

build_qsolver: qsolver_math/qsolver.c
	$(CC) qsolver_math/qsolver.c -c $(C_FLAGS)

clean:
	rm *.o
	rm qsolver