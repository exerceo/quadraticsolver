/* 
 * Based on examples found from the following stack overflow thread:
 * https://stackoverflow.com/questions/1923837/how-to-use-nan-and-inf-in-c
 */

#include <stdio.h>
#include <math.h>

int main() {
	#ifdef NAN
		/* NAN is supported */
		printf("NAN supported\n");
	#endif
	#ifdef INFINITY
		/* INFINITY is supported */
		printf("INFINITY supported\n");
	#endif

	float a = NAN;

	/* should print "a is NAN" */
	if (isnan(a)) 
		printf("a is NAN\n");

	/* should also print "a is NAN" */
	if (a != a)
		printf("a is NAN\n");

	/* should print "a is not INF" */
	if (!isinf(a))
		printf("a is not INF\n");

	float b = INFINITY;

	/* should print "b is INF" */
	if (isinf(b))
		printf("b is INF\n");

	/* should print "b is not NAN" */
	if (!isnan(b))
		printf("b is not NAN\n");


	double _NAN = 0.0/0.0;
	double POS_INF = 1.0 /0.0;
	double NEG_INF = -1.0/0.0;
	printf("NAN: %f\n", _NAN);
	printf("POS_INF: %f\n", POS_INF);
	printf("NEG_INF: %f\n", NEG_INF);

	/* should print "NAN is NAN" */
	if (isnan(_NAN))
		printf("NAN is NAN\n");
}