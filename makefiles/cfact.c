#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {

	print_hello();

	printf("Enter a number:");

	int d; 
	scanf("%d", &d);

	int factorial_d = factorial(d);

	printf("The factorial of %d is %d\n", d, factorial_d);

	return 0;
}
