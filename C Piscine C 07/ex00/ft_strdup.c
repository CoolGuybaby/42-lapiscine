/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:12:44 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:29:57 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char			*copy;
	unsigned int	length;
	unsigned int	index;

	length = 0;
	index = 0;
	while (src[length])
		++length;
	copy = (char *)malloc(length + 1);
	if (!copy)
		return (0);
	while (src[index])
	{
		copy[index] = src[index];
		++index;
	}
	copy[index] = '\0';
	return (copy);
}
