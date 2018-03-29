/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 14:35:16 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_alarm(void)
{
	system("say -v Juan wakey wakey eggs and bakey");
	system("open http://onlineclock.net/");
}

void	set_timer(void):
{
	system("say -v Juan tick tock");
	system("open http://timer.onlineclock.net/");
}
