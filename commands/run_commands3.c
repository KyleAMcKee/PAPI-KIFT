/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 00:42:01 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	check_traffic(void)
{
//	t2s ("Here is the traffic in your area, ay carumba!");
	system("open https://www.google.com/maps/place/Fremont,+CA/@37.5293037,-122.1485555,11z/data=!3m1!4b1!4m5!3m4!1s0x808fbf46b7e8caf7:0x8ada313b89d888d4!8m2!3d37.5482697!4d-121.9885719!5m1!1e1");
}

void	who_am_i(void)
{
//	t2s ("You are connected hombre");
	system("whoami");
}

void	where_am_i(void)
{
//	t2s ("This is where you are, compadre");
	system("ifconfig en0 | grep 'inet'| tail -1 | cut -c 7-17");
//	hind	
}

void	play_music(void)
{
//	ts2 ("Here are some tunes");
	system("play all_star.mp3");
}


void	google(void)
{
//	t2s ("Search away mi amigo");
	system("open https://www.google.com/");
}

int		main(void)
{
	check_traffic();
	return(0);
}