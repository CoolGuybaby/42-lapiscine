/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:04:51 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 20:57:08 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_core.h"
#include "ft_grid.h"
#include "ft_number.h"

t_bool		ft_convert_char(t_grid *grid, t_char from, t_int *to)
{
	t_int i;

	i = 0;
	while (i < 3)
	{
		if (grid->conv[i] == from)
		{
			*to = i;
			return (true);
		}
		i++;
	}
	return (false);
}

t_bool		ft_core(t_grid *grid, t_sol *sol, t_int start, t_int index)
{
	t_int	x;
	t_int	y;
	t_int	value;

	y = index / (grid->col + 1) + 1;
	x = index % (grid->col + 1) + 1;
	if (!ft_convert_char(grid, grid->content[start + index], &value))
		return (false);
	if (value == empty)
	{
		value = ft_min(grid->map[(y - 1) * (grid->col + 1) + x],
						grid->map[y * (grid->col + 1) + (x - 1)],
						grid->map[(y - 1) * (grid->col + 1) + (x - 1)]) + 1;
		if (sol->size < value)
		{
			sol->size = value;
			sol->x = x;
			sol->y = y;
		}
	}
	grid->map[y * (grid->col + 1) + x] = value;
	return (true);
}
