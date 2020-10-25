/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsong <dsong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:24:02 by dsong             #+#    #+#             */
/*   Updated: 2020/10/24 19:45:52 by dsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGIC_H
# define LOGIC_H
# include "boolean.h"

void	dfs(int row, int col, int n);

t_bool	ispassible(int row, int col, int n, int num);

#endif
