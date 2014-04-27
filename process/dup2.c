#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

	/*
	dup2 will duplicate file descriptors, making them aliases, and then deleting the old file descriptor
		dup2(new, old);
		Example: redirect stdout to a file --> dup2(file fd, stdout fd);
	
	*/

	FILE *file = fopen("testfile");

	return 0;
}
