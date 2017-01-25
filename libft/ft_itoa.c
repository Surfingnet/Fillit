/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:52:54 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/28 06:25:46 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_intermediate(int n, char *str, int size)
{
	int i;
	int rec;

	rec = n;
	i = 0;
	if (n == 0)
	{
		str[0] = '0';
		i++;
	}
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	if (rec < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	ft_reverse(str, size);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (j <= 0)
	{
		j = -j;
		i++;
	}
	while (j > 0)
	{
		j = j / 10;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_itoa_intermediate(n, str, i);
	return (str);
}
