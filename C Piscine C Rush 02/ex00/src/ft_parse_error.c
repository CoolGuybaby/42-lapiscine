/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:59:34 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 14:39:16 by jseo             ###   ########.fr       */
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

t_parse_error	ft_validate_line(t_dict_entry *entry, char *line, t_int len)
{
	t_int	index;
	char	*number;

	index = 0;
	while (ft_is_numeric(line[index]))
		++index;

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
