/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:35:42 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 18:27:20 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "constraint.h"
#include "is.h"

t_cstr		ft_create_cstr(char *str, int offset, int size)
{
	int		index;
	int		acc;
	t_cstr	constraint;

	index = 0;
	constraint.size = size;
	constraint.val = (int *)malloc(sizeof(int) * size);
	while (*str && index < size)
	{
		acc = 0;
		while (*str && ft_is_whitespace(*str))
			++str;
		while (*str && ft_is_numeric(*str))
		{
			acc *= 10;
			acc += (*str++ - 48);
		}
		if (offset)
			--offset;
		else
			constraint.val[index++] = acc;
		++str;
	}
	return (constraint);
}
