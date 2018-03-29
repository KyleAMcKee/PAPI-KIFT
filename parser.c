#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>

int execute_command(char *str)
{
	if (ft_strstr("QUIT", str) || ft_strstr("EXIT", str))
	{
		ft_putstr("Exiting\n");
		system("killall pocketsphinx_continuous");
		exit(0);
	}
	else
		ft_putstr(str);
	return(1);
}

int parser(char **command)
{
	char *line;
	int fd;
	int server;

	fd = open("speech.txt", O_RDONLY);
	line = NULL;
	server = 0;
	get_next_line(fd, &line);
	if (line)
	{
		ft_putstr("command: ");
		ft_putstr(line);
		ft_putchar('\n');
	//	server = execute_command(line);
		*command = line;
		server = 1;
		fopen("speech.txt", "w+");
	}
	close(fd);
//	ft_putnbr(server);
//	ft_putchar('\n');
	if (!*command)
		return (0);
	return (server ? 1 : 0);
}
