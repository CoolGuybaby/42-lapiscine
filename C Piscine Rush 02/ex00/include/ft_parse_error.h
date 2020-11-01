/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_error.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:01:35 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 14:33:46 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_ERROR_H
# define FT_PARSE_ERROR_H
# include "ft_dict_entry.h"
# include "ft_error.h"

void		ft_read_line(t_dict_entry *entry, int fd, t_parse_error *error);

#endif
