/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 21:52:42 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 21:53:05 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

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
