/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:32:30 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 13:04:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H
# include "ft_boolean.h"

t_bool		ft_is_in_string(char ch, char *str);
t_bool		ft_is_numeric(char ch);
t_bool		ft_is_whitespace(char ch);
t_bool		ft_is_alphabet(char ch);

#endif
