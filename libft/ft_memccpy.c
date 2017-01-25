/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:23:19 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/27 05:23:23 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*d;
	unsigned char			*s;
	unsigned char			a;
	size_t					i;

	i = 0;
	a = (unsigned char)c;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		if ((*d++ = *s++) == a)
			return (d);
		i++;
	}
	return (NULL);
}
