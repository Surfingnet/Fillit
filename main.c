/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 12:05:37 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char **tab;
	int i;

	i = 0;
	if (argc != 2)
		return (-1);
	tab = ft_putintab(ft_readfile(ft_openfile(argv[1])), 4);
	while (tab[i])
	{
		ft_putendl(tab[i]);
		i++;
	}
	return (0);
}
