/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:15:52 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:30:05 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (*str)
	{
		++index;
		++str;
	}
	return (index);
}

char		*ft_strxcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
		;
	return (--dest);
}

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
