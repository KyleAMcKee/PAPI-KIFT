/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 18:20:17 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void	lights_on(void)
{
	int i;

	i = 0;
	system("say -v Juan Turning lights on");
	while (i < 16)
	{
		system("sh srcs/commands/turnonlights");
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
		system("sh srcs/commands/turnofflights");
		i++;
	}
}

void	send_email(void)
{
	system("say -v Juan Sending email, hombre");
	system("sh srcs/commands/email");
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
