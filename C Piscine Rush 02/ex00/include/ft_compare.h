/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:53:28 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 14:18:04 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COMPARE_H
# define FT_COMPARE_H
# include "ft_ab_types.h"
# include "ft_dict_entry.h"

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, t_int n);
int		ft_cmp_entry_normal(t_dict_entry *a, t_dict_entry *b);
int		ft_cmp_entry_key(t_dict_entry *a, t_dict_entry *b);

#endif
