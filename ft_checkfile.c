/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:55:42 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/09 14:11:17 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_file(const char *str)
{
	int	i;
	int	t;

	i = -1;
	t = 1;
	while (str[++i])
	{
		if ((str[i] != '.' && str[i] != '#' && str[i] != '\n') \
				|| (i % 4 == 0 && str[i] != '\n')\
				|| (str[i] == '\n' && i % 4 != 0))
			return (0);
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\0')
				return (++t);
			else if (str[i + 1] == '\n')
			{
				t++;
				i++;
			}
			else
				return (0);
		}
	}
	return (0);
}
