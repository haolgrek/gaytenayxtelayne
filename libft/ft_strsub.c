/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:25:16 by rluder            #+#    #+#             */
/*   Updated: 2015/12/07 19:30:56 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			dst[i] = s[start + i];
			i++;
		}
		while (i < len + 1)
		{
			dst[i] = '\0';
			i++;
		}
		return (dst);
	}
	return (NULL);
}
