/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsong <dsong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:25:26 by dsong             #+#    #+#             */
/*   Updated: 2020/10/24 20:01:44 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "validation.h"
#include "constraintchecker.h"
#include "print_grid.h"

extern	int		**g_grid;
extern	t_cstr	g_cstr[4];
extern	t_bool	g_finish;

t_bool	ispassible(int row, int col, int n, int num)
{
	int		i;
	t_bool	check;

	i = 0;
	while (i < n)
	{
		if (g_grid[row][i] == num)
			return (0);
		if (g_grid[i][col] == num)
			return (0);
		i++;
	}
	g_grid[row][col] = num;
	check = ft_checklines(row, col, n);
	g_grid[row][col] = 0;
	return (check);
}

void	dfs(int row, int col, int n)
{
	int i;

	i = 1;
	while (!g_finish && (i <= n))
	{
		if (ispassible(row, col, n, i))
		{
			g_grid[row][col] = i;
			if (row == n - 1 && col == n - 1)
			{
				ft_print_grid(n);
				g_finish = true;
				return ;
			}
			dfs(row + ((col + 1) / n), (col + 1) % n, n);
			g_grid[row][col] = 0;
		}
		i++;
	}
}
