/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:38:20 by jseo              #+#    #+#             */
/*   Updated: 2020/10/19 12:12:00 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_write_series(char *preset, int max_depth)
{
	int index;

	index = 0;
	while (index < max_depth)
	{
		ft_putchar(preset[index++]);
	}
	if (!(preset[0] == (58 - max_depth) & preset[max_depth - 1] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_allocation(char *preset, int series_length)
{
	int		index;

	index = 0;
	while (index < series_length)
	{
		preset[index] = '0';
		++index;
	}
	preset[index] = '\0';
}

void		ft_recursion(char *preset, int max_depth, int cur, int prev_val)
{
	int limit;
	int index;

	if (max_depth == cur)
		ft_write_series(preset, max_depth);
	else
	{
		limit = 10 - max_depth + cur;
		index = prev_val + 1;
		while (index <= limit)
		{
			preset[cur] = index + 48;
			ft_recursion(preset, max_depth, cur + 1, index);
			++index;
		}
	}
}

void		ft_print_combn(int n)
{
	char		preset[10];

	ft_allocation(preset, n);
	ft_recursion(preset, n, 0, -1);
}
