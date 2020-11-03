/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:53:07 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 15:24:04 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_compare.h"
#include "ft_ab_types.h"
#include "ft_dict_entry.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*(t_char *)s1 - *(t_char *)s2);
}

int		ft_strncmp(char *s1, char *s2, t_int n)
{
	while (*s1 && *s2 && n && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return (*(t_char *)s1 - *(t_char *)s2);
}

int		ft_cmp_entry_normal(t_dict_entry *a, t_dict_entry *b)
{
	return (a->normal > b->normal);
}

int		ft_cmp_entry_key(t_dict_entry *a, t_dict_entry *b)
{
	return (a->key > b->key);
}
