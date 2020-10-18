/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:34:17 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 14:27:34 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_print_reverse_alphabet(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		ft_putchar(alphabet);
		--alphabet;
	}
}
