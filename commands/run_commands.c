/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 01:18:03 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_alarm(void)
{
	//t2s ("wakey wakey eggs and bakey");
	system("open http://onlineclock.net/");
}

void	set_timer(void):
{
	//t2s ("tick tock");
	system("open http://timer.onlineclock.net/");
}
