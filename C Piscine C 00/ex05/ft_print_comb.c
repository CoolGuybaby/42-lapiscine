/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:24:56 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 14:04:41 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_write_series(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (!(first == '7' && second == '8' && third == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb(void)
{
	char i_ind;
	char j_ind;
	char k_ind;

	i_ind = '0';
	while (i_ind <= '7')
	{
		j_ind = i_ind + 1;
		while (j_ind <= '8')
		{
			k_ind = j_ind + 1;
			while (k_ind <= '9')
			{
				ft_write_series(i_ind, j_ind, k_ind);
				++k_ind;
			}
			++j_ind;
		}
		++i_ind;
	}
}
