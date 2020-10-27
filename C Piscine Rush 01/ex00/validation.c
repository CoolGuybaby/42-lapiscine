/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:40:10 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 15:33:59 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "constraint.h"

extern	t_cstr	g_cstr[4];

t_bool		ft_validate_cstr(int grid_size)
{
	int	max_val;
	int	index;

	max_val = grid_size + 1;
	index = -1;
	while (++index < grid_size)
	{
		if (g_cstr[UP].val[index] + g_cstr[DOWN].val[index] > max_val)
			return (0);
		if (g_cstr[LEFT].val[index] + g_cstr[RIGHT].val[index] > max_val)
			return (0);
	}
	return (1);
}
