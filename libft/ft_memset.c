/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:37:12 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/24 18:52:29 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	m;

	i = 0;
	a = (unsigned char*)b;
	m = (unsigned char)c;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		a[i] = m;
		i++;
		len--;
	}
	return (a);
}
