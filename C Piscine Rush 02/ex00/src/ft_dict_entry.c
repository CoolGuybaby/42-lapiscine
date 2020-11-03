/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_entry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:52:39 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 15:33:39 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict_entry.h"
#include "ft_dict.h"
#include "ft_ab_types.h"
#include "ft_boolean.h"
#include "ft_compare.h"

int				ft_resolve_index(t_dict *dict, t_long number)
{
	int				index;

	index = 0;
	while (index < dict->size)
	{
		if (dict->entry[index].key == number)
			return (index);
		++index;
	}
	return (NOT_FOUND);
}

void			ft_swap_entry(t_dict_entry *a, t_dict_entry *b)
{
	t_dict_entry	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void			ft_update_normal(t_dict *dict)
{
	int				index;
	t_bool			normal;
	t_dict_entry	*entry;

	index = 0;
	while (index < dict->size)
	{
		entry = &dict->entry[index];
		normal = false;
		if (entry->key <= 20)
			normal = true;
		if (entry->key > 20 || entry->key < 100)
			if (entry->key % 10 == 0)
				normal = true;
		entry->normal = normal;
		++index;
	}
}

void			ft_sort_dict_delegate(t_dict *dict, int start, int end,
		int (*fn)(t_dict_entry *, t_dict_entry *))
{
	int				i;
	int				j;
	t_bool			swapped;
	t_dict_entry	*entry;

	entry = dict->entry;
	i = start;
	while (i < end)
	{
		j = start;
		swapped = false;
		while (j < end - i)
		{
			if ((*fn)(&entry[j], &entry[j + 1]))
			{
				ft_swap_entry(&entry[j], &entry[j + 1]);
				swapped = true;
			}
			++j;
		}
		++i;
		if (!swapped)
			break ;
	}
}

void			ft_sort_dict(t_dict *dict)
{
	int				index;
	int				zero_pos;

	ft_update_normal(dict);
	ft_sort_dict_delegate(dict, 0, dict->size - 1, &ft_cmp_entry_normal);
	index = 0;
	zero_pos = INVALID;
	while (index < dict->size)
	{
		if (dict->entry[index].normal == 0)
		{
			zero_pos = index;
			break ;
		}
		++index;
	}
	if (zero_pos == INVALID)
		return ;
	ft_sort_dict_delegate(dict, zero_pos, dict->size - 1, &ft_cmp_entry_key);
	ft_sort_dict_delegate(dict, 0, zero_pos, &ft_cmp_entry_key);
}
