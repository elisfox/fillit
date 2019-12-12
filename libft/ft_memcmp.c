/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:46:10 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:14:13 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*st;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	dt = (unsigned char*)s1;
	st = (unsigned char*)s2;
	while (n > 0)
	{
		if (dt[i] != st[i])
			return (dt[i] - st[i]);
		i++;
		n--;
	}
	if (i < n)
		return (dt[i] - st[i]);
	else
		return (0);
}
