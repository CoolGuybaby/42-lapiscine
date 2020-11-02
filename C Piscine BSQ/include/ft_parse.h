/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:59:21 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 17:02:53 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H
# include "ft_boolean.h"
# include "ft_io.h"
# include "ft_ab_types.h"

t_bool		ft_read_content(int fd, char **content, t_int *total_bytes);
t_bool		ft_parse_grid(int fd, t_grid *grid);

#endif
