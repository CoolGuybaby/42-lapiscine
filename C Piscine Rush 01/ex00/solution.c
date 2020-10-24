/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:55:33 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 15:46:44 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "solution.h"
#include "boolean.h"
#include "constraint.h"
#include "print_grid.h"
#include "validation.h"

int			ft_count_input(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (ft_is_numeric(*str))
			++count;
		++str;
	}
	return (count);
}

int			**ft_create_grid(int grid_size)
{
	int		row;
	int		col;
	int		**grid;

	grid = (int **)malloc(sizeof(int *) * grid_size);
	row = -1;
	while (++row < grid_size)
	{
		grid[row] = (int *)malloc(sizeof(int) * grid_size);
		col = -1;
		while (++col < grid_size)
			grid[row][col] = 0;
	}
	return (grid);
}

void		ft_free_grid(int **grid, int grid_size)
{
	int		index;

	index = -1;
	while (++index < grid_size)
		free(grid[index]);
	free(grid);
}

t_bool		ft_init_sol(int grid_size, char *str)
{
	t_cstr	cstr[4];
	t_bool	is_possible;
	int		index;
	int		**grid;

	index = -1;
	while (++index < 4)
		cstr[index] = ft_create_cstr(*str, grid_size * index, grid_size);
	grid = ft_create_grid(grid_size);
	if (!ft_validate_cstr(cstr, grid_size))
	 	return (1);
	// solution that returns bool
	// is_possible = ();
	if (is_possible)
		ft_print_grid(grid, grid_size);
	free_grid(grid, grid_size);
	return (0);
}
