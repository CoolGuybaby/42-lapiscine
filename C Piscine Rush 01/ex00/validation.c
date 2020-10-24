/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:40:10 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 15:45:42 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "constraint.h"

t_bool		ft_validate_cstr(t_cstr cstr[4], int grid_size)
{
	int	max_val;
	int	index;

	max_val = grid_size + 1;
	index = -1;
	while (++index < grid_size)
	{
		if (cstr[UP].val[index] + cstr[DOWN].val[index] > max)
			return (0);
		if (cstr[UP].val[index] + cstr[DOWN].val[index] > max)
			return (0);
	}
	return (1);
}
