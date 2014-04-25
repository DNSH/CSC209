/*
5. [12 marks]
Write the library function "fgets" in terms of getc().
*/

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

char * fgets_new(char *s, int n, FILE *stream) {
	
	int i;
	char c;

	for (i=0; i < n; i++) {
		c = getc(stream);
		s[i] = c;
	}

	//TODO: handle EOF and \n cases

	return s;

}

int main(void) {
	
	int n = BUFSIZE;
	char *s = malloc(BUFSIZE * sizeof(char));
	FILE *stream;

	stream = fopen("testfile", "r");

	fgets_new(s, n, stream);

	printf("The value of s is %s\n", s);

	return 0;
}
