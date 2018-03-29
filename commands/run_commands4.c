/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 00:57:18 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	google_despacito(void)
{
//	t2s ("Ay, Ay, Ay, Papi!");
	system("open https://www.google.com/search?q=despacito");
}

void	check_history(void)
{
//	t2s ("Dirty history, ay dios");
	system("sh history");
}

void	quit(void)
{
//	t2s ("Adios, mi amigo");
	exit(0);
}

void	butterhorn(void)
{
//	ts2 ("BUTTTTERRRHOOOOORRRRRNNNNN!!!!!");
	system("open https://www.google.com/search?q=butterhorn&tbm=isch");
	system("play butterhorn.mp3");
}


void	shrek(void)
{
//	t2s ("Search away mi amigo");
	system("open https://www.google.com/");
}

int		main(void)
{
	butterhorn();
	return(0);
}
