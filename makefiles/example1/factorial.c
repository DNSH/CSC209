#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int factorial(int d) {

	int computed = d;

	if (d <= 0) {
		return -1;
	}

	while (d != 1) {
		computed = computed * (d - 1);
		d = (d - 1);
//		printf("Value of d is %d\n", d);
	}

//	printf("Computed value is %d\n", computed);

	return computed;
}
