/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:37:43 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 20:16:39 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_io.h"

void		ft_process_args(int argc, char **argv, t_grid *grid, t_sol *sol)
{
	int		index;

	index = 1;
	while (index < argc)
	{
		if (ft_load_grid(argv[index], grid))
		{
			ft_process_grid(grid, sol);
			ft_out_string("\n");
		}
		else
			ft_err_string("map error\n");
		++index;
		ft_free_grid(grid);
	}
}

int			main(int argc, char **argv)
{
	t_grid	grid;
	t_sol	sol;

	if (argc < 2)
	{
		if (ft_parse_grid(IN, &grid))
			ft_process_grid(&grid, &sol);
		else
			ft_err_string("map error\n");
		ft_free_grid(&grid);
	}
	else
		ft_process_args(argc, argv, &grid, &sol);
	return (0);
}
