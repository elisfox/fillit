/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:45:41 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:12:59 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	dt = (unsigned char*)dst;
	sc = (unsigned char*)src;
	while (i < n)
	{
		dt[i] = sc[i];
		if (sc[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
