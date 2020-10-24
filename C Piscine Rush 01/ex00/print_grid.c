/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:58:16 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 14:52:39 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_grid.h"
#include "string.h"

void		ft_print_grid(int **grid, int grid_size)
{
	int row;
	int col;

	row = -1;
	while (++row < grid_size)
	{
		col = -1;
		while (++col < grid_size)
		{
			ft_write_char(grid[row][col] + 48);
			if (col != grid_size - 1)
				ft_write_char(' ');
		}
		if (row != grid_size - 1)
			ft_write_char('\n');
	}
}
