/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_buf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:41:49 by fjessi            #+#    #+#             */
/*   Updated: 2019/12/05 15:43:41 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fig		*get_buf(int fd1, char **line)
{
	static char		*s[10240];
	char			buf[MAX_BUFF_SIZE + 1];
	int				b_w_reaad;
	char			*tmp;

	if (!(fd1 < 0 || fd1 > 10240 || line == NULL))
	{
		while ((b_w_reaad = read(fd1, buf, MAX_BUFF_SIZE)) > 0)
		{
			buf[b_w_reaad] = '\0';
			if (s[fd1] == NULL)
				s[fd1] = ft_strnew(1);
			tmp = ft_strjoin(s[fd1], buf);
			free(s[fd1]);
			s[fd1] = tmp;
			if (ft_strchr(buf, '\n'))
				break ;
		}
		return (makefigurka(buf));
	}
	exit(0);
}
