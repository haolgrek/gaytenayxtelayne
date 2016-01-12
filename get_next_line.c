/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:57:08 by rluder            #+#    #+#             */
/*   Updated: 2016/01/12 16:07:57 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static char	*ft_nofile(int const fd, char *file, char *buf)
{
	int	ret;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (!file)
			file = ft_strdup(buf);
		else
			file = ft_strjoin(file, buf);
		if (ret == -1)
			return (0);
	}
	return (file);
}

char	*get_buff(int const fd, char *file)
{
	char		buf[BUFF_SIZE + 1];

	if (!file)
		file = ft_nofile(fd, file, buf);
	else if (	*file == '\0')
		return (0);
	return (file);
}

int	get_next_line(int const fd, char **line)
{
	static char		*file;
	char			*test;
	unsigned int	index;
	unsigned int	len;

	index = 0;
	len = 0;
	*line = ft_strnew(1);
	file = get_buff(fd, file);
//	write(1, "gbok\n", 5);
	if (*file == '\0')
	{
//		return (write(1, "-1\n", 3));
		return (-1);
	}
	while (file[index] != '\n' && file[index] != '\0')
	{
		len++;
		index++;
	}
//	write(1, "whok\n", 5);
	test = ft_strsub(file, 0, len);
	printf("%s\n", test);
	line = &test;
//	write(1, "subok\n", 6);
	file = &file[len];
//	write(1, "gbok\n", 5);
	file++;
	if (EOF)
	{
//		return (write(1, "0\n", 2));
		return (0);
	}
//	return (write(1, "1\n", 2));
	return (1);
}

int main(int argc, const char *argv[])
{
	char	**line;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	get_next_line(fd, line);
	printf("%s", *line);
//	get_next_line(fd, line);
//	get_next_line(fd, line);
	//	get_next_line(fd, line);
	//	get_next_line(fd, line);
	//	get_next_line(fd, line);
	//	get_next_line(fd, line);
	return (0);
}
