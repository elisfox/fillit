/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:49:11 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/24 19:24:50 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			c1;

	i = 0;
	c1 = (char)c;
	while (*s != c1 && *s != '\0')
		s++;
	if (*s == c1)
		return ((char *)s);
	else
		return (NULL);
}
