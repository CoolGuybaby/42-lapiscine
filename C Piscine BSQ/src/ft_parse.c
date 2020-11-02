/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:59:47 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 19:59:02 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"
#include "ft_parse.h"
#include "ft_array.h"
#include "ft_number.h"
#include "ft_is.h"

t_bool		ft_read_content(int fd, char **content, t_int *total_bytes)
{
	char		buffer[SIZE_MB];
	t_int		read_val;

	if (read(fd, 0, 0) == -1)
		return (false);
	*total_bytes = 0;
	*content = NULL;
	while ((read_val = read(fd, buffer, SIZE_MB)) > 0)
	{
		if (!(*content = ft_resize_array(*content,
			buffer, *total_bytes, *total_bytes + read_val)))
			return (false);
		(*total_bytes) += read_val;
	}
	if (!read_val)
		return (true);
	return (false);
}

t_bool		ft_parse_info(t_grid *grid, char *content, t_int length)
{
	t_bool	result;

	if (length != 4)
		return (false);
	grid->conv[empty] = content[length - 3];
	grid->conv[obstacle] = content[length - 2];
	grid->conv[full] = content[length - 1];
	result = ft_atoi_n(content, length - 3, &(grid->row));
	return (result);
}

t_bool		ft_parse_line(t_grid *grid, char *content, t_int length)
{
	t_int	index;
	char	curr;

	index = 0;
	if (length < 1)
		return (false);
	grid->col = length;
	while (index < length)
	{
		curr = content[index];
		if(curr != grid->conv[empty] && curr != grid->conv[obstacle] &&
				curr != grid->conv[full])
			return (false);
		++index;
	}
	return (true);
}

t_bool		ft_make_lines(t_grid *grid, char *content, t_int start, t_int total)
{
	t_int	row;
	t_int	row_size;
	t_int	offset;

	row = 0;
	row_size = -1;
	while (start < total && row < grid->row)
	{
		offset = start;
		while (content[offset] != '\n')
			if (offset++ + 1 >= total)
				return (false);
		if (ft_parse_line(grid, content + start, offset - start))
		{
			grid->map[row++] = (t_char *)(content + start);
			if (ft_is_row_size_changed(grid, &row_size))
				return (false);
		}
		else
			return (false);
		start = offset + 1;
	}
	return (row == grid->row);
}

t_bool		ft_parse_grid(int fd, t_grid *grid)
{
	char	*content;
	t_int	total;
	t_int	index;

	grid->map = NULL;
	index = 0;
	if (!ft_read_content(fd, &content, &total))
		return (false);
	grid->content = content;
	while (index < total)
	{
		if (content[index] == '\n')
		{
			if (!ft_parse_info(grid, content, index))
				return (false);
			grid->map = (t_char **)malloc(grid->row * sizeof(char*));
			if (!grid->map)
				return (false);
			return (ft_make_lines(grid, content, index + 1, total));
		}
		++index;
	}
	return (false);
}
