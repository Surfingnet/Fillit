/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:09:20 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/11 14:09:24 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void 	ft_letter(char **array[])
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (array[i])
	{
		while (array[i][j])
		{
			while (array[i][j][k])
			{
				if (array[i][j][k] != '#')
				{
					k++;
				}
				else if (array[i][j][k] == '#')
				{
					array[i][j][k] = 'A' + i;
					k++;
				}
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
