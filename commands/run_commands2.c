/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 18:50:38 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	lights_on(void)
{
	int i;

	i = 0;
	system("say -v Juan Turning lights on");
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
	system("say -v Juan Turning lights off, spooky");
	while (i < 16)
	{
		system("sh turnofflights");
		i++;
	}
}

void	send_email(void)
{
	system("say -v Juan Sending email, hombre");
	system("sh email");
}

void	check_events(void)
{
	system("say -v Juan Here are some events near Fremont");
	system("open https://www.eventbrite.com/d/ca--fremont/events/");
}

void	check_weather(void)
{
	system("say -v Juan Here is the weather, muy caliente");
	system("open https://weather.com/weather/tenday/l/94555:4:US");
}
