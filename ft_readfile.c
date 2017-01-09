/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:59:22 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/09 11:59:25 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readfile(int fd)
{
	int ret;
	char buf[BUFF_SIZE + 1];
	char *s;

	ret = 0;
	ret = read(fd, buf, BUFF_SIZE);
	if (!(s = ft_strnew(ret)))
		return (NULL);
	ft_strcpy(s, buf);
	return (s);
}
