/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:17:32 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/19 04:00:37 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	get_v(char *array[])
{
	int	i;

	i = -1;
	while (array[++i])
		continue;
	return (i);
}

char		**ft_malloc2d(int x, int y)
{
	char	**array;
	int	i;

	i = -1;
	while (!(array = (char**)ft_memalloc(sizeof(char*) * (y + 1))))
		continue;
	while (++i < y)
	{
		while (!(array[i] = ft_strnew(x)))
			continue;
		ft_memset((void*)array[i], (int)'.', x);
	}
	return (array);
}

char		***ft_malloc3d(int x, int y, int z)
{
	char	***array;
	int		i;

	i = -1;
	while(!(array = ft_memalloc(sizeof(char**) * (z + 1))))
		continue;
	while (++i < z)
		while (!(array[i] = ft_malloc2d(x, y)))
			continue;
	return (array);
}

char		**new_2d_cpy(char *actual[])
{
	char	**array;
	int	i;
	int	y;

	y = get_v(actual);
	i = -1;
	while(!(array = (char**)ft_memalloc(sizeof(char*) * (y + 1))))
		continue;
	while (++i < y)
	{
		while (!(array[i] = ft_strdup(actual[i])))
			continue;
	}
	return (array);
}

char		**restore(char *actual[], char *cpy[])
{
	actual = cpy;
	return (actual);
}
