/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 12:37:39 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/11 12:43:58 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_display2d(char *array[])
{
	int	i;

	i = -1;
	while (array[++i])
	{
		ft_putendl(array[i]);
	}
	ft_putchar('\n');
}

void	ft_display3d(char **array[])
{
	int level;

	level = -1;
	while (array[++level])
		ft_display2d(array[level]);
}
