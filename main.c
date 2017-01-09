/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 14:19:34 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	//char **tab;
	int i;

	i = 0;
	if (argc != 2)
		return (-1);
	ft_putendl(ft_itoa(ft_checkfile(ft_readfile(ft_openfile(argv[1])))));
	return (0);
}
