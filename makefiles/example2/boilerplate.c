#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int factorial(int d) {

	int computed = d;

	if (d <= 0) {
		return -1;
	}

	while (d >= 0) {
		computed *= (d - 1);
		d = (d - 1);
	}

	return computed;
}
