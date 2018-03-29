/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:14:10 by nwang             #+#    #+#             */
/*   Updated: 2018/03/28 22:38:55 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		commands3(int com)
{
	if (com == 23)
		despacito();
	else if (com == 24)
		adios();
	else if (com == 25)
		fuck_you();
	else if (com == 26)
		joke();
	else if (com == 27)
		nic_cage();
	else if (com == 28)
		que_pasa();
}

void		commands2(int com)
{
	if (com == 12)
		where_harrison();
	else if (com == 13)
		where_nick();
	else if (com == 14)
		play_music();
	else if (com == 15)
		google();//search and google, blank google.com
	else if (com == 16)
		google_despacito();
	else if (com == 17)
		check_history();
	else if (com == 18)
		quit();
	else if (com == 19)
		butterhorn();
	else if (com == 20)
		shrek();
	else if (com == 21)
		hola();
	else if (com == 22)
		let_dogs_out();
	else
		commands3(com);
}

void		commands(int com)
{
	if (com == 1)
		set_alarm();
	else if (com == 2)
		lights_on();
	else if (com == 3)
		lights_off();
	else if (com == 4)
		send_email();
	else if (com == 5)
		check_events();
	else if (com == 6)
		check_weather();
	else if (com == 7)
		check_traffic();
	else if (com == 8)
		who_am_i();
	else if (com == 9)
		where_am_i();
	else if (com == 10)
		where_kyle();
	else if (com == 11)
		where_dago();
	else
		commands2(com);
}
