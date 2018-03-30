/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 17:47:56 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	joke(void)
{
//	t2s ("Ay, Ay, Ay, Papi!");
}

void	nic_cage(void)
{
//	t2s ("CAGE QUOTE PLACEHOLDER");
	system("open https://youtu.be/4zySHepF04c?t=10s");
}

void	que_pasa(void)
{
	system("say -v Juan Nothing much, what's up with you dog");
}

int		main(void)
{
	nic_cage();
	return(0);
}
