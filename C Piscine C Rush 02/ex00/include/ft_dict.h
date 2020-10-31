/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:38:25 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 19:01:36 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H
# include "ft_boolean.h"
# include "ft_ab_types.h"
# define INVALID -1
# define ENGLISH_DICT "numbers.dict"

typedef struct	s_dict
{
	t_bool	valid;
}				t_dict;

t_dict	ft_fork_std_dict(void);
t_dict	ft_fork_dict(char *path);

#endif
