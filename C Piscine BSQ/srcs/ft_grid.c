/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:04:34 by jseo              #+#    #+#             */
/*   Updated: 2020/11/05 00:08:05 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_io.h"
#include <stdlib.h>

t_bool		ft_init(char *p, t_grid *grid, t_sol *sol, t_bool *op)
{
	int		fd;
	t_bool	result;

	fd = ft_open_file(p);
	if (fd < 0)
	{
		*op = 0;
		return (false);
	}
	*op = 1;
	result = ft_parse(fd, grid, sol);
	ft_close_file(fd);
	return (result);
}

t_bool		ft_malloc_grid(t_grid *grid)
{
	t_int	i;

	if (!(grid->map = (t_int *)malloc((grid->row + 1)
					* (grid->col + 1) * sizeof(t_int))))
		return (false);
	i = -1;
	while (++i < grid->row + 1)
		grid->map[i * (grid->col + 1)] = 0;
	i = -1;
	while (++i < grid->col + 1)
		grid->map[i] = 0;
	return (true);
}

void		ft_free_grid(t_grid *grid)
{
	if (grid->map)
	{
		free(grid->map);
		grid->map = NULL;
	}
	if (grid->content)
	{
		free(grid->content);
		grid->content = NULL;
	}
}

void		ft_print_grid(t_grid *grid, t_sol *sol)
{
	t_int	i;
	t_int	j;
	t_int	x_start;
	t_int	y_start;

	x_start = sol->x - sol->size;
	y_start = sol->y - sol->size;
	i = 1;
	while (i <= grid->row)
	{
		j = 1;
		while (j <= grid->col)
		{
			if (grid->map[i * (grid->col + 1) + j] == 0)
				write(OUT, &grid->conv[obstacle], 1);
			else if (i > y_start && i <= sol->y
					&& j > x_start && j <= sol->x)
				write(OUT, &grid->conv[full], 1);
			else
				write(OUT, &grid->conv[empty], 1);
			j++;
		}
		write(OUT, &"\n", 1);
		i++;
	}
}
