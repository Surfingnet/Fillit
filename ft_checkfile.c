/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:55:42 by mghazari          #+#    #+#             */
/*   Updated: 2017/01/09 16:13:46 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	perform_check(const char *str, int i, int j, int t)
{
	while (str[++i])
		if ((str[i] != '.' && str[i] != '#' && str[i] != '\n') || ((i - t) % 5\
			== 4 && str[i] != '\n') || (str[i] == '\n' && (i - t) % 5 != 4))
			return (0);
		else if (str[i] == '\n')
		{
			j++;
			if (str[i + 1] == '\0')
					return (++t < 26 && t > 4 ? t : 0);
			else if (str[i + 1] == '\n')
			{
				t++;
				i++;
				j = 1;
			}
			else if (j > 4)
				return (0);
		}
	return (0);
}

int			ft_checkfile(const char *str)
{
	return (perform_check(str, -1, 1, 0));
}
