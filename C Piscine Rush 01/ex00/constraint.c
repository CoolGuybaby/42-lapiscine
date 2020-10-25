/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:35:42 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 22:07:50 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "constraint.h"
#include "is.h"

extern		t_cstr	g_cstr[4];

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

void		ft_free_cstr(void)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_cstr[i].val)
			free(g_cstr[i].val);
		i++;
	}
}
