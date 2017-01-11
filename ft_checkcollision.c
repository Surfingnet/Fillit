/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcollision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 11:00:11 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/11 12:32:40 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_checkcollision(char **array[], int a, int b)
{
	int	i;
	int	j;

	i = -1;
	while (array[a][++i])
	{
		j = -1;
		while (array[a][i][++j])
			if (array[a][i][j] == '#' && array[b][i][j] == '#')
				return (0);
	}
	return (1);
}
