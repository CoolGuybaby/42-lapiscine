/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:59:34 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 17:41:48 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"
#include "ft_error.h"
#include "ft_dict_entry.h"
#include "ft_ab_types.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

char			*ft_clean_line(char *str)
{
	int				size;
	char			**split;

	split = ft_split(str, " \n\t\v\r\f");
	size = 0;
	if (str)
		free(str);
	while (split[size])
		++size;
	return (ft_strjoin(size, split, " "));
}

t_parse_error	ft_validate_line(t_dict_entry *entry, char *line, t_int len)
{
	t_int			index;
	char			*number;

	index = 0;
	while (ft_is_numeric(line[index]))
		++index;
	if (line[index] == '\n')
		return (empty_line);
	if (index == 0 || index >= len)
		return (failed);
	number = ft_strndup(line, index);
	while (line[index] == ' ')
		++index;
	if (line[indeex] != ':')
		return (failed);
	++index;
	while (line[index] == ' ')
		++index;
	entry->key = ft_atoi_big(number);
	entry->val = ft_clean_line(ft_strndup(line + index, len - index - 1));
	if (ft_strlen(entry->val) == 0)
		return (failed);
	if (number)
		free(number);
	return (none_p);
}

void			ft_read_line(t_dict_entry *entry, int fd, t_parse_error *error)
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
				|| len == (t_int)-1)
			break ;
		total += len;
		if (buffer[0] == '\n')
		{
			*error = ft_validate_line(entry, line, total);
			len = (t_int)-2;
			break ;
		}
	}
	if (len == 0)
		*error = end_of_file;
	if (line)
		free(line);
}
