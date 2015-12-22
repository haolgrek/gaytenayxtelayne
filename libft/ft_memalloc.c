/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:49:18 by rluder            #+#    #+#             */
/*   Updated: 2015/12/04 16:20:50 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (char*)malloc(sizeof(str) * size);
	if (str)
	{
		ft_memset(str, 0, size);
		return (str);
	}
	return (NULL);
}
