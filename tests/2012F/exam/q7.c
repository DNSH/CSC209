/*
7. [15 marks]
Write a program which creates two child processes using fork(), each connected with a pipe so they can send data to the parent. 
One of the children writes the number "12" to the parent over its pipe. 
The other child writes the number "49" to the parent over its pipe. 
The parent reads both of these and adds them and outputs the sum to stdout.

Note: the children must execute in parallel; start them both before reading from either.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void handle_fork(int arg, int fd[]) {

	int pipefd[2];
	pipe(pipefd);

	pid_t pid;
	pid = fork();

	if (pid == 0) { //in child
		write(fd[1], &arg, sizeof(arg));
		exit(0);
	}

	else { //in parent

	}

}

int main(void) {

	int read_fd[2];

	handle_fork(12, read_fd[0]);
	handle_fork(49, read_fd[1]);

	int read_int[2];

	read(fd[0], read_ints[0], sizeof(int));
	read(fd[0], read_ints[1], sizeof(int));

	printf("%d + %d\n", read_ints[0], read_ints[1]);

	/*TODO:
	1. make a function to handle forking
		2. call this function twice (once with 12 as an arg, another with 49)
		3. write to the pipe in each child
	3. call read in the parent process
	*/

    return 0;
}

