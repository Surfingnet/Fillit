/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:09:20 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/12 13:02:10 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_letter(char **array[])
{
	int i;
	int j;
	int k;

	i = -1;
	while (array[++i])
	{
		j = -1;
		while (array[i][++j])
		{
			k = -1;
			while (array[i][j][++k])
				array[i][j][k] = (array[i][j][k] == '#' ? 'A' + i : '.');
		}
	}
}

void	ft_arrayset2d(char *array[], int x, int y)
{
	int	i;

	i = -1;
	while (++i < y)
		ft_memset(array[i], (int)'.', x);
}

void	ft_arrayset3d(char **array[], int x, int y, int z)
{
	int	i;

	i = -1;
	while (++i < z)
		ft_arrayset2d(array[i], x, y);
}
