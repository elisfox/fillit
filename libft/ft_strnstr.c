/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:55:04 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/24 19:28:41 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hsk, const char *ndl, size_t n)
{
	size_t	size;

	size = ft_strlen(ndl);
	if (!*ndl)
		return ((char *)hsk);
	while (*hsk && n-- >= size)
	{
		if (*hsk == *ndl && ft_memcmp(hsk, ndl, size) == 0)
			return ((char *)hsk);
		hsk++;
	}
	return (NULL);
}
