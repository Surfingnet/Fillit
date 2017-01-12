/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 11:19:07 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/11 14:10:38 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_move(char **array[], int level, int up, int right)
{
	int	i;
	int	j;

	i = -1;
	while (array[level][++i])
	{
		j = -1;
		while (array[level][i][++j])
		{
			if (array[level][i][j] != '.')
			{
				array[level][i - up][j + right] = array[level][i][j];
				array[level][i][j] = '.';
			}
		}
	}
}

int		ft_canbemoved(char **array[], int level, int up, int right)
{
	int	i;
	int	j;

	i = -1;
	while (array[level][++i])
	{
		j = -1;
		while (array[level][i][++j])
			if (array[level][i][j] != '.')
				if ((i - up) < 0 || (i - up) > 3 || (j + right) < 0 || \
						(j + right) > 3)
					return (0);
	}
	return (1);
}

void	ft_to_upleft(char **array[])
{
	int	level;

	level = -1;
	while (array[++level])
	{
		while (ft_canbemoved(array, level, 1, 0))
			ft_move(array, level, 1, 0);
		while (ft_canbemoved(array, level, 0, -1))
			ft_move(array, level, 0, -1);
	}
}
