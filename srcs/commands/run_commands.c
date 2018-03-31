/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 18:20:40 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void	set_alarm(void)
{
	system("say -v Juan wakey wakey eggs and bakey");
	system("open http://onlineclock.net/");
}

void	set_timer(void)
{
	system("say -v Juan tick tock");
	system("open http://timer.onlineclock.net/");
}

void	kifte(void)
{
	system("say -v Juan Kiftehh Kiftehh Kiftehh, Si, si, si");
}

void	where_kyle(void)
{
	system("say -v Juan Donde esta senor mckee");
	system("ruby srcs/commands/hind.rb srcs/commands/mckee.txt");
}
