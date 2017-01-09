/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:34:01 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 13:34:05 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_putintab(char *s, int len)
{
	char **tab;
	int i;
	int j;
	int u;

	i = 0;
	j = 0;
	u = 0;


	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\n' && s[i + 1] != '\n' && s[i + 1] != '\0')
			j++;
		tab[u] = ft_strsub(s, i, j - i);
		i = j;
	}
	return (tab);
}
