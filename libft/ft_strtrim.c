/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:56:47 by fjessi            #+#    #+#             */
/*   Updated: 2019/09/19 21:32:07 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	ssize_t	i;
	ssize_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	while ((s[size - 1] == ' ' || s[size - 1] == '\t' || s[size - 1] == '\n')\
			&& s[size - 1])
		size--;
	i = -1;
	while ((s[++i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		size--;
	if (size <= 0)
		size = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	s += i;
	i = -1;
	while (++i < size)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
