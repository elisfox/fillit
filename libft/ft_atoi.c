/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:13:23 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/26 21:40:58 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define FT_LOG_MAX 9223372036854775807

static int		ft_overmax(int sign)
{
	if (sign == -1)
		return ((int)(-FT_LOG_MAX - 1));
	if (sign)
		return ((int)(FT_LOG_MAX));
	return (0);
}

int				ft_atoi(const char *str)
{
	int				i;
	long long int	res;

	res = 0;
	i = 1;
	while (ft_skip_space(*str))
		str++;
	if (*str == '-' || *str == '+')
		i = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
	{
		res = 10 * res + (int)(*str++ - '0');
		if (res >= (FT_LOG_MAX) / 10 && ft_isdigit(*str))
			return (ft_overmax(i));
	}
	return (res * i);
}
