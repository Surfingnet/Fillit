/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:17:32 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/11 14:54:26 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_malloc2d(int x, int y)
{
	char *array[];
	int i;

	i = -1;
	if (!(array = ft_memalloc(sizeof(char*) * y)))
		return (NULL);
	while (++i < y)
	{
		if (!(array[i] = ft_strnew(x)))
		{
			free2d(array);
			return (NULL);
		}
	}
	return (array);
}

char	***ft_malloc3d(int x, int y, int z)
{
	char	**array[];
	int		i;
	int		y;

	i = -1;
	if (!(array = ft_memalloc(sizeof(char**) * z)))
		return (NULL);
	else
	{
		while (++i < z)
			if(!(array[i] = ft_malloc2d(x, y)))
			{
				free3d(array);
				return (NULL);
			}
	}
	return (array);
}
