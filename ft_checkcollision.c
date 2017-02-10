/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcollision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 11:00:11 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/18 18:01:05 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	horizontal(char *tetri[])
{
	int	i;
	int	j;
	int	tmp;
	int	res;

	res = 0;
	i = -1;
	while (++i < 4)
	{
		tmp = 0;
		j = -1;
		while (++j < 4 && !tmp)
			tmp = tetri[j][i] != '.';
	}
	return (res);
}

static int	vertical(char *tetri[])
{
	int	i;
	int	j;
	int	tmp;
	int	res;

	res = 0;
	i = -1;
	while (++i < 4)
	{
		tmp = 0;
		j = -1;
		while (++j < 4 && !tmp)
			tmp = tetri[i][j] != '.';
		res += tmp;
	}
	return (res);
}

static int	out_of_range(char *tetri[], char *array[], int x, int y)
{
	int	v;
	int	h;
	int	i;

	v = vertical(tetri);
	h = horizontal(tetri);
	i = -1;
	while (array[(++i) + y] && i < v)
		continue;
	if (i != v)
		return (1);
	i = -1;
	while (array[y][(++i) + x] && i < h)
		continue;
	return (i != h);
}

int			ft_checkcollision(char *tetri[], char *array[], int x, int y)
{
	int	i;
	int	j;

	if (out_of_range(tetri, array, x, y))
		return (0);
	i = -1;
	while (tetri[++i])
	{
		j = -1;
		while (tetri[i][++j])
			if (tetri[i][j] != '.' && array[i + y][j + x] != '.')
				return (0);
	}
	return (1);
}
