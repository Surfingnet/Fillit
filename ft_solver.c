/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:07:23 by mghazari          #+#    #+#             */
/*   Updated: 2017/02/17 14:25:52 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_pos	ft_posbis(t_pos pos, int x, int y)
{
	pos.z = pos.z - 1;
	pos.y = y;
	pos.x = x + 1;
	return (pos);
}

static t_pos	ft_pos(t_pos pos)
{
	pos.z = pos.z + 1;
	pos.x = 0;
	pos.y = 0;
	return (pos);
}

static int		ft_disfree(char *array[], int i)
{
	if (i > 0)
		ft_display2d(array);
	free_2d(array);
	return (1);
}

static int		ft_rec(char **tetriminos[], char *array[], t_pos pos)
{
	char	**backup;
	int		x;
	int		y;

	backup = new_2d_cpy(array);
	if (!tetriminos[pos.z])
	{
		return (ft_disfree(array, 1));
	}
	x = pos.x;
	y = pos.y;
	pos = ft_pos(pos);
	if (ft_transfer(tetriminos[pos.z - 1], array, x, y) && \
			ft_rec(tetriminos, array, pos))
	{
		return (ft_disfree(backup, 0));
	}
	if (array[y][x + 1] == '\0')
	{
		pos.z = pos.z - 1;
		pos.y = y + 1;
		return (array[y + 1] ? ft_rec(tetriminos, \
					restore(array, backup), pos) : 0);
	}
	else
	{
		pos = ft_posbis(pos, x, y);
		return (ft_rec(tetriminos, restore(array, backup), pos));
	}
}

char			**ft_solver(char **tetriminos[])
{
	int		i;
	char	**array;
	t_pos	pos;

	pos.x = 0;
	pos.y = 0;
	pos.z = 0;
	i = 2;
	while (!(array = ft_malloc2d(i, i)))
		continue;
	while (!ft_rec(tetriminos, array, pos))
	{
		++i;
		free_2d(array);
		while (!(array = ft_malloc2d(i, i)))
			continue;
	}
	return (array);
}
