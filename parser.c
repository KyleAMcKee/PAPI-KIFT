#include "papi.h"

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

int validstr(char *line)
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

void	parser(int fd, t_cmd *cmd_d)
{
	char *user_in;

	user_in = NULL;
	get_next_line(fd, &user_in);
	if (user_in && ft_strstr("PAPI", user_in))
		cmd_d->papi = 1;
	if (cmd_d->papi > 0 && user_in && validstr(user_in))
	{
		is_command(cmd_d, user_in);
		if (cmd_d->cmdid > 0)
		{
			ft_putstr("command: ");
			ft_putstr(user_in);
			ft_putchar('\n');
		}
	}
	free(user_in);
}