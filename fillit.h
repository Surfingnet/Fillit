/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:24:17 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/11 14:33:25 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 4096
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int			ft_openfile(char *file);
int			ft_checkfile(const char *str);
int			ft_checkarray(char **array[]);
int			ft_checkcollision(char **array[], int a, int b);
int			ft_canbemoved(char **array[], int level, int up, int right);

char		*ft_readfile(int fd);

char		***ft_putintab(char *s, int len);

void		free_3d(char **array[]);
void		free_2d(char *array[]);
void		ft_move(char **array[], int level, int up, int right);
void		ft_to_upleft(char **array[]);
void		ft_display2d(char *array[]);
void		ft_display3d(char **array[]);
void		ft_letter(char **array[]);
void 		ft_error(char *s);

typedef struct	s_tetri
{
	int	x[4];
	int	y[4];
	int	letter;
}		t_tetri;

#endif
