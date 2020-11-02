/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:01:46 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 19:54:53 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H
# include "ft_grid.h"

t_bool		ft_is_numeric(char ch);
t_bool		ft_is_row_size_changed(t_grid *grid, t_int *row_size);

#endif
