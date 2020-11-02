/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:56:23 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 17:02:29 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_boolean.h"
#include "ft_ab_types.h"

t_bool	ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');
}

t_bool	ft_is_row_size_changed(t_grid *grid, t_int *row_size)
{
	if (*row_size == (t_int)-1)
		*row_size = grid->col;
	return (*row_size != grid->col);
}
