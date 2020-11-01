/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_entry.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:57:11 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 14:35:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_ENTRY_H
# define FT_DICT_ENTRY_H
# include "ft_ab_types.h"
# include "ft_boolean.h"

typedef struct	s_dict_entry
{
	char	*key;
	char	*val;
	t_bool	normal;
}				t_dict_entry;

#endif
