#include "papi.h"

int validstr(char line[])
{
	int i;

	i = -1;
	while (line[++i])
	{
		if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
			return (1);
	}
	return (0);
}

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

//	int command;
    while (1)
    { 
        bzero(str, 100);
       	recv(comm_fd, str, 100, 0);
//		if (strlen(str))
//			command = atoi(str);
		//if (command == 1)
		//	system("open https://www.google.com");
		//if (strcmp(str, "\n") != 0)
		if (validstr(str))
		{
			ft_putstr("String received in server: ");
			ft_putstr(str);
			ft_putchar('\n');
		}
		//if (strcmp(str, "ping\n") == 0)
       // 	send(comm_fd, "pong\npong\n", 11, 0);
	//	else if (strcmp(str, "shutdown\n") == 0)
//		{
//			printf("Shutting down server and closing connection\n");
//			close(comm_fd);
//			exit(1);
//		}
		send(comm_fd, str, strlen(str), 0);
//		command = 0;
	}
}