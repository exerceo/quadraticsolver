/*  Date: 12/08/2017
 *  Class: CS4900
 *  Function: Unit Tests (t2.c)
 *     - Tests the input_numbers function
 *     - Should return 0 for successful unit tests.
 */

#include <stdio.h>
#include <stdlib.h>
#include "cunit.h"
#include "../input/input.h"

int main() {
	char *input = malloc(sizeof(char) * 256);
	double inputs[3];
	double in1, in2, in3;
	int ret;
	cunit_init();

	// good unit test; should return 0
	input = "1 2 3";
	in1 = 1.0;
	in2 = 2.0;
	in3 = 3.0;
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, 0);
	assert_feqrerr("inputs[0]", inputs[0], in1, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[1]", inputs[1], in2, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[2]", inputs[2], in3, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	input = "3 2 1";
	in1 = 3.0;
	in2 = 2.0;
	in3 = 1.0;
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, 0);
	assert_feqrerr("inputs[0]", inputs[0], in1, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[1]", inputs[1], in2, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[2]", inputs[2], in3, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	input = "3.5 21 1.21";
	in1 = 3.5;
	in2 = 21.0;
	in3 = 1.21;
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, 0);
	assert_feqrerr("inputs[0]", inputs[0], in1, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[1]", inputs[1], in2, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[2]", inputs[2], in3, 10.0*cunit_dmacheps );

	// good unit test; should return 0
	input = "8.5123 13321.1232323 1555.21123154151325";
	in1 = 8.5123;
	in2 = 13321.1232323;
	in3 = 1555.21123154151325;
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, 0);
	assert_feqrerr("inputs[0]", inputs[0], in1, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[1]", inputs[1], in2, 10.0*cunit_dmacheps );
	assert_feqrerr("inputs[2]", inputs[2], in3, 10.0*cunit_dmacheps );

	// good unit test; should return -1
	input = "";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "1 2";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "5 9 3 a";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "1 2 1 1";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "1 2 1 1 1";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "a b c";
	ret = input_numbers(input, inputs);
	assert_eq("ret", ret, -1);

	exit(0);
}