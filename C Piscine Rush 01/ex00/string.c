/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:21:33 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 10:24:26 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "string.h"

int			ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		++str;
		++length;
	}
	return (length);
}

void		ft_write_str(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

void		ft_write_char(char ch)
{
	write(1, &ch, 1);
}
