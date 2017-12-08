#include <stdio.h>
#include <stdlib.h>
#include "cunit.h"
#include "../input/input.h"

int main() {
	char *input = malloc(sizeof(char) * 256);
	double inputs[3];
	int ret;
	cunit_init();

	// good unit test; should return 0
	input = "1 2 3";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, 0);

	// good unit test; should return 0
	input = "3 2 1";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, 0);

	// good unit test; should return -1
	input = "1 2";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "1 2 1 1";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "1 2 1 1 1";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, -1);

	// good unit test; should return -1
	input = "a b c";
	ret = input_numbers(input, inputs) ;
	assert_eq("ret", ret, -1);

	exit(0);
}