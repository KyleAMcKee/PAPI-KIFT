#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>

typedef struct	s_cmd
{
	int		cmdid;
	int		papi;
	char	*cmd;
}			t_cmd;

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

void	set_commandinfo(t_cmd *cmd_d, int cmdid, char *cmd)
{
	cmd_d->cmdid = cmdid;
	cmd_d->cmd = ft_strdup(cmd);
}

void	is_command_2(t_cmd *cmd_d, char *user_in)
{
	if (ft_strstr("PLAY MUSIC", user_in))
		return (set_commandinfo(cmd_d, 14, "PLAY MUSIC"));
	if (ft_strstr("DESPACITO", user_in))
		return (set_commandinfo(cmd_d, 23, "DESPACITO"));
	if (ft_strstr("EXIT", user_in) || ft_strstr("QUIT", user_in))
		return (set_commandinfo(cmd_d, 18, "EXIT"));
	if (ft_strstr("BUTTERHORN", user_in))
		return (set_commandinfo(cmd_d, 19, "BUTTERHORN"));
	if (ft_strstr("SHREK", user_in))
		return (set_commandinfo(cmd_d, 20, "SHREK"));
	if (ft_strstr("HOLA", user_in) || ft_strstr("HELLO", user_in))
		return (set_commandinfo(cmd_d, 21, "HOLA"));
	if (ft_strstr("NIC CAGE", user_in))
		return (set_commandinfo(cmd_d, 27, "NIC CAGE"));
}

void	is_command(t_cmd *cmd_d, char *user_in)
{
	if (ft_strstr("FUCK", user_in))
		return (set_commandinfo(cmd_d, 25, "FUCK"));
	if (ft_strstr("SET ALARM", user_in))
		return (set_commandinfo(cmd_d, 1, "SET ALARM"));
	if (ft_strstr("LIGHTS ON", user_in))
		return (set_commandinfo(cmd_d, 2, "LIGHTS ON"));
	if (ft_strstr("LIGHTS OFF", user_in))
		return (set_commandinfo(cmd_d, 3, "LIGHTS OFF"));
	if (ft_strstr("SEND EMAIL", user_in))
		return (set_commandinfo(cmd_d, 4, "SEND EMAIL"));
	if (ft_strstr("CHECK EVENTS", user_in))
		return (set_commandinfo(cmd_d, 5, "CHECK EVENTS"));
	if (ft_strstr("CHECK WEATHER", user_in))
		return (set_commandinfo(cmd_d, 6, "CHECK WEATHER"));
	if (ft_strstr("CHECK TRAFFIC", user_in))
		return (set_commandinfo(cmd_d, 7, "CHECK TRAFFIC"));
	if (ft_strstr("USER CONNECTED", user_in))
		return (set_commandinfo(cmd_d, 8, "USER CONNECTED"));
	if (ft_strstr("WHERE CONNECTED", user_in))
		return (set_commandinfo(cmd_d, 9, "WHERE CONNECTED"));
	if (ft_strstr("WHERE", user_in) && ft_strstr("KYLE", user_in))
		return (set_commandinfo(cmd_d, 10, "WHERE KYLE"));
	else
		return (is_command_2(cmd_d, user_in));
}

void	parser(int fd, t_cmd *cmd_d)
{
	char *user_in;
	char *tmp;

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