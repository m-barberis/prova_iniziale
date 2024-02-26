#include "stupid_math.h"

float mean(int a, int b) {
		return (float)(a + b)/(float)2;
}

complex_float_t complex_mean(complex_int_t a, complex_int_t b) {
	complex_float_t res = {0, 0};
	res.re = (a.re + b.re)/2;
	res.im = (a.im + b.im)/2;

	return res;
}
