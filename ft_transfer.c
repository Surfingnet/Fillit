/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:06:46 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/19 00:15:52 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_transfer(char *tetri[], char *array[], int x, int y)
{
	int	i;
	int	j;

	if (!ft_checkcollision(tetri, array, x, y))
		return (0);
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (tetri[i][j] != '.')
				array[i + y][j + x] = tetri[i][j];
	}
	return (1);
}
