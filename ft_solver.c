/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:07:23 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/19 03:44:22 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_rec(char **tetriminos[], char *array[], int x, int y, int z)
{
	char	**backup;

	if (!tetriminos[z])
	{
		ft_display2d(array);
		free_2d(array);
		return (1);
	}
	backup = new_2d_cpy(array);
	if (ft_transfer(tetriminos[z], array, x, y) && \
			ft_rec(tetriminos, array, 0, 0, z + 1))
	{
		free_2d(backup);
		return (1);
	}
	else if (array[y][x + 1] == '\0')
		return (array[y + 1] ? ft_rec(tetriminos, \
					restore(array, backup), 0, ++y, z) : 0);
	else
		return (ft_rec(tetriminos, restore(array, backup), ++x, y, z));
}

char		**ft_solver(char **tetriminos[])
{
	int	i;
	char	**array;

	i = 2;
	while (!(array = ft_malloc2d(i, i)))
		continue;
	while (!ft_rec(tetriminos, array, 0, 0, 0))
	{
		++i;
		free_2d(array);
		while (!(array = ft_malloc2d(i, i)))
			continue;
	}
	return (array);
}
