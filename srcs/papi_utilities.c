#include "papi.h"

void	putcommand_insendstr(char *cmd, char send_str[])
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (cmd[++i])
		send_str[j++] = cmd[i];
}

int validstr(char *line)
{
	int i;

	i = -1;
	while (line[++i])
	{
		if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
			return (1);
	}
	return (0);
}