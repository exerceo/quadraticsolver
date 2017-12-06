/*  Date: 10/29/2017
 *  Class: CS4900
 *  File: Quadratic Solver Function
 */

#include <math.h>
#include "qsolver.h"

int qsolver(double a, double b, double c, double *x1, double *x2) {
	double disc, sqrt_disc;

	if (a == 0.0) { /* not a quadratic */
		return -1;
	}

	disc = b*b-4.0*a*c;

	if (disc < 0.0) { /* no real roots */
		return -2;
	} else if (disc == 0.0) { /* double root */
		*x1 = -b / (2.0*a);
		*x2 = *x1;
		return 1;
	}

	sqrt_disc = sqrt(disc);

	/* two roots */
	*x1 = ((-b)+sqrt_disc)/(2*a);
	*x2 = ((-b)-sqrt_disc)/(2*a);

	return 0;
}