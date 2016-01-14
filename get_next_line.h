/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:11:33 by rluder            #+#    #+#             */
/*   Updated: 2016/01/14 21:00:11 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
 #include "libft.h"
 #include <unistd.h>
 #include <stdlib.h>
 #define BUFF_SIZE 800

typedef struct	s_file
{
	char	*data;
	int		fd;
}				t_file;

int			get_buff(int fd, char **data);
int			get_next_line(int const fd, char **line);
#endif
