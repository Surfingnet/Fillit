/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:48:15 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/27 05:48:16 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char*)malloc((ft_strlen((char*)s1) + 1) * sizeof(*s1));
	if (!s2)
		return (0);
	s2[ft_strlen((char*)s1) + 1] = '\0';
	while (i <= ft_strlen((char*)s1))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
