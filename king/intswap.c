#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main(void) {

	int i = 2;
	int j = 3;

	printf("The value of i is %d and j is %d\n", i, j);
	swap(&i, &j);
    printf("The value of i is %d and j is %d\n", i, j);

	return 0;
}
