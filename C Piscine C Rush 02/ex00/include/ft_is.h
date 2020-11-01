/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:32:30 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 19:27:37 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H
# include "ft_boolean.h"
# include "ft_ab_types.h"

t_bool		ft_is_in_string(char ch, char *str);
t_bool		ft_is_numeric(char ch);
t_bool		ft_is_whitespace(char ch);
t_bool		ft_is_operator(char ch);
t_bool		ft_is_power_of_ten(t_long number);

#endif
