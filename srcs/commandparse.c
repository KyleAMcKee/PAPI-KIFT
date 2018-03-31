#include "papi.h"

void	set_commandinfo(t_cmd *cmd_d, int cmdid, char *cmd)
{
	cmd_d->cmdid = cmdid;
	cmd_d->cmd = ft_strdup(cmd);
}

void	is_command_3(t_cmd *cmd_d, char *user_in)
{
	if (ft_strstr("SHREK", user_in))
		return (set_commandinfo(cmd_d, 20, "SHREK"));
	if (ft_strstr("HOLA", user_in))
		return (set_commandinfo(cmd_d, 21, "HOLA"));
	if (ft_strstr("NICK CAGE", user_in))
		return (set_commandinfo(cmd_d, 13, "NICK CAGE"));
  if (ft_strstr("JOKE", user_in))
		return (set_commandinfo(cmd_d, 24, "JOKE"));
  if (ft_strstr("QUE PASA", user_in))
		return (set_commandinfo(cmd_d, 12, "QUE PASA"));
  if (ft_strstr("KIFTE", user_in))
		return (set_commandinfo(cmd_d, 11, "KIFTE"));
  if (ft_strstr("SET TIMER", user_in))
		return (set_commandinfo(cmd_d, 26, "SET TIMER"));
}

void	is_command_2(t_cmd *cmd_d, char *user_in)
{
	if (ft_strstr("PLAY MUSIC", user_in))
		return (set_commandinfo(cmd_d, 14, "PLAY MUSIC"));
    if (ft_strstr("GOOGLE", user_in) || ft_strstr("SEARCH", user_in))
		return (set_commandinfo(cmd_d, 15, "GOOGLE"));
    if (ft_strstr("GOOGLE DESPACITO", user_in))
		return (set_commandinfo(cmd_d, 16, "GOOGLE DESPACITO"));
    if (ft_strstr("CHECK HISTORY", user_in))
		return (set_commandinfo(cmd_d, 17, "CHECK HISTORY")); 
    if (ft_strstr("LET DOGS", user_in))
		return (set_commandinfo(cmd_d, 22, "LET DOGS"));   
	if (ft_strstr("DESPACITO", user_in))
		return (set_commandinfo(cmd_d, 23, "DESPACITO"));
	//if (ft_strstr("EXIT", user_in) || ft_strstr("QUIT", user_in) || ft_strstr("GOODBYE", user_in))
	//	return (set_commandinfo(cmd_d, 18, "EXIT"));
	if (ft_strstr("BUTTERHORN", user_in))
		return (set_commandinfo(cmd_d, 19, "BUTTERHORN"));
	is_command_3(cmd_d, user_in);
	
}

void	is_command(t_cmd *cmd_d, char *user_in)
{
	if (ft_strstr("FUCK", user_in))
		return (set_commandinfo(cmd_d, 25, "FUCK"));
	if (ft_strstr("SET ALARM", user_in))
		return (set_commandinfo(cmd_d, 1, "SET ALARM"));
	if (ft_strstr("LIGHTS ON", user_in))
		return (set_commandinfo(cmd_d, 2, "LIGHTS ON"));
	if (ft_strstr("LIGHTS OFF", user_in))
		return (set_commandinfo(cmd_d, 3, "LIGHTS OFF"));
	if (ft_strstr("SEND EMAIL", user_in))
		return (set_commandinfo(cmd_d, 4, "SEND EMAIL"));
	if (ft_strstr("CHECK EVENTS", user_in))
		return (set_commandinfo(cmd_d, 5, "CHECK EVENTS"));
	if (ft_strstr("CHECK WEATHER", user_in))
		return (set_commandinfo(cmd_d, 6, "CHECK WEATHER"));
	if (ft_strstr("CHECK TRAFFIC", user_in))
		return (set_commandinfo(cmd_d, 7, "CHECK TRAFFIC"));
	if (ft_strstr("USER CONNECTED", user_in))
		return (set_commandinfo(cmd_d, 8, "USER CONNECTED"));
	if (ft_strstr("WHERE CONNECTED", user_in))
		return (set_commandinfo(cmd_d, 9, "WHERE CONNECTED"));
	if (ft_strstr("WHERE KYLE", user_in))
		return (set_commandinfo(cmd_d, 10, "WHERE KYLE"));
	is_command_2(cmd_d, user_in);
}