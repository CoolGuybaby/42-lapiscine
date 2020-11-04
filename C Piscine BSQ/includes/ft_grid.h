/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:08:30 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 22:50:14 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRID_H
# define FT_GRID_H
# include "ft_ab_types.h"
# include "ft_boolean.h"

typedef struct	s_grid {
	t_int		row;
	t_int		col;
	t_int		*map;
	t_char		*content;
	t_char		conv[3];
}				t_grid;

typedef struct	s_sol {
	t_int		size;
	t_int		x;
	t_int		y;
}				t_sol;

typedef enum {
	obstacle,
	empty,
	full,
}	t_status;

t_bool			ft_init(char *p, t_grid *grid, t_sol *sol, t_bool *op);
t_bool			ft_malloc_grid(t_grid *grid);
void			ft_free_grid(t_grid *grid);
void			ft_print_grid(t_grid *grid, t_sol *sol);

#endif
