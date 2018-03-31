/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listener.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 21:38:17 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 21:47:27 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papi.h"

int			main(void)
{
	int		fd1;

	fd1 = open("speech.txt", O_RDWR | O_TRUNC);
	dup2(fd1, 1);
	system("pocketsphinx_continuous -inmic yes -hmm papidict/en-us-papi \
			-lm papidict/dict.lm \
			-dict papidict/dict.dic -logfn /dev/null");
	return (0);
}
