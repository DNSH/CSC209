#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char *argv[]) { //argc is the number of arguments, argv is an array of strings

	printf("The arguments to argv are %s and %s\n", argv[0], argv[1]);

	if (argc != 2) {
		printf("correct usage: sphereVolume (int)\n");
	}

	int radius = atoi(argv[1]);
	int volume = (4.0/3.0) * PI * (radius*radius);

	printf("The volume of sphere with radius %d is %d\n", radius, volume);

	return 0;
}

	
