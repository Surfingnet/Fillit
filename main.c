/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 16:47:20 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char **tab;
	char *s;
	int i;

	i = 0;
	s = ft_readfile(ft_openfile(argv[1]));
	if (argc != 2)
		return (-1);
	//ft_readfile(ft_openfile(argv[1]));
	tab = (ft_putintab(s, ft_checkfile(s)));
	while (tab[i])
	{
		ft_putendl(tab[i]);
		i++;
	}
	return (0);
}
