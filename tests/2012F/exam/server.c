#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>        /* for getenv */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>    /* Internet domain header */

#ifndef PORT
#define PORT 3000
#endif

/* socket, bind, listen, accept */

int socket_fd;

/* Create your socket */
socket_fd = socket(AF_INET, SOCK_STREAM, 0);

/*
Bind your socket to a name 
int bind(int sockfd, const struct sockaddr *servaddr, socklen_t addrlen)
*/

struct sockaddr_in self{
	self.sin_family = AF_INET;
	self.sin_port = PORT;
	self.sin_addr.s_addr = INADDR_ANY;
}

//NOT FINISHED

bind(socket_fd,	
