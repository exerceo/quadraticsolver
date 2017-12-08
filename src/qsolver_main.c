/*  Date: 12/07/2017
 *  Class: CS4900
 *  Function: Quadratic Solver Main Program (qsolver_main.c)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input/input.h"
#include "qsolver_math/qsolver.h"

int main(int argc, char* argv[]){
	int ret;
	char input[500];
	double inputs[3];
	double x1, x2;

	printf("Please type all 3 numbers on the same line. To exit the program, type 'exit'\n");
	printf("Example:\n");
	printf("   > 2.0 5 -3.0\n");
	printf("   Roots are: x1: 0.500000 and x2: -3.000000\n\n");

	while (1) {
		printf("> ");
		read_line(input, 500);

		if (strcmp(input, "exit\n") == 0)
			exit(1);

		ret = input_numbers(input, inputs);
		if (ret == -1) {
			printf("ERROR: input contains a INF\n\n");
			continue;
		} else if (ret == -2) {
			printf("ERROR: input contains a NAN\n\n");
			continue;
		}

		ret = qsolver(inputs[0], inputs[1], inputs[2], &x1, &x2);

		switch(ret) {
			case -2:
				printf("No real roots\n\n");
				break;
			case -1:
				printf("Not a quadratic equation (a == 0)\n\n");
				break;
			case 0:
				printf("Roots are: x1: %f and x2: %f\n\n", x1, x2);
				break;
			case 1:
				printf("Double real root: %f\n\n", x1);
				break;
			default:
				fprintf(stderr,"System failure: qsolver error code=%d", ret);
				exit(1);
				break;
		}
	}
}
