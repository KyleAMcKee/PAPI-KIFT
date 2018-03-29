/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 01:11:25 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	lights_on(void)
{
	int i;
	
	i = 0;
//	t2s ("Turning lights on");
	while (i < 16)
	{
		system("sh turnonlights");
		i++;
	}
}

void	lights_off(void)
{
	int i;
	
	i = 0;
//	t2s ("Turning lights off");
	while (i < 16)
	{
		system("sh turnofflights");
		i++;
	}
}

void	send_email(void)
{
	//ts2 ("Sending email, hombre")
	system("sh email");
}

void	check_events(void)
{
//	t2s ("Here are some events near Fremont");
	system("open https://www.eventbrite.com/d/ca--fremont/events/");	
}

void	check_weather(void)
{
//	t2s ("Here is the weather, muy caliente");
	system("open https://weather.com/weather/tenday/l/94555:4:US");
}

int		main(void)
{
	lights_on();
	check_events();
	sleep(3);
	lights_off();
	check_weather();
	sleep(3);
	lights_on();
	return(0);
}
