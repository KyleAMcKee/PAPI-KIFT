/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 21:52:42 by nwang             #+#    #+#             */
/*   Updated: 2018/04/02 14:44:50 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

int		exit_response(int fd, t_cmd *cmd_d)
{
	char *user_in;

	user_in = NULL;
	get_next_line(fd, &user_in);
	if (user_in && !ft_strcmp("NO", user_in))
	{
		cmd_d->quit = 0;
		return (1);
	}
	if (user_in && !ft_strcmp("YES", user_in))
		quit();
	return (0);
}

void	parser(int fd, t_cmd *cmd_d)
{
	char *user_in;

	user_in = NULL;
	get_next_line(fd, &user_in);
	if (user_in && !ft_strcmp("PAPI", user_in))
	{
		ft_putstr("PAPI IS LISTENING\n");
		cmd_d->papi = 1;
	}
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
