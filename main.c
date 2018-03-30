#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
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
	return(0);
}

int main(void)
{
	char *line;
	int fd;

	fd = open("speech.txt", O_RDONLY);
	while (1)
	{	
		line = NULL;
		get_next_line(fd, &line);
		if (line)
		{
			ft_putstr("command: ");
			ft_putstr(line);
			ft_putchar('\n');
			execute_command(line);
			open("speech.txt", O_TRUNC);
			free(line);
		}
	}
}
