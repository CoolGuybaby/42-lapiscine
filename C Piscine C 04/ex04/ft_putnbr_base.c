/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:47:30 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 14:57:41 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (*str)
	{
		++index;
		++str;
	}
	return (index);
}

int			ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

int			ft_is_valid_base(char *base)
{
	char	*temp;
	int		pivot_1;
	int		pivot_2;

	temp = base;
	pivot_1 = 0;
	pivot_2 = 0;
	if (!*base || ft_strlen(base) == 1)
		return (0);
	while (*temp)
		if (ft_is_in_string(*temp++, " \n\t\v\r\f+-"))
			return (0);
	pivot_1 = -1;
	while (++pivot_1 < temp - base - 1)
	{
		pivot_2 = pivot_1;
		while (++pivot_2 < temp - base)
			if (*(base + pivot_1) == *(base + pivot_2))
				return (0);
	}
	return (1);
}

void		ft_putnbr_base_recursive(int nbr, char *base, int radix)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base_recursive(nbr / radix, base, radix);
		write(1, &base[-(nbr % radix)], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nbr, base, radix);
	}
	else
	{
		if (nbr > radix - 1)
			ft_putnbr_base_recursive(nbr / radix, base, radix);
		write(1, &base[nbr % radix], 1);
	}
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		radix;

	radix = ft_strlen(base);
	if (!ft_is_valid_base(base))
		return ;
	ft_putnbr_base_recursive(nbr, base, radix);
}
