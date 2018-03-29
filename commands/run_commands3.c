/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/28 23:35:28 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	check_traffic(void)
{
//	t2s ("Here is the traffic in your area, ay carumba!");
	system("open https://www.google.com/maps/place/Fremont,+CA/@37.5293037,-122.1485555,11z/data=!3m1!4b1!4m5!3m4!1s0x808fbf46b7e8caf7:0x8ada313b89d888d4!8m2!3d37.5482697!4d-121.9885719!5m1!1e1");
}

/*void	lights_off(void)
{
}

void	send_email(void)
{

}

void	set_alarm(void)
{

}

void	set_alarm(void)
{

}*/

int		main(void)
{
	check_traffic();
	return(0);
}
