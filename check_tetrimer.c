/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetrimer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:59:50 by fjessi            #+#    #+#             */
/*   Updated: 2019/12/11 20:34:22 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		free_str(char **str)
{
	ft_free(str);
	return (0);
}

int		check_tetrimer(char **str)
{
	int		k;
	int		c;

	c = 0;
	k = check_count_symbol(str);
	if (k == 4)
		c = check_count_touch(str);
	if (k == 4 && c >= 6)
		return (1);
	else
		return (0);
}

int		write_massiv(int fd1)
{
	char		*line;
	char		**str;
	t_massiv	m;

	m.count_tetri = 0;
	if ((str = (char**)malloc(sizeof(char*) * 4)) == NULL)
		return (0);
	while ((get_next_line(fd1, &line)))
	{
		m.i = 0;
		while (m.i < 4)
		{
			if ((str[m.i++] = ft_strsub(line, 0, 5)) == NULL)
				free_str(str);
			free(line);
			get_next_line(fd1, &line);
		}
		if (check_tetrimer(str) == 0)
		{
			free_str(str);
			return (0);
		}
		m.count_tetri++;
	}
	return (m.count_tetri);
}
