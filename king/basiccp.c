#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	FILE * mysource;
	FILE * mydest;

	//validate arguments
	if ((int) argv != 3) {
		printf("usage: mycp [source] [dest]");
	}

	//open source file
	//FILE * fopen(char * source, char * mode);
	mysource = fopen(argv[1], "r");

	//open destination file
	mydest = fopen(argv[2], "w");

	//perform write
	//for(;;)
	char mychar;
	while ((mychar = getc(mysource)) != EOF) {
		putc(mychar, mydest);
	}

	return(0);
}
