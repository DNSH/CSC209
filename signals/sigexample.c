#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


//Step 1: setup a signal handling function
	void handler(int sig) {
		printf("Sending a SIGINT signal to my function\n");
		//return 0;
	}

int main(void) {

	struct sigaction sa;

	sa.sa_handler = &handler;
	sigaction(SIGINT, &sa, NULL);

	while(1) {
		sleep(2);
		printf("...");

	}

	return 0;
}
