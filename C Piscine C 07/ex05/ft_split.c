/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:16:47 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 10:30:48 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_i;
char	*g_from;
char	**g_bun;

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
	g_i = 0;
	g_bun = (char **)malloc((ft_cnt(str, charset) + 1) * sizeof(char *));
	if (!g_bun)
		return (0);
	while (*str)
	{
		if (!ft_is_in_string(*str, charset))
		{
			g_from = str;
			while (*str && !ft_is_in_string(*str, charset))
				++str;
			g_bun[g_i] = (char *)malloc((str - g_from) + 1);
			if (!g_bun[g_i])
			{
				while (--g_i >= 0)
					free(g_bun[g_i]);
				free(g_bun);
			}
			ft_strcpy(g_bun[g_i++], g_from, str);
		}
		++str;
	}
	g_bun[g_i] = 0;
	return (g_bun);
}
