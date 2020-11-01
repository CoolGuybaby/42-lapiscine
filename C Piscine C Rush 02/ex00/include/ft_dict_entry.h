/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_entry.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:57:11 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 19:30:50 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_ENTRY_H
# define FT_DICT_ENTRY_H
# define NOT_FOUND -1
# include "ft_ab_types.h"
# include "ft_boolean.h"
# include "ft_dict.h"

int				ft_resolve_index(t_dict *dict, t_long number);
void			ft_swap_entry(t_dict_entry *a, t_dict_entry *b);
void			ft_update_normal(t_dict *dict);
void			ft_sort_dict_delegate(t_dict *dict, int start, int end,
		int (*fn)(t_dict_entry *, t_dict_entry *));
void			ft_sort_dict(t_dict *dict);

#endif
