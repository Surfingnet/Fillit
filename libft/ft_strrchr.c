/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:49:42 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/27 05:49:44 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				i;
	int				n;
	char			*p;

	i = 0;
	p = (char *)s;
	n = -1;
	a = (unsigned char)c;
	while (p[i] != '\0')
	{
		if (p[i] == a)
			n = i;
		i++;
	}
	if (n >= 0)
		return (p + n);
	if (p[i] == a)
		return (p + i);
	return (NULL);
}
