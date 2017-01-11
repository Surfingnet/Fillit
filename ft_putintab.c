/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 16:41:30 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/11 16:51:35 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***memtab(int len)
{
	char ***tab;
	int i;
	int j;

	i = -1;
	j = 0;

	if (!(tab = (char ***)malloc(sizeof(char **) * (len + 1))))
		return (NULL);
	tab[len] = NULL;
	while (tab[++i])
		if (!(tab[i] = (char **)malloc(sizeof(char *) * (5))))
			return (NULL);
	return (tab);
}

char	***ft_putintab(char *s, int len)
{
	char ***tab;
	int i;

	i = -1;

	if (!(tab = memtab(len)))
		return (NULL);
	while (++i < len)
	{
		if (!(tab[i] = ft_strsplit(ft_strsub(s, i * 21, 21), '\n')))
			return (NULL);
	}
	return (tab);
}
