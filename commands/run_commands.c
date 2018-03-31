/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 17:09:36 by nwang            ###   ########.fr       */
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
	system("ruby hind.rb mckee.txt");
}
