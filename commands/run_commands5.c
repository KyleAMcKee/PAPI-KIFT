/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/03/29 18:54:05 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	hola(void)
{
	system("say -v Juan Hola, mamacita");
}

void	let_dogs_out(void)
{
	system("say -v Juan Who let the dogs out, who, who, who");
	system("open https://www.youtube.com/watch?v=Qkuu0Lwb5EM");
}

void	despacito(void)
{
	system("say -v Juan Despacito Quiero respirar tu cuello despacito");
	system("open https://www.youtube.com/watch?v=kJQP7kiw5Fk");
}

void	fuck_you(void)
{
	system("say -v Juan Ay, watch your fucking mouth puta");
}
