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

int validcommand(char *line)
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

int parser(int fd, char **command)
{
	char *line;
	int server;

	line = NULL;
	server = 0;
	get_next_line(fd, &line);
	if (line && validcommand(line))
	{
		ft_putstr("command: ");
		ft_putstr(line);
		ft_putchar('\n');
	//	server = execute_command(line);
		*command = line;
		server = 1;
//		fopen("speech.txt", "w");
	}
	return (server);
}