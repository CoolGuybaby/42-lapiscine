/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:40:41 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 20:04:24 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"
#include "ft_boolean.h"

t_bool		ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

t_bool		ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');
}

t_bool		ft_is_whitespace(char ch)
{
	return (ft_is_in_string(ch, " \n\t\v\r\f"));
}

t_bool		ft_is_operator(char ch)
{
	return (ft_is_in_string(ch, "+-"));
}

t_bool		ft_is_power_of_ten(t_long number)
{
	t_long		power;

	power = 1;
	while (power <= number)
	{
		if (power == number)
			return (true);
		power *= 10;
	}
	return (false);
}

