/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:56:06 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 18:53:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_H
# define IS_H
# include "boolean.h"

t_bool		ft_is_numeric(char ch);

t_bool		ft_is_whitespace(char ch);

t_bool		ft_is_separatable(char *str);

t_bool		ft_is_overflow(char *str);

#endif
