/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_entry.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:57:11 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 23:58:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_ENTRY_H
# define FT_DICT_ENTRY_H

typedef struct	s_dict_entry
{
	char			*l_key;
	char			*l_val;
	char			*r_key;
	char			*r_val;
	s_dict_entry	*left;
	s_dict_entry	*middle;
	s_dict_entry	*right;
	s_dict_entry	*parent;
}				t_dict_entry;

#endif
