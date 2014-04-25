#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 20, j = 30;

	int *p, *q;

	p = &i;
	q = &j;

	printf("The value at p is %d\n", *p);
    	printf("The value at q is %d\n", *q);

	printf("Changing values\n");

	*p = 40;
	
    	printf("The value at p is %d\n", *p);

	return 0;
}
