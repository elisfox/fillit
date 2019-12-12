/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:48:02 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/21 17:28:14 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length_itoa(int n)
{
	int length;

	length = 0;
	if (n < 0)
		length++;
	if (n == 0)
		length = 1;
	while (n)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = ft_length_itoa(n);
	str = ft_strnew(length);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[length-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && length >= 0)
	{
		str[length-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
