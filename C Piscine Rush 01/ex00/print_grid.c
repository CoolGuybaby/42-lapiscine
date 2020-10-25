/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:58:16 by jseo              #+#    #+#             */
/*   Updated: 2020/10/25 17:05:28 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_grid.h"
#include "string.h"

extern int		**g_grid;

int			ft_count_word(int nbr)
{
	int index;

	index = 0;
	while (nbr)
	{
		nbr /= 10;
		++index;
	}
	return (index);
}

void		ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_write_char(nbr % 10 + 48);
}

void		ft_print_word(int nbr, int max_cnt, int cur_cnt)
{
	int index;

	index = -1;
	while (++index < max_cnt - cur_cnt)
	{
		ft_write_char(' ');
	}
	ft_putnbr(nbr);
}

void		ft_print_grid(int grid_size)
{
	int row;
	int col;
	int max_cnt;
	int cur_cnt;

	row = -1;
	max_cnt = ft_count_word(grid_size);
	while (++row < grid_size)
	{
		col = -1;
		while (++col < grid_size)
		{
			cur_cnt = ft_count_word(g_grid[row][col]);
			ft_print_word(g_grid[row][col], max_cnt, cur_cnt);
			if (col != grid_size - 1)
				ft_write_char(' ');
		}
		if (row != grid_size - 1)
			ft_write_char('\n');
	}
}
