/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:52:49 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 11:12:25 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "math.h"

#include <stdio.h>
#define BASENUM 64
extern t_bool  bTable[BASENUM];

t_bool		ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');

}

t_bool		ft_is_square(unsigned int nbr)
{
	unsigned int	temp;

	if (bTable[(int)nbr & (BASENUM - 1)])
	{
		temp = (unsigned int)(ft_sqrt((double)nbr) + 0.5);
		return (temp * temp == nbr);
	}
	else
		return (0);
}
