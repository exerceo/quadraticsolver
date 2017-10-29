#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char* input, int length){
	char* pos = fgets(input, length, stdin);
	if (pos == NULL){
		return -1;
	}
	return strlen(input);
}

int input_numbers(char* input, double returns[]){
	double a, b, c;
	sscanf(input, "%lf %lf %lf", &a, &b, &c);
	returns[0] = a;
	returns[1] = b;
	returns[2] = c;

	return 0;
}