#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(void) {

	int *p;
	*p = 12;

	printf("%d\n", *p);

	return 0;
}
