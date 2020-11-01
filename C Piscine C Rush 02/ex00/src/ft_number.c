/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:01:03 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 17:14:28 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include "ft_is.h"
#include "ft_ab_types.h"

int			ft_atoi(char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_is_white_space(*str))
		++str;
	if (ft_is_operator(*str))
		if (*str++ == '-')
			sign *= -1;
	while (ft_is_numeric(*str))
	{
		result *= 10;
		result += *str++ - 48;
	}
	return (result * sign);
}

t_long		ft_atoi_big(char *str)
{
	t_long	result;

	result = 0;
	while (ft_is_white_space(*str))
		++str;
	while (ft_is_numeric(*str))
	{
		result *= 10;
		result += *str++ - 48;
	}
	if (*str == '\0')
		return (result);
	return (-1);
}
