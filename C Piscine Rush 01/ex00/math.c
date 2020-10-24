/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:44:20 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 11:02:53 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"
#include "boolean.h"
#define BASENUM 64

t_bool bTable[BASENUM];

double		ft_sqrt(double nbr)
{
	int		index;
	double	x;

	index = -1;
	x = 2;
	while (++index < 10)
	{
		x = (x + (nbr / x)) / 2;
	}
	return (x);
}

void		ft_square_table(void)
{
	int		index;

	index = -1;
	while (++index < BASENUM)
	{
		bTable[index * index % BASENUM] = 1;
	}
}
