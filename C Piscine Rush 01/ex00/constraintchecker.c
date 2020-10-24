/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraintchecker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsong <dsong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:00:28 by dsong             #+#    #+#             */
/*   Updated: 2020/10/24 20:50:18 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "validation.h"

extern	int		**g_grid;
extern	t_cstr	g_cstr[4];

t_bool	ft_checkcolup(int col, int n)
{
	int		i;
	int		max;
	int		count;

	i = 0;
	max = 0;
	count = 0;
	while (i < n)
	{
		if (g_grid[i][col] > max)
		{
			max = g_grid[i][col];
			count++;
		}
		i++;
	}
	if (count != g_cstr[0].val[col])
		return (0);
	return (1);
}

t_bool	ft_checkcoldown(int col, int n)
{
	int		i;
	int		max;
	int		count;

	i = n - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (g_grid[i][col] > max)
		{
			max = g_grid[i][col];
			count++;
		}
		i--;
	}
	if (count != g_cstr[1].val[col])
		return (0);
	return (1);
}

t_bool	ft_checkrowleft(int row, int n)
{
	int		i;
	int		max;
	int		count;

	i = 0;
	max = 0;
	count = 0;
	while (i < n)
	{
		if (g_grid[row][i] > max)
		{
			max = g_grid[row][i];
			count++;
		}
		i++;
	}
	if (count != g_cstr[2].val[row])
		return (0);
	return (1);
}

t_bool	ft_checkrowright(int row, int n)
{
	int		i;
	int		max;
	int		count;

	i = n - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (g_grid[row][i] > max)
		{
			max = g_grid[row][i];
			count++;
		}
		i--;
	}
	if (count != g_cstr[3].val[row])
		return (0);
	return (1);
}

t_bool	ft_checklines(int row, int col, int n)
{
	if (row == n - 1)
	{
		if (!ft_checkcolup(col, n))
			return (0);
		if (!ft_checkcoldown(col, n))
			return (0);
	}
	if (col == n - 1)
	{
		if (!ft_checkrowleft(row, n))
			return (0);
		if (!ft_checkrowright(row, n))
			return (0);
	}
	return (1);
}
