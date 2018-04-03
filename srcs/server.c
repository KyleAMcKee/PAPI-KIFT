/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 21:53:21 by nwang             #+#    #+#             */
/*   Updated: 2018/04/02 21:44:09 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

int						validstr(char line[])
{
	int					i;

	i = -1;
	while (line[++i])
	{
		if ((line[i] >= 65 && line[i] <= 90) ||
				(line[i] >= 97 && line[i] <= 122))
			return (1);
	}
	return (0);
}

int						get_server_port(void)
{
	char				port_in[100];
	char				*ret_ptr;
	int					port;

	printf("Quiero un puerto, mi amigo: ");
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
	printf("Muy bien, that's a good one\n");
	printf("Escuchando en puerto: %i\n", port);
	return (port);
}

int						main(void)
{
	char				str[100];
	int					sock;
	int					comm_fd;
	int					port;
	struct sockaddr_in	info;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&info, sizeof(info));
	info.sin_family = AF_INET;
	info.sin_addr.s_addr = htons(INADDR_ANY);
	port = get_server_port();
	info.sin_port = htons(port);
	bind(sock, (struct sockaddr*)&info, sizeof(info));
	listen(sock, 5);
	if ((comm_fd = accept(sock, (struct sockaddr*)NULL, NULL)))
		printf("Client connected to server on port: %i\n", port);
	while (1)
	{
		bzero(str, 100);
		recv(comm_fd, str, 100, 0);
		if (validstr(str))
			printf("String received in server: %s\n", str);
		send(comm_fd, str, strlen(str), 0);
	}
	return (0);
}
