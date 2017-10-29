/*  Date: 10/29/2017
 *  Class: CS4900
 *  File: Quadratic Solver Function
 */

#include <math.h>
#include "qsolver.h"

int qsolver(double a, double b, double c, double *x1, double *x2) {
	double disc, sqrt_disc;

	disc = b*b-4*a*c;

	if (disc < 0.0) {
		// logging
		return 3;
	} else if (disc == 0.0) {
		// logging
		return 2;
	}

	sqrt_disc = sqrt(disc);

	*x1 = (-b+sqrt_disc)/(2*a);
	*x2 = (-b-sqrt_disc)/(2*a);

	return 1;
}