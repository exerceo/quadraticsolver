#include <stdio.h>
#include "input/input.h"
#include "qsolver_math/qsolver.h"

int main(int argc, char* argv[]){
	int ret;
	char input[500];
	double inputs[3];

	printf("Please all 3 numbers on the same line.\n\n");
	printf("Example:\n2.0 5 -3.0\n\n");
	read_line(input, 500);
	printf("\n");

	input_numbers(input, inputs);

	double x1, x2;

	ret = qsolver(inputs[0], inputs[1], inputs[2], &x1, &x2);

	if (ret){
		printf("The given input is not valid for square roots in the quadratic formula.\nExiting.\n");
	} else {
		printf("The two solutions are: %f and %f\n", x1, x2);
	}
}
