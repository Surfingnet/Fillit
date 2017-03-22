/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/02/17 14:25:39 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	***preprocessor(int argc, char *argv[])
{
	char	***array;
	char	*s;
	int		t;

	if (argc != 2)
	{
		ft_error("usage: ./fillit file");
		return (NULL);
	}
	if (!((s = ft_readfile(ft_openfile(argv[1])))
		&& (t = ft_checkfile(s))))
	{
		ft_error("error");
		return (NULL);
	}
	array = (ft_putintab(s, t));
	if (!(array && ft_checkarray(array)))
	{
		ft_error("error");
		return (NULL);
	}
	return (array);
}

int			main(int argc, char *argv[])
{
	char	***array;
	char	**res;

	if (!(array = preprocessor(argc, argv)))
		return (1);
	ft_to_upleft(array);
	ft_letter(array);
	res = ft_solver(array);
	if (!res)
	{
		ft_error("error");
		return (1);
	}
	free_3d(array);
	return (0);
}
