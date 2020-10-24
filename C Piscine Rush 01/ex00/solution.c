/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:55:33 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 20:17:01 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "solution.h"
#include "boolean.h"
#include "constraint.h"
#include "print_grid.h"
#include "validation.h"
#include "is.h"
#include "logic.h"

extern	int		**g_grid;
extern	t_cstr	g_cstr[4];
extern	t_bool	g_finish;

int			ft_count_input(char *str)
{
	t_bool	has_nbr;
	int		count;

	count = 0;
	has_nbr = 0;
	while (*str)
	{
		has_nbr = 0;
		while (*str && ft_is_whitespace(*str))
			++str;
		while (*str && ft_is_numeric(*str))
		{
			has_nbr = 1;
			++str;
		}
		if (has_nbr)
			++count;
	}
	return (count);
}

int			**ft_create_grid(int grid_size)
{
	int		row;
	int		col;
	int		**grid;

	grid = NULL;
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

void		ft_free_grid(int grid_size)
{
	int		index;

	index = -1;
	while (++index < grid_size)
	{
		if (g_grid[index])
			free(g_grid[index]);
	}
	if (g_grid)
		free(g_grid);
}

t_bool		ft_init_sol(int grid_size, char *str)
{
	int		index;

	index = -1;
	while (++index < 4)
		g_cstr[index] = ft_create_cstr(str, grid_size * index, grid_size);
	if (!ft_validate_cstr(grid_size))
		return (1);
	g_grid = ft_create_grid(grid_size);
	dfs(0, 0, grid_size);
	ft_free_grid(grid_size);
	if (!g_finish)
		return (1);
	return (0);
}
