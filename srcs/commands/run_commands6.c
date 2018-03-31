/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands6.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 18:33:51 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void	joke(void)
{
	system("say -v Juan What is the best drug to have sex on?");
	sleep(3);
	system("say -v Juan Birth control?");
	sleep(1);
	system("say -v Juan HA. HA. HA. HA.");
}

void	nic_cage(void)
{
	system("say -v Juan Every great story seems to begin with a snake.");
	system("open https://youtu.be/4zySHepF04c?t=10s");
}

void	que_pasa(void)
{
	system("say -v Juan Nothing much, whats up with you dog");
}
