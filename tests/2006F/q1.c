#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char *str[4];
	char *ptr;	
	char a[30] = "pointers are no fun";
	str[0] = a;
	str[1] = strchr(a, ' ') + 1;
	str[2] = str[1] + 4;
	ptr = strchr(str[1], ' ');
	printf("%s\n%s\n%s\n", str[0], str[1], str[2]);

	

	return 0;
}
	

