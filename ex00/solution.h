/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:00:31 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 18:11:32 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLUTION_H
# define SOLUTION_H
# include "boolean.h"

int			ft_count_input(char *str);

int			**ft_create_grid(int grid_size);

void		ft_free_grid(int grid_size);

t_bool		ft_init_sol(int grid_size, char *str);

#endif
