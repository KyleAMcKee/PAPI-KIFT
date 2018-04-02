/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papi_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:51:33 by nwang             #+#    #+#             */
/*   Updated: 2018/04/02 15:27:57 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void		putcommand_insendstr(char *cmd, char send_str[])
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (cmd[++i])
		send_str[j++] = cmd[i];
}

void		quit_check(int fd, t_cmd *cmd_d)
{
	ft_strdel(&cmd_d->cmd);
	cmd_d->papi = 0;
	cmd_d->cmdid = 0;
	system("say -v Juan Are you sure you want to quit?");
	printf("Are you sure you want to quit? (Yes/No)");
	while (!exit_response(fd, cmd_d))
	{
	}
}

void		papi_initialized(void)
{
	printf("Connected to server\n");
	system("say -v Juan Hola amigo, Papi initialized");
}

int			validstr(char *line)
{
	int		i;

	i = -1;
	while (line[++i])
	{
		if ((line[i] >= 65 && line[i] <= 90)
				|| (line[i] >= 97 && line[i] <= 122))
			return (1);
	}
	return (0);
}

t_cmd		*initialize(void)
{
	t_cmd	*cmd_d;

	cmd_d = (t_cmd *)malloc(sizeof(t_cmd));
	cmd_d->cmdid = 0;
	cmd_d->cmd = NULL;
	cmd_d->papi = 0;
	cmd_d->quit = 0;
	return (cmd_d);
}
