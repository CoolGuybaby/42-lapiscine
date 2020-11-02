/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:39:35 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 18:58:02 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRID_H
# define FT_GRID_H
# include "ft_ab_types.h"

typedef struct	s_grid {
	t_int		row;
	t_int		col;
	char		*content;
	t_char		**map;
	t_char		conv[3];
}				t_grid;

typedef struct	s_sol {
	t_int		size;
	t_int		x;
	t_int		y;
}				t_sol;

typedef enum {
	empty,
	obstacle,
	full,
}	t_status;

t_bool			ft_load_grid(char *path, t_grid *grid);
void			ft_free_grid(t_grid *grid);
void			ft_process_grid(t_grid *grid, t_sol *sol);

#endif
