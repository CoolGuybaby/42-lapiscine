/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:07:56 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 20:57:28 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H
# include "ft_grid.h"

t_bool		ft_is_numeric(char ch);
t_bool		ft_is_printable(char ch);
t_bool		ft_is_status_problem(t_grid *grid);

#endif
