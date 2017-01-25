/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:31:54 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/27 05:31:58 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	n;
	char			*s;

	i = 0;
	n = (unsigned char)c;
	s = (char *)b;
	while (i < len)
	{
		s[i] = n;
		i++;
	}
	return (b);
}
