/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:31:06 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 12:07:39 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H
# include "ft_boolean.h"
# include "ft_ab_types.h"

int			ft_atoi(char *str);
t_long		ft_atoi_big(char *str);
t_bool		ft_itoa(t_dict *dict, t_long num, t_bool *space, t_bool print);

#endif
