/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:28 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:35:39 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H
# include "ft_boolean.h"
# include "ft_io.h"
# include "ft_ab_types.h"

t_bool		ft_read_all(int fd, t_char **content, t_int *total_bytes);
t_bool		ft_parse_info(t_grid *grid, t_char *content, t_int length);
t_bool		ft_find_col(t_grid *grid, t_int start, t_int total);
t_bool		ft_parse_grid(t_grid *grid, t_sol *sol, t_int start, t_int total);
t_bool		ft_parse(int fd, t_grid *grid, t_sol *sol);

#endif
