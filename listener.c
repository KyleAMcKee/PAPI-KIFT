#include <stdlib.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include "libft/libft.h"

int main(void)
{
	int fd1;

	fd1 = open("speech.txt", O_RDWR | O_TRUNC | O_CREAT);
	dup2(fd1, 1);
	system("pocketsphinx_continuous -inmic yes -hmm papidict/en-us-papi -lm papidict/dict.lm \
			-dict papidict/dict.dic -logfn /dev/null");
	return (0);
}
