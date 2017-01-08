/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:24:17 by jgaillar          #+#    #+#             */
/*   Updated: 2017/01/08 10:31:04 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "libft.h"
#include <fcntl.h>

typedef struct		s_tetri
{
	int				x[4];
	int				y[4];
	int				letter;
}					t_tetri;

#endif
