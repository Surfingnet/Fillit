/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:53:19 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/28 06:25:12 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*ft_next(char const *s, char c, int next)
{
	if (next)
	{
		while ((*s != '\0') && (*s == c))
			s++;
	}
	else
	{
		while ((*s != '\0') && (*s != c))
			s++;
	}
	return (s);
}

static int			ft_len(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s = ft_next(s, c, 1);
		if (*s != '\0')
		{
			i++;
			s = ft_next(s, c, 0);
		}
	}
	return (i);
}

static char			**ft_sup(char **sup, int size)
{
	int i;

	i = 0;
	while (i < size)
		free(sup[i]);
	free(sup);
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**exit;
	int			i;
	char const	*next;

	if (!s)
		return (NULL);
	if (!(exit = (char**)malloc(sizeof(char*) * (ft_len(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_next(s, c, 1);
		if (*s != '\0')
		{
			next = ft_next(s, c, 0);
			exit[i] = ft_strsub(s, 0, next - s);
			if (!exit[i])
				return (ft_sup(exit, i));
			i++;
			s = next;
		}
	}
	exit[i] = NULL;
	return (exit);
}
