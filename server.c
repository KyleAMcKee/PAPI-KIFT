#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
 
int main(void)
{
 
    char str[100];
    int sock;
	int	comm_fd; 
	char port_in[100];
	char *ret_ptr;
	int port;
    struct sockaddr_in info;
 
	/*
	** Create a socket, use IPv4 (AF_INET), and specify the socket type (SOCK_STEAM)
	** Zero out the struct and set necessary values -- htons converts from big to little endian (host to network)
   	*/	

    sock = socket(AF_INET, SOCK_STREAM, 0);
    bzero(&info, sizeof(info));
    info.sin_family = AF_INET;
    info.sin_addr.s_addr = htons(INADDR_ANY);

	/* 
	** Get port info from user and verify that input is an integer / in the correct port range
	*/

	printf("Gimme a port, friend: ");
	fgets(port_in, 100, stdin);
	port = strtol(port_in, &ret_ptr, 10);
  	while (port == 0)
	{
		printf("Invalid input: %sInput as integer only try again: ", port_in);
		fgets(port_in, 100, stdin);
		port = strtol(port_in, &ret_ptr, 10);
	}
	while (port < 1024 || port > 65535)
	{
		printf("Invalid port #: %i\n", port);
		printf("Enter a port between 1024 and 65535: ");
		fgets(port_in, 100, stdin);
		port = strtol(port_in, &ret_ptr, 10);
	}
	printf("Mmmmm, that's a good one\n");
	printf("Listening on port: %i\n", port);

	/*
	** Put port into struct
   	** Bind() associates port with local machine and listen() waits for an incoming connection with the same port
	** Accept returns an fd to be used to commmunicate with the server	
   	*/

    info.sin_port = htons(port);
    bind(sock, (struct sockaddr*) &info, sizeof(info));
    listen(sock, 5);
    comm_fd = accept(sock, (struct sockaddr*) NULL, NULL);
	if (comm_fd)
		printf("Client connected to server on port: %i\n", port); 

	/*
	** While loop constantly checks for information being sent by client and replies accordingly
	*/

    while (1)
    { 
        bzero(str, 100);
       	recv(comm_fd, str, 100, 0);
		if (strcmp(str, "\n") != 0)
			printf("String received: %s", str);
		if (strcmp(str, "ping\n") == 0)
        	send(comm_fd, "pong\npong\n", 11, 0);
		else if (strcmp(str, "shutdown\n") == 0)
		{
			printf("Shutting down server and closing connection\n");
			close(comm_fd);
			exit(1);
		}
		else 
			send(comm_fd, "Give me a ping plz\n", 37, 0);
	}
}
