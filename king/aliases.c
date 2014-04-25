#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 5;
	int *p = &i;

	printf("The value of *p is %d\n", *p);
    printf("The value of &p is %p\n", &p);
    printf("The value of *&p is %p\n", *&p);
    printf("The value of &*p is %p\n", &*p);
    printf("The value of *i is CANNOT COMPILE\n");
    printf("The value of &i is %p\n", &i);
    printf("The value of *&i is %d\n", *&i);
    printf("The value of &*i is CANNOT COMPILE\n");

	return 0;
}
