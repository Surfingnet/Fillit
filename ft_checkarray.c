/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:38:34 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/10 17:12:22 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	count_conn(char *tetri[], int i, int j)
{
	int connections;

	connections = 0;
	if ((i - 1) > -1 && tetri[i - 1][j] == '#')
		connections++;
	if ((i + 1) < 4 && tetri[i + 1][j] == '#')
		connections++;
	if ((j - 1) > -1 && tetri[i][j - 1] == '#')
		connections++;
	if ((j + 1) < 4 && tetri[i][j + 1] == '#')
		connections++;
	return (connections);
}

static int	connected(char *tetri[])
{
	int	total;
	int	i;
	int	j;

	total = 0;
	i = -1;
	while (tetri[++i])
	{
		j = -1;
		while (tetri[i][++j])
			if (tetri[i][j] == '#')
				total += count_conn(tetri, i, j);
	}
	return (total == 6 || total == 8);
}

static int	four_blocks(char *tetri[])
{
	int	i;
	int	j;
	int	f;

	f = 0;
	i = -1;
	while (tetri[++i])
	{
		j = -1;
		while (tetri[i][++j])
			if (tetri[i][j] == '#')
				f++;
	}
	return (f == 4);
}

int		ft_checkarray(char **array[])
{
	int	i;

	i = -1;
	while (array[++i])
		if(!(four_blocks(array[i]) && connected(array[i])))
			return (0);
	return (1);
}
