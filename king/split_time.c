/*Chapter 11, Section 11.4, Question 5 - King */

#include <stdio.h>
#include <stdlib.h>

void split_time(long seconds, int *hr, int *min, int *sec) {

	*hr = seconds / 3600;
	*min = (seconds % 3600) / 60;
	*sec = seconds % 60;

}

int main(int argc, char *argv[]) {

	int hr, min, sec;
	long total_sec = (long) atoi(argv[1]);

	split_time(total_sec, &hr, &min, &sec);
	printf("%d converts to: %dh %dm, and %ds\n", total_sec, hr, min, sec);

	/* long seconds = 7322;

	hr = seconds / 3600;
	min = (seconds % 3600) / 60;
	sec = seconds % 60;

	printf("%dh, %dm and %ds\n", hr, min, sec); */

	return 0;
}
