/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:15:10 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 14:25:24 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		++number;
	}
}
