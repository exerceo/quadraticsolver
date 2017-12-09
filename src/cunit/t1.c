/*  Date: 12/08/2017
 *  Class: CS4900
 *  Function: Unit Tests (t1.c)
 *     - Tests the qsolver function
 *     - Should return 0 for successful unit tests.
 */

#include <stdlib.h>
#include "cunit.h"
#include "../qsolver_math/qsolver.h"

int main() {
	double a, b, c, x1, x2;
	double _x1, _x2;
	int ret;
	cunit_init();

	// good unit test; should return 0
	a = 2.0;
	b = 5.0;
	c = -3.0;
	_x1 = 0.5;
	_x2 = -3.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	a = 2.0;
	b = 6.0;
	c = 3.0;
	_x1 = -0.6339745962155614;
	_x2 = -2.3660254037844384;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	a = 9.0;
	b = 42.0;
	c = 5.0;
	_x1 = -0.1222501397630668;
	_x2 = -4.5444165269035999;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	a = 4.0;
	b = 9.0;
	c = 5.0;
	_x1 = -1.000000;
	_x2 = -1.250000;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	a = 12.3232;
	b = 35.0;
	c = 9.65;
	_x1 = -0.3094248309900807;
	_x2 = -2.5307465530660087;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 0);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 1
	a = 1.0;
	b = 2.0;
	c = 1.0;
	_x1 = -1.0;
	_x2 = -1.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 1);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return 1
	a = 2.0;
	b = 8.0;
	c = 8.0;
	_x1 = -2.0;
	_x2 = -2.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, 1);
	assert_feqrerr("x1", x1, _x1, 10.0*cunit_dmacheps );
	assert_feqrerr("x2", x2, _x2, 10.0*cunit_dmacheps );

	// good unit test; should return -2
	a = 1.0;
	b = 2.0;
	c = 3.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, -2);

	// good unit test; should return -1
	a = 0.0;
	b = 2.0;
	c = 3.0;
	ret = qsolver(a, b, c, &x1, &x2);
	assert_eq("ret", ret, -1);
	exit(0);
}