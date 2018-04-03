/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:38:43 by nwang             #+#    #+#             */
/*   Updated: 2018/04/02 22:59:46 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

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
	system("open https://youtu.be/kJQP7kiw5Fk?t=27s");
}

void	fuck_you(void)
{
	system("say -v Juan Ay, watch your fucking mouth pendejo");
}
