/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:28:32 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 13:53:01 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_is.h"
#include "ft_boolean.h"
#include <stdlib.h>

int		g_s_i;
char	*g_s_from;
char	**g_s_bun;

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

char		**ft_split(char *str, char *charset)
{
	g_s_i = 0;
	g_s_bun = (char **)malloc((ft_cnt(str, charset) + 1) * sizeof(char *));
	if (!g_s_bun)
		return (0);
	while (*str)
	{
		if (!ft_is_in_string(*str, charset))
		{
			g_s_from = str;
			while (*str && !ft_is_in_string(*str, charset))
				++str;
			g_s_bun[g_s_i] = (char *)malloc((str - g_s_from) + 1);
			if (!g_s_bun[g_s_i])
			{
				while (--g_s_i >= 0)
					free(g_s_bun[g_s_i]);
				free(g_s_bun);
				return (0);
			}
			ft_strucpy(g_s_bun[g_s_i++], g_s_from, str);
		}
		++str;
	}
	g_s_bun[g_s_i] = 0;
	return (g_s_bun);
}
