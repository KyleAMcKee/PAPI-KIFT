#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "libft/libft.h"

int	parser(char **command);

int main(void)
{
	int comm_fd;
	char send_str[100];
	char recv_str[100];
	char port_str[100];
	char *ret_ptr;
	struct sockaddr_in info;
	int	port;
	int success;
	pid_t id;
	pid_t id2;

	id = fork();
	if (id == 0)
		execvp("./exec", NULL);
	sleep(3);

	/*
	 ** Create a socket, use IPv4 (AF_INET), and specify the socket type (SOCK_STREAM)
	 ** Zero out the struct and use IPv4
	 */

	comm_fd = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&info, sizeof(info));
	info.sin_family = AF_INET;

	/*
	 ** Get port from user and verify that the port is valid
	 */

	printf("Gimme a port, plz: ");
	fgets(port_str, 100, stdin);
	port = strtol(port_str, &ret_ptr, 10);
	id2 = fork();
	if (id2 == 0)
		execvp("./listener", NULL);
	sleep(3);
	while (port == 0)
	{
		printf("Invalid input: %sInput as integer only try again: ", port_str);
		fgets(port_str, 100, stdin);
		port = strtol(port_str, &ret_ptr, 10);
	}
	while (port < 1024 || port > 65535)
	{
		printf("Invalid port #: %i\n", port);
		printf("Enter a port between 1024 and 65535: ");
		fgets(port_str, 100, stdin);
		port = strtol(port_str, &ret_ptr, 10);
	}
	printf("That's a great port! Let's connect!\n");

	/*
	 **	Add port to struct along with IP in binary format
	 **	If connection was successful let user know and allow sending of information
	 */

	info.sin_port = htons(port);
	inet_pton(AF_INET, "127.0.0.1", &(info.sin_addr));
	success = connect(comm_fd, (struct sockaddr*)&info, sizeof(info));
	if (success == 0)
		printf("Connected to server\n");
	else
		printf("Couldn't connect to server\n");
	char *command;
	command = NULL;
	while(1)
	{
		//Get string from listener
		//If string
		//	if client logic
		//		pass to client logic handler
		//	else if server logic
		//		send to server
		//		wait for response
		//	else
		//		command not valid
		//	flush send / recv string
		if (parser(&command) == 1)
		{
			if (command)
			{
				//bzero(send_str, 100);
				bzero(recv_str, 100);
				printf("client com: %s\n",  command);
				send(comm_fd, "1", strlen("1") + 1, 0);
				recv(comm_fd, recv_str, 100, 0);
				printf("%s\n", recv_str);
				free(command);
				command = NULL;
			}
		}
	}
}
