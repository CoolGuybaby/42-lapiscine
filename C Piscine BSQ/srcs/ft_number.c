/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:03:12 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 20:50:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include "ft_is.h"

t_bool		ft_atoi_n(t_char *conv, t_int n, t_int *result)
{
	t_int	index;

	index = 0;
	*result = 0;
	while (index < n)
	{
		if (ft_is_numeric(conv[index]))
			*result = *result * 10 + (conv[index] - 48);
		else
			return (false);
		++index;
	}
	return (true);
}

t_int		ft_min(t_int a, t_int b, t_int c)
{
	a = a < b ? a : b;
	return (a < c ? a : c);
}
