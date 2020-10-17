/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 19:57:11 by jseo              #+#    #+#             */
/*   Updated: 2020/10/17 19:57:46 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char ch);

void		cond_print(int r_ind, int c_ind, int max_r, int max_c)
{
	if (r_ind > 0 && c_ind > 0 && r_ind < max_r - 1 && c_ind < max_c - 1)
		ft_putchar(' ');
	else if (r_ind == 0)
	{
		if (c_ind == 0)
			ft_putchar('/');
		else if (c_ind == max_c - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (r_ind == max_r - 1)
	{
		if (c_ind == 0)
			ft_putchar('\\');
		else if (c_ind == max_c - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
		ft_putchar('*');
}

void		rush(int x, int y)
{
	int row_index;
	int col_index;
	row_index = 0;
	while (row_index < y)
	{
		col_index = 0;
		while (col_index < x)
		{
			cond_print(row_index, col_index, y, x);
			++col_index;
		}
		ft_putchar('\n');
		++row_index;
	}
}
