/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:18:31 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:07:15 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

void		ft_complete_str(char *temp, int size, char **strs, char *sep)
{
	int		index;

	index = -1;
	temp = ft_strxcpy(temp, strs[++index]);
	while (++index < size)
	{
		temp = ft_strxcpy(temp, sep);
		temp = ft_strxcpy(temp, strs[index]);
	}
	*temp = '\0';
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		t_length;
	char	*join;

	index = -1;
	t_length = 0;
	if (!size)
	{
		join = (char *)malloc(1);
		if (!join)
			return (0);
		join[0] = 0;
		return (join);
	}
	while (++index < size)
		t_length += ft_strlen(strs[index]);
	join = (char *)malloc(t_length + (ft_strlen(sep) * (size - 1)) + 1);
	if (!join)
		return (0);
	ft_complete_str(join, size, strs, sep);
	return (join);
}
