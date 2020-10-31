/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:38:25 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 02:30:30 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H
# include "ft_boolean.h"
# include "ft_ab_types.h"
# include "ft_dict_entry.h"
# define INVALID -1
# define ENGLISH_DICT "numbers.dict"

typedef struct	s_dict
{
	char			*path;
	int				size;
	t_bool			valid;
	t_dict_entry	*entry;
}				t_dict;

void			ft_read_line(int fd, t_parse_error *error);
int				ft_count_line(char *path);
t_bool			ft_load_valid_line(char *path, int size);
t_dict			ft_fork_std_dict(void);
t_dict			ft_fork_dict(char *path);

#endif
