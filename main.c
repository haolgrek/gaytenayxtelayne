/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 13:58:45 by rluder            #+#    #+#             */
/*   Updated: 2016/01/18 16:54:35 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char	*line;
	int		fd;

	if (argc >= 2)
	{
		printf("start\n");
		fd = open(argv[1], O_RDONLY);
		printf("open done\n");
		get_next_line(fd, &line);
		printf("%s", line);
		printf("\nline done\n");
//		get_next_line(fd, &line);
//		get_next_line(fd, &line);
//		get_next_line(fd, &line);
//		get_next_line(fd, &line);
//		get_next_line(fd, &line);
//		get_next_line(fd, &line);
	}
	return (0);
}
