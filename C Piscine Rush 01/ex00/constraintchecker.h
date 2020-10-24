/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraintchecker.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsong <dsong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:54:04 by dsong             #+#    #+#             */
/*   Updated: 2020/10/24 20:48:56 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINTCHECKER_H
# define CONSTRAINTCHECKER_H
# include "boolean.h"

t_bool	ft_checklines(int row, int col, int n);

t_bool	ft_checkcolup(int col, int n);

t_bool	ft_checkcoldown(int col, int n);

t_bool	ft_checkrowleft(int row, int n);

t_bool	ft_checkrowright(int row, int n);

#endif
