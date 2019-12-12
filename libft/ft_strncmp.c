/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:06:51 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:22:25 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*dt;
	unsigned char	*st;

	i = 0;
	j = 0;
	dt = (unsigned char*)s1;
	st = (unsigned char*)s2;
	while (dt[i] == st[i] && dt[i] != '\0' && i < n)
		i++;
	if (dt[i] != st[i] && i < n)
		j = dt[i] - st[i];
	return (j);
}
