/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:52:25 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 02:33:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include "ft_dict_entry.h"
#include "ft_validate.h"
#include "ft_ab_types.h"
#include "ft_error.h"
#include "ft_io.h"
#include "ft_boolean.h"
#include "ft_array.h"
#include <stdlib.h>

void				ft_read_line(int fd, t_parse_error *error)
{
	char			buffer[SIZE_B];
	char			*line;
	t_int			len;
	t_int			total;

	total = 0;
	while ((len = read(fd, buffer, SIZE_B)) > 0)
	{
		*error = fail;
		if (!(line = ft_resize_array(line, buffer, total, total + len))
				|| read_val == (t_int)-1)
			break ;
		total += len;
		if (buffer[0] == '\n')
		{
			*error = ft_validate_line(line, total);
			len = (t_int)-2;
			break ;
		}
	}
	if (len == 0)
		*error = end_of_file;
	if (line)
		free(line);
}

int					ft_count_line(char *path)
{
	int				count;
	int				fd;
	t_parse_error	error;

	count = 0;
	error = fail;
	if ((fd = ft_open_file(path)) < 0)
		return (INVALID);
	while (1)
	{
		error = none_p;
		error = ft_read_line(fd, &error);
		if (error == fail)
			return (INVALID);
		if (error = none_p)
			++count;
		if (error == end_of_file)
			break ;
	}
	ft_close_file(fd);
	return (count);
}

t_bool				ft_load_valid_line(char *path, int size)
{
	int				fd;
	int				index;
	t_parse_error	error;

	index = 0;
	error = fail;
	if ((fd = ft_open_file(path)) < 0)
		return (false);
	while (index < size)
	{
		error = none_p;
		error = ft_read_line(fd, &error);
		if (error == fail)
			return (false);
		if (error == none_p)
			++index;
		if (error == end_of_file && error != empty_line)
			break ;
	}
	ft_close_file(fd);
	return (true);
}

t_dict				ft_fork_std_dict(void)
{
	return (ft_fork_dict(ENGLISH_DICT));
}

t_dict				ft_fork_dict(char *path)
{
	int				size;
	t_dict			dict;
	t_dict_entry	*root;

	size = ft_count_line(path);
	dict = (t_dict){path, 0, false, NULL};
	if (!(root = (t_dict_entry *)malloc(sizeof(t_dict_entry))))
		return (dict);
	if (size == INVALID)
		return (dict);
	dict.size = size;
	dict.entry = root;
	dict.valid = ft_load_valid_line(path, size);
	//if (dict.valid)
		// create tree;	
	return (dict);
}
