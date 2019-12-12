/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:53:30 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/24 19:23:30 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	sl;
	size_t	dl;

	j = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (size <= dl)
		sl += size;
	else
		sl += dl;
	while (size > (dl + 1) && src[j] != '\0')
	{
		dst[dl] = src[j];
		j++;
		dl++;
	}
	dst[dl] = '\0';
	return (sl);
}
