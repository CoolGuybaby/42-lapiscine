/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 07:31:10 by jseo              #+#    #+#             */
/*   Updated: 2020/10/17 17:56:59 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char ch);

void 	check_edge(int *check_flag_row, int *check_flag_col, int current_row_index, int current_col_index, int max_row, int max_col)
{

	if (current_row_index == 0 || current_row_index == max_row - 1)
	{
		*check_flag_row = 1;
	}
	else
	{
		*check_flag_row = 0;
	}

	if (current_col_index == 0 || current_col_index == max_col - 1)
	{
		*check_flag_col = 1;
	}
	else
	{
		*check_flag_col = 0;
	}
}

void 	print_by_condition(int check_flag_row, int check_flag_col)
{
	if (check_flag_row && check_flag_col)
	{
		ft_putchar('o');
	}
	else if (!check_flag_row && check_flag_col)
	{
		ft_putchar('|');
	}
	else if (check_flag_row && !check_flag_col)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void 	rush(int x, int y)
{
	int row_index;
	int col_index;
	int is_edge_row;
	int is_edge_col;

	row_index = 0;
	while (row_index < y)
	{
		col_index = 0;

		while (col_index < x)
		{
			check_edge(&is_edge_row, &is_edge_col, row_index, col_index, y, x);

			print_by_condition(is_edge_row, is_edge_col);

			++col_index;
		}

		ft_putchar('\n');

		++row_index;
	}
}
