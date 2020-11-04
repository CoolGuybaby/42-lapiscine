/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:03:25 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 20:58:00 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_boolean.h"
#include "ft_ab_types.h"

t_bool		ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');
}

t_bool		ft_is_printable(char ch)
{
	return (32 <= ch && ch <= 126);
}

t_bool		ft_is_status_problem(t_grid *grid)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 2)
	{
		j = i;
		while (++j < 3)
			if (grid->conv[i] == grid->conv[j])
				return (1);
	}
	return (0);
}
