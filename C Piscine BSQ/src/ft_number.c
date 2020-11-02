/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:15:12 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 16:56:19 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include "ft_is.h"

t_bool	ft_atoi_n(char *conv, t_int n, t_int *result)
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
