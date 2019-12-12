/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:45:56 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/21 17:05:00 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;

	st = (unsigned char*)s;
	while (n--)
	{
		if (*st == (unsigned char)c)
			return ((void *)(st));
		st++;
	}
	return (0);
}
