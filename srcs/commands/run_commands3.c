/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/04/01 21:50:37 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void	check_traffic(void)
{
	system("say -v Juan Here is the traffic in your area, ay carumba!");
	system("sh srcs/commands/traffic");
}

void	user_connected(void)
{
	system("say -v Juan Here is the user connected, hombre");
	system("whoami");
}

void	where_connected(void)
{
	system("say -v Juan This is where you are connected, compadre");
	system("ifconfig en0 | grep 'inet'| tail -1 | cut -c 7-17");
}

void	play_music(void)
{
	system("say -v Juan Here are some tunes");
	system("play srcs/commands/all_star.mp3 &");
	sleep(10);
	system("pkill play all_star.mp3");
}

void	google(void)
{
	system("say -v Juan Search away mi amigo");
	system("open https://www.google.com/");
}
