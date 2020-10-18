/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:35:17 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 14:03:08 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_write_2_digit_num(int num)
{
	char fir_digit;
	char sec_digit;

	fir_digit = num / 10 + 48;
	sec_digit = num % 10 + 48;
	ft_putchar(fir_digit);
	ft_putchar(sec_digit);
}

void		ft_write_chain(void)
{
	write(1, ", ", 2);
}

void		ft_write_series(int first, int second)
{
	ft_write_2_digit_num(first);
	ft_putchar(' ');
	ft_write_2_digit_num(second);
	if (!(first == 98 && second == 99))
	{
		ft_write_chain();
	}
}

void		ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_write_series(first, second);
			++second;
		}
		++first;
	}
}
