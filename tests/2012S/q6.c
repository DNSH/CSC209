#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int turn = 0;

void handler(int code) {
	if(turn == 0) {
		fprintf(stderr, "First\n");
		turn = 1;
//		kill(getpid(), SIGTERM);
//		kill(getpid(), SIGQUIT);
		/* D */
	} else {
		fprintf(stderr, "Second\n");
		kill(getpid(), SIGQUIT);
	}

	fprintf(stderr,"Here\n");
}

int main() {
	struct sigaction sa;
	sa.sa_handler = handler;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGQUIT);

	//kill(getpid(), SIGTERM);
	/* A*/

	sigaction(SIGTERM, &sa, NULL);

	kill(getpid(), SIGTERM);
	/* B */

	fprintf(stderr, "Done\n");

	kill(getpid(), SIGTERM);
	/* C */
	return 0;
}
