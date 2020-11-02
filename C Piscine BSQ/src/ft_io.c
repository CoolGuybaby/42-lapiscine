/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:40:56 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 17:14:06 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void		ft_write_string_fd(int fd, char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		ft_out_string(char *str)
{
	ft_write_string_fd(OUT, str);
}

void		ft_err_string(char *str)
{
	ft_write_string_fd(ERR, str);
}

int			ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int			ft_close_file(int fd)
{
	return (close(fd));
}
