/*  Date: 12/07/2017
 *  Class: CS4900
 *  Function: Quadratic Solver Input (input.c)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char* input, int length){
	#ifdef DEBUG 
		fprintf(stderr, "DEBUG: Entering read_line\n");
		fprintf(stderr, "DEBUG: input = %s | length = %d\n", input, length);
	#endif

	char* pos = fgets(input, length, stdin);
	if (pos == NULL){
		return -1;
	}
	return strlen(input);
}

int input_numbers(char* input, double returns[]){
	#ifdef DEBUG 
		fprintf(stderr, "DEBUG: Entering input_numbers\n");
		fprintf(stderr, "DEBUG: input = %s | &returns = %f\n", input, *returns);
	#endif

	char ch;
	double a, b, c;

	if (sscanf(input, "%lf %lf %lf %c", &a, &b, &c, &ch) != 3)
		return -1;

	returns[0] = a;
	returns[1] = b;
	returns[2] = c;

	return 0;
}