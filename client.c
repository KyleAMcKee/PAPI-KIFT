#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include "libft/libft.h"

int	parser(int fd, char **command);

void	putcommand_insendstr(char *cmd, char send_str[])
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (cmd[++i])
		send_str[j++] = cmd[i];
}

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
//	pid_t id;
	pid_t id2;

/*	id = fork();
	if (id == 0)
		execvp("./exec", NULL);*/
	id2 = fork();
	if (id2 == 0)
		execvp("./listener", NULL);
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
	fopen("speech.txt", "w+");
	printf("Gimme a port, plz: ");
	fgets(port_str, 100, stdin);
	port = strtol(port_str, &ret_ptr, 10);
	id2 = fork();
	if (id2 == 0)
		execvp("./listener", NULL);
	sleep(3);


	/*printf("Gimme a port, plz: ");
	fgets(port_str, 100, stdin);
	port = strtol(port_str, &ret_ptr, 10);*/
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
	int fd;
	fopen("speech.txt", "w");
	command = NULL;
	fd = open("speech.txt", O_RDONLY);
	while(1)
	{
		if (parser(fd, &command) == 1)
		{
			bzero(send_str, 100);
			putcommand_insendstr(command, send_str);
			bzero(recv_str, 100);
			printf("client command being sent send_str: %s\n",  send_str);
			send(comm_fd, send_str, strlen(send_str), 0);
			recv(comm_fd, recv_str, 100, 0);
			printf("server response: %s\n", recv_str);
			ft_strdel(&command);
		}
//		ft_putstr("NINGUUU");
//		fopen("speech.txt", "w");
		/*if (fgets(send_str, 50, stdin))
		{
			printf("com: %s\n", send_str);
		}*/
/*		if (parser(&command) == 1)
		{
			free(command);
			command = NULL;
		}*/
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
	}
}