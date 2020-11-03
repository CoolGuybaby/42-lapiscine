/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:11:20 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:22:35 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while ((*temp++ = *src++))
		;
	return (dest);
}

char		*ft_strxcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
		;
	return (--dest);
}

void		ft_strucpy(char *dest, char *from, char *until)
{
	while (from < until)
		*dest++ = *from++;
	*dest = 0;
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	char			*temp;

	index = 0;
	temp = dest;
	while (index < n)
	{
		*temp = *src;
		if (*src)
			++src;
		++temp;
		++index;
	}
	return (dest);
}
