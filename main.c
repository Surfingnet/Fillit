/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/11 14:33:47 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char	***tab;
	char	*s;
	int	i;
	int	t;

	i = 0;

	if (argc != 2)
	{
		ft_error("usage: ./fillit file");
		return (1);
	}
	if (!((s = ft_readfile(ft_openfile(argv[1]))) && (t = ft_checkfile(s))))
	{
		ft_error("error1");
		return (1);
	}
	tab = (ft_putintab(s, t));
	if (!(tab && ft_checkarray(tab)))
	{
		ft_error("error2");
		return (1);
	}
	ft_to_upleft(tab);
	ft_letter(tab);
	ft_display3d(tab);
	/*
	**TODO
	*/
	ft_putendl("\n\n-OK");
	return (0);
}
