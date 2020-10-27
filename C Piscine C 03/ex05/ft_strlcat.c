/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:57:57 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 12:17:38 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*temp;
	int				index;
	unsigned int	d_length;
	unsigned int	s_length;

	temp = src;
	d_length = 0;
	s_length = 0;
	while (*dest)
	{
		++dest;
		++d_length;
	}
	while (*temp++)
		++s_length;
	index = 0;
	while (*src && index < (int)(size - d_length - 1))
	{
		*dest = *src;
		++dest;
		++src;
		++index;
	}
	*dest = '\0';
	return (size < d_length ? s_length + size : s_length + d_length);
}
