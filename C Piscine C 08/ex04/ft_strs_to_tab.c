/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:24:11 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 14:04:49 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int			ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		++str;
		++index;
	}
	return (index);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	index;
	struct s_stock_str	*arr;

	index = -1;
	while (++index < ac)
	{
	}
}
