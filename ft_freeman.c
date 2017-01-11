/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeman.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:37:05 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/11 14:07:36 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_3d(char **array[])
{
	int	x;
	int	y;

	x = -1;
	while (array[++x])
	{
		y = -1;
		while (array[x][++y])
			ft_strdel(&array[x][y]);
		ft_memdel((void**)(&array[x]));
	}
	free(array);
}

void	free_2d(char *array[])
{
	int	i;

	i = -1;
	while (array[++i])
		ft_strdel(&array[i])
	free(array);
}
