#include <stdio.h>
#include <math.h>
#include "precision.h"

double absolute_error(double measured, double actual) {
	return fabs(measured-actual);
}

double relative_error(double measured, double actual) {
	return (absolute_error(measured, actual))/(actual);
}

int main(int argc, char *argv[]) {
	double measured = 5.1;
	double actual = 5.2;

	printf("Measured: %f, Actual: %f\n", measured, actual);
	printf("Absolute Error: %f\n", absolute_error(measured, actual));
	printf("Relative Error: %f\n", relative_error(measured, actual));
}