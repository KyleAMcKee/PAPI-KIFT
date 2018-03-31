/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 18:20:59 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

void	google_despacito(void)
{
	system("say -v Juan Ay, Ay, Ay, Papi!");
	system("open https://www.google.com/search?q=despacito");
}

void	check_history(void)
{
	system("say -v Juan Dirty history, ay dios");
	system("sh srcs/commands/history");
}

void	quit(void)
{
	system("say -v Juan Adios, mi amigo");
	exit(0);
}

void	butterhorn(void)
{
	system("say -v Juan BUTTTTERRRHOOOOORRRRRNNNNN!!!!!");
	system("open https://www.google.com/search?q=butterhorn&tbm=isch");
	system("play srcs/commands/butterhorn.mp3");
}

void	shrek(void)
{
	system("say -v Juan What are you doing, in my swamp!");
	system("open https://www.whatareyoudoinginmyswamp.com/");
}
