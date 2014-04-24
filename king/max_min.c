/* Finds the largest and smallest elements in an array */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {

	int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int max, min;

	max_min(a, N, &max, &min);

    printf("The new max is %d and the new min is %d\n", max, min);

	return 0;
}

void max_min(int a[], int n, int *max, int *min) {
	
	int i;
	
	for (i = 0; i < n; i++) {
		if (a[i] > *max) {
			*max = a[i];
		} else if (a[i] < *min) {
			*min = a[i];
		} else {}
	}
}
