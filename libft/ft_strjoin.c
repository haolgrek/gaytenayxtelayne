/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:28:06 by rluder            #+#    #+#             */
/*   Updated: 2015/12/04 18:33:49 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if ((dst = (char*)malloc(sizeof(dst) * (i + 1))))
	{
		ft_strcpy(dst, s1);
		ft_strcat(dst, s2);
		return (dst);
	}
	return (NULL);
}
