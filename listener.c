#include <stdlib.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include "../libft/libft.h"

int main(void)
{
	int fd1;

	fd1 = open("speech.txt", O_RDWR | O_TRUNC);
	dup2(fd1, 1);
	system("pocketsphinx_continuous -inmic yes -lm dict/dict.lm \
			-dict dict/dict.dic -logfn /dev/null");
	return (0);
}
