/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:08:16 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:08:17 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include "ft_boolean.h"
# define IN 0
# define OUT 1
# define ERR 2
# define SIZE_B 1
# define SIZE_KB 1024
# define SIZE_MB 1048576

void		ft_write_string_fd(int fd, char *str);
void		ft_out_string(char *str);
void		ft_err_string(char *str);
int			ft_open_file(char *path);
int			ft_close_file(int fd);

#endif
