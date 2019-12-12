/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:28:32 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/23 16:29:08 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (1);
	else if (nb >= 1 && nb < 13)
	{
		while (nb > 0)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	else
		return (0);
}
