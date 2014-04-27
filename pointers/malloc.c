#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_function(int *x, int y[]) {
	*x = 7;
	y = malloc(5 * sizeof(int));
	y[2] = 44;
}

int main(void) {

	/*

	int y[3] = {11, 22, 33};
	int x;
	//int x = 12;
	test_function(&x, y);
	y[0] = x;
	x = 1;
	y[1] = x;

	printf("%d\n", y[0]);
        printf("%d\n", y[1]);
        printf("%d\n", y[2]);
        printf("%d\n", y[3]);
        printf("%d\n", y[4]);	

	*/

	//testing char ** example

	char **names = malloc(4 * sizeof(char *));
	char name0[] = "Jeff";
	char name1[] = "David";
	char name2[] = "Jane";
	char name3[] = "Zoe";
	
	names[0] = name0;
	names[1] = name1;
	names[2] = name2;
	names[3] = name3;

	printf("%s\n%s\n%s\n", names[1], names[2], names[3] );
	printf("%c\n", names[1][2]);
	printf("%c\n", *(names + 1)[2]);

	return 0;
}
