#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


	//E)
	char postal[6] = "M4A";
	strncat(postal, "3K5", 4);
	int i;
	
	for(i=0;i<=7;i++){
		printf("Char at index %d is %c\n", i, postal[i]);
	}

	printf("String postal is %s\n", postal);

	return 0;
}
