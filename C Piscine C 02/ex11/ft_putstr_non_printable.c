/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:35:18 by jseo              #+#    #+#             */
/*   Updated: 2020/10/22 14:11:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_puthex(unsigned char ch)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[ch / 16]);
	ft_putchar("0123456789abcdef"[ch % 16]);
}

int			ft_printable(unsigned char ch)
{
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}

void		ft_putstr_non_printable(char *str)
{
	unsigned char		cur;

	while (*str)
	{
		cur = (unsigned char)*str;
		if (ft_printable(cur))
			ft_putchar((char)cur);
		else
			ft_puthex(cur);
		++str;
	}
}
