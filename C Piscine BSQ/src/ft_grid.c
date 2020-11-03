/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:10:26 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 02:46:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_io.h"

t_bool	ft_load_grid(char *path, t_grid *grid)
{
	int		fd;
	t_bool	result;

	fd = ft_open_file(path);
	if (fd < 0)
		return (false);
	result = ft_parse_grid(fd, grid);
	ft_close_file(fd);
	return (result);
}

void	ft_free_grid(t_grid *grid)
{
	if (grid->map)
		free(grid->map);
	if (grid->content)
		free(grid->content);
}

void	ft_print_grid(t_grid *grid, t_sol *sol)
{
	t_int	i;
	t_int	j;
	t_int	x_start;
	t_int	y_start;

	x_start = sol->x - sol->size;
	y_start = sol->y - sol->size;
	i = 0;
	while (i < grid->row)
	{
		j = 0
		while (j < grid->col)
		{
			if (grid->map[j][i] == 0)
				write(OUT, &grid[obstacle], 1);
			else if (i >= y_start && i <= sol->y
					&& j >= x_start && j <= sol->x)
				write(OUT, &grid[full], 1);
			else
				write(OUT, &grid[empty], 1);
		}
		write(OUT, &"\n", 1);
	}
}
