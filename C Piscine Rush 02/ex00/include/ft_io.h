/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:02:55 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 00:59:29 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H
# define IN 0
# define OUT 1
# define ERR 2
# define SIZE_B 1
# define SIZE_KB 1024

void		ft_write_string_fd(int fd, char *str);
void		ft_out_string(char *str);
void		ft_err_string(char *str);
int			ft_open_file(char *path);
int			ft_close_file(int fd);

#endif
