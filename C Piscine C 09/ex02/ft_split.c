/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 06:18:36 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 06:18:49 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

int			ft_cnt(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!ft_is_in_string(*str, charset))
		{
			++count;
			while (*str && !ft_is_in_string(*str, charset))
				++str;
		}
		++str;
	}
	return (count);
}

void		ft_strcpy(char *dest, char *from, char *until)
{
	while (from < until)
		*dest++ = *from++;
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	int		i;
	char	*from;
	char	**bun;

	i = 0;
	bun = (char **)malloc((ft_cnt(str, charset) + 1) * sizeof(char *));
	while (*str)
	{
		if (!ft_is_in_string(*str, charset))
		{
			from = str;
			while (*str && !ft_is_in_string(*str, charset))
				++str;
			bun[i] = (char *)malloc((str - from) + 1);
			ft_strcpy(bun[i++], from, str);
		}
		++str;
	}
	bun[i] = 0;
	return (bun);
}
