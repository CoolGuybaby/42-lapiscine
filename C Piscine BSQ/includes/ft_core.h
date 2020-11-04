/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:09:09 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:34:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CORE_H
# define FT_CORE_H
# include "ft_grid.h"

t_bool		ft_convert_char(t_grid *grid, t_char from, t_int *to);
t_bool		ft_core(t_grid *grid, t_sol *sol, t_int start, t_int index);

#endif
