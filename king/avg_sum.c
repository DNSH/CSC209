/* Chapter 11, Section 11.4, Question #3 - King */

#include <stdio.h>
#include <stdlib.h>

void avg_sum(double a[], int n, double *avg, double *sum) {
	int i;

	for (i=0;i<n;i++){
		*sum += a[i];
	}

	*avg = (*sum / n);
}

int main(void) {

	double a[] = {0, 2.2, 5.5, 21.31342, 7.1111, 4, 13};
	double avg = 0, sum = 0;
	int n = sizeof(a) / sizeof(a[0]);

	avg_sum(a, n, &avg, &sum);

	printf("The average of elements in a is %f\n", avg);

	return 0;
}
