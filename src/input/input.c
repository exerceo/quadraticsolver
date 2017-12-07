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
		fprintf(stderr, "DEBUG: input = %s | &returns = %d\n", input, &returns);
	#endif

	double a, b, c;
	sscanf(input, "%lf %lf %lf", &a, &b, &c);
	returns[0] = a;
	returns[1] = b;
	returns[2] = c;

	return 0;
}