/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:35:59 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 09:11:35 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_validate_pos(int *buffer, int row)
{
	int	pre;

	pre = -1;
	while (++pre < row)
	{
		if ((buffer[pre] == buffer[row])
				|| (buffer[pre] - buffer[row] == pre - row)
				|| (buffer[pre] - buffer[row] == row - pre))
			return (0);
	}
	return (1);
}

void		ft_puzzle_recursive(int *buffer, int row, int *count)
{
	int	col;
	int	print_index;

	col = -1;
	print_index = -1;
	if (row == 10)
	{
		(*count)++;
		while (++print_index < 10)
			write(1, &"0123456789"[buffer[print_index]], 1);
		write(1, "\n", 1);
		return ;
	}
	while (++col < 10)
	{
		buffer[row] = col;
		if (ft_validate_pos(buffer, row))
			ft_puzzle_recursive(buffer, row + 1, count);
	}
}

int			ft_ten_queens_puzzle(void)
{
	int	row;
	int	buffer[10];
	int	count;

	row = -1;
	count = 0;
	while (++row < 10)
		buffer[row] = -1;
	ft_puzzle_recursive(buffer, 0, &count);
	return (count);
}
