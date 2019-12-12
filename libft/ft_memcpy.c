/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:46:23 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:15:25 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	dt = (unsigned char*)dst;
	sc = (unsigned char*)src;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dt);
}
