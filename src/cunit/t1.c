#include <stdlib.h>
#include "cunit.h"
#include "../qsolver_math/qsolver.h"

int main() {
	double a, b, c, x1, x2;
	int ret;
	cunit_init();

	// good unit test
	a = 2.0;
	b = 5.0;
	c = -3.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, x2, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, x1, 10.0*cunit_dmacheps );
	exit(0);
}