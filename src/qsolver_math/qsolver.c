/*  Date: 10/29/2017
 *  Class: CS4900
 *  File: Quadratic Solver Function
 */

#include <math.h>
#include "qsolver.h"

int qsolver(double a, double b, double c, double *x1, double *x2) {
	double disc, sqrt_disc;

	if (a == 0.0) {
		return 3;
	}

	disc = b*b-4.0*a*c;

	if (disc < 0.0) {
		return 2;
	} else if (disc == 0.0) {
		return 1;
	}

	sqrt_disc = sqrt(disc);

	*x1 = ((-b)+sqrt_disc)/(2*a);
	*x2 = ((-b)-sqrt_disc)/(2*a);

	return 0;
}