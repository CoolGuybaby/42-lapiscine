/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:24:11 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 03:18:11 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int			index;

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

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*arr;

	index = -1;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (++index < ac)
	{
		arr[index].size = ft_strlen(av[index]);
		arr[index].str = av[index];
		arr[index].copy = ft_strdup(av[index]);
	}
	arr[index] = (t_stock_str){0, 0, 0};
	return (arr);
}
