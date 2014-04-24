#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
	pid_t pid;
	int status;
	pid = fork();

	if (pid == -1) {
		perror("fork");
		exit(1);
	}

	if (pid > 0) {
		/* parent */
		if((wait(&status)) == -1) {
			perror("wait");
			exit(1);
		}
		if(WIFEXITED(status)) {
			printf("Child exit status: %d\n", WEXITSTATUS(status));
		} else {
			printf("What happened?\n");
		}

		printf("Parent starts [%d] parent is[%d]\n", getpid(), getppid());
		sleep(60);
		printf("Parent ends [%d]\n", getpid());

	} else { 
		/* child */
		printf("Child starts [%d]parent is [%d]\n", getpid(), getppid());
		sleep(1);
		printf("Child ends [%d]parent is [%d]\n", getpid(), getppid());
		exit(0);
	}

	printf("But I really end here [%d]\n", getpid());
	return 4;
}
