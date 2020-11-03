/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:14:40 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:30:46 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_ab_types.h"
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*copy;
	t_int	length;
	t_int	index;

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

char		*ft_strndup(char *src, t_int n)
{
	char	*copy;
	t_int	length;
	t_int	index;

	length = 0;
	index = 0;
	while (src[length])
		++length;
	length = length > n ? n : length;
	copy = (char *)malloc(length + 1);
	if (!copy)
		return (0);
	while (index < length)
	{
		copy[index] = src[index];
		++index;
	}
	copy[index] = '\0';
	return (copy);
}
