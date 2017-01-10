/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:24:17 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 11:49:51 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 4096
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int		ft_openfile(char *file);
char	*ft_readfile(int fd);
int		ft_checkfile(const char *str);
char	***ft_putintab(char *s, int len);
int		ft_checktetri(char **tab);
typedef struct		s_tetri
{
	int				x[4];
	int				y[4];
	int				letter;
}					t_tetri;

#endif
