/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:02:53 by jseo              #+#    #+#             */
/*   Updated: 2020/11/05 04:02:37 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_array.h"
#include "ft_number.h"
#include "ft_is.h"
#include "ft_core.h"

t_bool		ft_read_all(int fd, t_char **content, t_int *total_bytes)
{
	t_char		buffer[SIZE_MB];
	t_int		read_val;

	if (read(fd, 0, 0) < 0)
		return (false);
	*total_bytes = 0;
	*content = NULL;
	while ((read_val = read(fd, buffer, SIZE_MB)) > 0)
	{
		if (!(*content = ft_resize_array(*content,
			buffer, *total_bytes, *total_bytes + read_val)))
			return (false);
		(*total_bytes) += read_val;
	}
	if (!read_val)
		return (true);
	return (false);
}

t_bool		ft_parse_info(t_grid *grid, t_char *content, t_int length)
{
	if (length < 4)
		return (false);
	grid->conv[empty] = content[length - 3];
	grid->conv[obstacle] = content[length - 2];
	grid->conv[full] = content[length - 1];
	if (ft_is_status_problem(grid))
		return (false);
	if (!ft_is_printable(grid->conv[empty])
		|| !ft_is_printable(grid->conv[obstacle])
		|| !ft_is_printable(grid->conv[full]))
		return (false);
	if (grid->conv[empty] == grid->conv[obstacle]
		|| grid->conv[empty] == grid->conv[full]
		|| grid->conv[obstacle] == grid->conv[full])
		return (false);
	return (ft_atoi_n(content, length - 3, &(grid->row)));
}

t_bool		ft_find_col(t_grid *grid, t_int start, t_int total)
{
	t_int	index;

	index = start;
	while (index < total)
	{
		if (grid->content[index] == '\n')
		{
			grid->col = index - start;
			if (grid->col == 0)
				return (false);
			return (true);
		}
		++index;
	}
	return (false);
}

t_bool		ft_parse_grid(t_grid *grid, t_sol *sol, t_int start, t_int total)
{
	t_int	previous;
	t_int	index;
	t_int	count;

	previous = 0;
	index = 0;
	count = 0;
	if (!ft_find_col(grid, start, total) || !ft_malloc_grid(grid))
		return (false);
	while (index < total - start)
	{
		if (grid->content[start + index] == '\n')
		{
			++count;
			if (index - previous != grid->col)
				return (false);
			previous = index++ + 1;
			continue;
		}
		if (count >= grid->row || !ft_core(grid, sol, start, index++))
			return (false);
	}
	if (count != grid->row)
		return (false);
	return (true);
}

t_bool		ft_parse(int fd, t_grid *grid, t_sol *sol)
{
	t_int	total_bytes;
	t_int	index;

	grid->content = NULL;
	grid->map = NULL;
	grid->col = 0;
	grid->row = 0;
	sol->y = -1;
	sol->x = -1;
	sol->size = 0;
	index = 0;
	if (!ft_read_all(fd, &(grid->content), &total_bytes))
		return (false);
	while (index < total_bytes)
	{
		if (grid->content[index] == '\n')
		{
			if (!ft_parse_info(grid, grid->content, index))
				return (false);
			return (ft_parse_grid(grid, sol, index + 1, total_bytes));
		}
		++index;
	}
	return (false);
}
