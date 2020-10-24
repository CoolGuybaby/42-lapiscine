/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:35:42 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 15:42:24 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "constraint.h"
#include "is.h"

t_cstr		ft_create_cstr(char *str, int offset, int size)
{
	int		index;
	t_cstr	constraint;

	constraint.size = size;
	constraint.val = (int *)malloc(sizeof(int) * size);
	index = 0;
	while (index < size)
	{
		if (!*str)
			break ;
		if (ft_is_numeric(*str))
		{
			if (offset)
				--offset;
			else
			{
				constraint.v[index] = *str - 48;
				++index;
			}
		}
		++str;
	}
	return (constraint);
}
