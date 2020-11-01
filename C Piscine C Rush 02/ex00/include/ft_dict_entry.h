/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_entry.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:57:11 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 17:53:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_ENTRY_H
# define FT_DICT_ENTRY_H
# include "ft_ab_types.h"
# include "ft_boolean.h"
# include "ft_dict.h"

typedef struct	s_dict_entry
{
	t_long	key;
	char	*val;
	t_bool	normal;
}				t_dict_entry;

void			ft_swap_entry(t_dict_entry *a, t_dict_entry *b);
void			ft_update_normal(t_dict *dict);
void			ft_sort_dict_delegate(t_dict *dict, int start, int end,
		int (*fn)(t_dict_entry *, t_dict_entry *));
void			ft_sort_dict(t_dict *dict);

#endif
