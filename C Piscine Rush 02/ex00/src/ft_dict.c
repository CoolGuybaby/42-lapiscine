/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:52:25 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 13:24:36 by jseo             ###   ########.fr       */
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
#include "ft_parse_error.h"
#include <stdlib.h>

int					ft_count_line(char *path)
{
	int				count;
	int				fd;
	t_dict_entry	*entry;
	t_parse_error	error;

	count = 0;
	error = fail;
	if ((fd = ft_open_file(path)) < 0)
		return (INVALID);
	while (1)
	{
		error = none_p;
		if (!(entry = (t_dict_entry *)malloc(sizeof(t_dict_entry))))
			return (INVALID);
		ft_read_line(entry, fd, &error);
		if (error == fail)
			return (INVALID);
		if (error == none_p)
			++count;
		if (entry->val == 0 || error == end_of_file)
		{
			free(entry);
			break ;
		}
		free(entry);
	}
	ft_close_file(fd);
	return (count);
}

t_bool				ft_load_valid_line(char *path, int size, t_dict *dict)
{
	int				fd;
	int				index;
	t_dict_entry	*entry;
	t_parse_error	error;

	index = 0;
	error = fail;
	if ((fd = ft_open_file(path)) < 0)
		return (false);
	while (index < size)
	{
		error = none_p;
		entry = &dict->entry[index];
		ft_read_line(entry, fd, &error);
		if (error == fail)
			return (false);
		if (error == none_p)
			++index;
		if ((entry->val == 0 || error == end_of_file) && error != empty_line)
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
	t_dict_entry	*entry;

	size = ft_count_line(path);
	dict = (t_dict){path, 0, false, NULL};
	if (size == INVALID)
		return (dict);
	if (!(entry = (t_dict_entry *)malloc((size + 1) * sizeof(t_dict_entry))))
		return (dict);
	dict.size = size;
	dict.entry = entry;
	dict.valid = ft_load_valid_line(path, size, &dict);
	if (dict.valid)
		ft_sort_dict(&dict);
	return (dict);
}

void				ft_free_dict(t_dict *dict)
{
	int				index;

	index = 0;
	while (index < dict->size)
	{
		free(dict->entry[index].val);
		++index;
	}
}
