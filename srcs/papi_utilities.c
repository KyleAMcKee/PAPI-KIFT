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

t_cmd		*initialize(void)
{
	t_cmd	*cmd_d;

	cmd_d = (t_cmd *)malloc(sizeof(t_cmd));
	cmd_d->cmdid = 0;
	cmd_d->cmd = NULL;
	cmd_d->papi = 0;
	return (cmd_d);
}