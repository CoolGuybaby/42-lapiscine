/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:10:26 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 19:58:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_io.h"

t_bool	ft_load_grid(char *path, t_grid *grid)
{
	int		fd;
	t_bool	result;

	fd = ft_open_file(path);
	if (fd < 0)
		return (false);
	result = ft_parse_grid(fd, grid);
	ft_close_file(fd);
	return (result);
}

void	ft_free_grid(t_grid *grid)
{
	if (grid->map)
		free(grid->map);
	if (grid->content)
		free(grid->content);
}

void	ft_process_grid(t_grid *grid, t_sol *sol)
{
	// logic
}
