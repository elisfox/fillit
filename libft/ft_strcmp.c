/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:06:51 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:17:41 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				n;
	unsigned char	*dt;
	unsigned char	*sc;

	i = 0;
	n = 0;
	dt = (unsigned char*)s1;
	sc = (unsigned char*)s2;
	while (dt[i] == sc[i] && dt[i] != '\0')
		i++;
	if (dt[i] != sc[i])
		n = dt[i] - sc[i];
	return (n);
}
