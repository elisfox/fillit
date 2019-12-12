/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:22:51 by fjessi            #+#    #+#             */
/*   Updated: 2019/12/10 23:51:29 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 32
# define SIZE_LINE 5
# define MIN_BUFF_SIZE 19
# define MAX_BUFF_SIZE 545

int					check_charactar(int fd1);
int					check_tetrimer(char **str);
int					get_next_line(int fd, char **line);
int					write_massiv(int fd1);
int					check_count_symbol(char **str);
int					check_count_touch(char **str);

typedef struct		s_tetr
{
	int				i;
	int				j;
	int				c;
}					t_tetr;

typedef struct		s_massiv
{
	size_t			i;
	int				count_tetri;
}					t_massiv;

typedef struct		s_square
{
	int				size;
	char			**str;
}					t_square;

t_square			*create_square(int size);
void				print_square(t_square *square);
void				free_square(t_square *square, int size);

typedef struct		s_fig
{
	int				x[4];
	int				y[4];
	char			letter;
	int				x_m;
	int				y_m;
	struct s_fig	*next;
}					t_fig;

t_fig				*makefigurka(char *buf);
t_fig				*get_buf(int fd1, char **line);
void				print_figurka(t_fig *head);
int					size_square(int count_tetri);
t_fig				*align(t_fig *list);
int					solve(t_fig *list, int fd1);
void				full_free(t_fig *list);

#endif
