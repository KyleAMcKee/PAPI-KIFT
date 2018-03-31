/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmckee <kmckee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:40:00 by nwang             #+#    #+#             */
/*   Updated: 2018/03/30 16:53:32 by kmckee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAPI_H
# define PAPI_H

# include <unistd.h>
# include <dirent.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/stat.h>
# include <sys/xattr.h>
# include <pwd.h>
# include <grp.h>
# include <uuid/uuid.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netdb.h>
# include <arpa/inet.h>
# include "libft/libft.h"
# define C_RED      "\x1b[31m"
# define C_GRN      "\x1b[32m"
# define C_YEL      "\x1b[33m"
# define C_BLU      "\x1b[34m"
# define C_MAG      "\x1b[35m"
# define C_CYN      "\x1b[36m"
# define C_WHT      "\x1b[37m"
# define C_RESET    "\x1b[0m"

typedef struct	s_cmd
{
	int		cmdid;
	int		papi;
	char	*cmd;
}			t_cmd;

void     parser(int fd, t_cmd *cmd_d);

void    is_command(t_cmd *cmd_d, char *user_in);

#endif