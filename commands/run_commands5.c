/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 01:03:13 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	hola(void)
{
//	t2s ("Hola, mamacita");
}

void	let_dogs_out(void)
{
//	t2s ("Who let the dogs out, who, who, who");
	system("open https://www.youtube.com/watch?v=Qkuu0Lwb5EM");
}

void	despacito(void)
{
//	t2s ("Despacito 
//Quiero respirar tu cuello despacito 
//Deja que te diga cosas al oído 
//Para que te acuerdes si no estás conmigo");
	system("open https://www.youtube.com/watch?v=kJQP7kiw5Fk");
}

void	adios(void)
{
//	ts2 ("Adios, senorita");
}


void	fuck_you(void)
{
//	t2s ("Eyy, watch your fucking mouth vato");
}

int		main(void)
{
	let_dogs_out();
	despacito();
	return(0);
}
