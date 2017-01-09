/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:50:21 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 11:50:22 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_openfile(char *file)
{
	int fd;

	fd = (open(file, O_RDONLY));
	if (fd < 0)
	{
		write(2, "error opening file", 19);
		return (-1);
	}
	return (fd);
}
