#include <stdio.h>
#include <stdlib.h>

/* find_largest: when passed an array of length n, return the largest element of array */

int find_largest(int array[], int length) {
	int temp = array[0];
	int i;
	for (i = 1; i < length; i++) {
		if (array[i] > temp) {
			temp = array[i];
		}
	}
	return temp;
}

int main(void) {

	int array[] = {3, 4, 9, 10, 39, 2, 3, 49, 33};
	int length = (sizeof(array) / sizeof(array[0]));
	int largest = find_largest(array, length);
	printf("The largest element of the array of size %d is %d\n", length, largest);

	return 0;
}
