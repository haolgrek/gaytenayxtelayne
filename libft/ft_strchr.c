/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:24:09 by rluder            #+#    #+#             */
/*   Updated: 2015/11/28 17:58:33 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*src;

	ch = (char)c;
	src = (char*)s;
	while (*src != '\0' && *src != ch)
		src++;
	if (*src == ch)
		return (src);
	return (NULL);
}
