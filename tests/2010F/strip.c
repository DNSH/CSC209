#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strip(char *src, char *ch) {
	//remove characters in ch from src

	int i = 0; //iterator over src 
	int k = 0; //iterator over new src

	while (i < strlen(src)) {
		int j = 0; //iterator over ch that must be reset for each i
		while (j < strlen(ch) && ch[j] != src[i]) {
			j++; //ch[j] was not in src
		}

		if (j >= strlen(ch)) {
			//add current char in str to new str
			src[k] = src[i];
			k++;
		}
		i++; //advance in str
	}
	
	src[k] = '\0';
	
}

int main(int argc, char *argv[]) {

	char greeting[20] = "Hello my friend";
	char *remove = "lom ";

	printf("Remove %s from %s\n", remove, greeting);

	strip(greeting, remove);

	printf("%s\n", greeting);

	return 0;
}

