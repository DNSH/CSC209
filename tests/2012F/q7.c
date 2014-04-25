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

int main(void) {

	int fd[2];

	/*TODO:
	1. make a function to handle forking
		2. call this function twice (once with 12 as an arg, another with 49)
		3. write to the pipe in each child
	3. call read in the parent process
	*/

    return 0;
}

