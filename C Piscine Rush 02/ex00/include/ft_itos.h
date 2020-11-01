/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itos.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:02:13 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 19:30:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITOS_H
# define FT_ITOS_H
# include "ft_boolean.h"
# include "ft_ab_types.h"
# include "ft_dict.h"

void	ft_itos_print_if(t_bool print, t_bool *space, char *str);
t_bool	ft_itos_short(t_dict *dict, t_long number, t_bool *space, t_bool print);
t_bool	ft_itos(t_dict *dict, t_long number, t_bool *space, t_bool print);

#endif
