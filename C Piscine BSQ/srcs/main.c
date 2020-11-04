/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:00:39 by jseo              #+#    #+#             */
/*   Updated: 2020/11/05 00:49:21 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_io.h"

void		ft_process_args(int argc, char **argv, t_grid *grid, t_sol *sol)
{
	int		index;
	t_bool	open;

	index = 1;
	while (index < argc)
	{
		open = 0;
		if (ft_init(argv[index], grid, sol, &open))
			ft_print_grid(grid, sol);
		else
			ft_out_string("map error\n");
		if (open && grid)
			ft_free_grid(grid);
		++index;
	}
}

int			main(int argc, char **argv)
{
	t_grid	grid;
	t_sol	sol;

	if (argc < 2)
	{
		if (ft_parse(IN, &grid, &sol))
			ft_print_grid(&grid, &sol);
		else
			ft_out_string("map error\n");
		ft_free_grid(&grid);
	}
	else
		ft_process_args(argc, argv, &grid, &sol);
	return (0);
}
