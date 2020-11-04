/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:04:15 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:21:00 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void		ft_write_string_fd(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
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
