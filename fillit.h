/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:24:17 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/25 14:24:41 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 4096
#include "./libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

int		ft_openfile(char *file);
int		ft_checkfile(const char *str);
int		ft_checkarray(char **array[]);
int             ft_checkcollision(char *tetri[], char *array[], int x, int y);
int		ft_canbemoved(char **array[], int level, int up, int right);
int		ft_transfer(char *tetri[], char *array[], int x, int y);

char		*ft_readfile(int fd);

char		**ft_malloc2d(int x, int y);
char		**ft_solver(char **tetriminos[]);
char		**new_2d_cpy(char *actual[]);
char		**restore(char *actual[], char *cpy[]);

char		***ft_malloc3d(int x, int y, int z);
char		***ft_putintab(char *s, int len);

void		free_3d(char **array[]);
void		free_2d(char *array[]);
void		ft_move(char **array[], int level, int up, int right);
void		ft_to_upleft(char **array[]);
void		ft_display2d(char *array[]);
void		ft_display3d(char **array[]);
void		ft_letter(char **array[]);
void 		ft_error(char *s);
void		ft_arrayset2d(char *array[], int x, int y);
void		ft_arrayset3d(char **array[], int x, int y, int z);

#endif
