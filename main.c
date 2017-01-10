/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:25:56 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/10 12:00:12 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char	**tab;
	char	*s;
	int	i;
	int	t;

	i = 0;
	if (argc != 2)
		return (1);
	if (!(s = ft_readfile(ft_openfile(argv[1]))) || !(t = ft_checkfile(s)))
	{
		ft_putendl("error");
		return (1);
	}
	tab = (ft_putintab(s, t));
	/*while (tab[i])
	  {
	  ft_putendl(tab[i]);
	  i++;
	  }
	 */
	return (0);
}
