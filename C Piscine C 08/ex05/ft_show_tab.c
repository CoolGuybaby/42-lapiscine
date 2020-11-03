/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:24:27 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 03:54:15 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

void		ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putstr("\n");
		ft_putnbr(par[index].size);
		ft_putstr("\n");
		ft_putstr(par[index].copy);
		ft_putstr("\n");
		++index;
	}
}
