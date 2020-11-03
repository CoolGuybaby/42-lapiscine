/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:02:07 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 15:38:25 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itos.h"
#include "ft_boolean.h"
#include "ft_dict.h"
#include "ft_dict_entry.h"
#include "ft_string.h"
#include "ft_is.h"
#include "ft_io.h"

void	ft_itos_print_if(t_bool print, t_bool *space, char *str)
{
	if (!print)
		return ;
	if (*space)
		ft_out_string(" ");
	*space = true;
	ft_out_string(str);
}

t_bool	ft_itos_short(t_dict *dict, t_long number, t_bool *space, t_bool print)
{
	int		dict_index;

	dict_index = ft_resolve_index(dict, number);
	if (dict_index == NOT_FOUND)
		return (false);
	ft_itos_print_if(print, space, dict->entry[dict_index].val);
	return (true);
}

t_bool	ft_itos(t_dict *dict, t_long number, t_bool *space, t_bool print)
{
	int		index;
	t_long	mul;
	t_long	val;

	if ((number <= 20 && ft_itos_short(dict, number, 0, false))
				|| (ft_resolve_index(dict, number) != NOT_FOUND
					&& !ft_is_power_of_ten(number)))
		return (ft_itos_short(dict, number, space, print));
	index = dict->size - 1;
	while ((val = dict->entry[index].key) != 0)
	{
		if (number % val != number)
		{
			mul = number / val;
			if (val > 99)
				if (!ft_itos(dict, mul, space, print))
					return (false);
			ft_itos_print_if(print, space, dict->entry[index].val);
			if (number - mul * val == 0)
				return (true);
			return (ft_itos(dict, number - mul * val, space, print));
		}
		--index;
	}
	return (true);
}
