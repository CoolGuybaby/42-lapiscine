/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:49:51 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 17:13:36 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strncpy(char *dest, char *src, t_int n)
{
	t_int	index;
	char	*temp;

	index = 0;
	temp = dest;
	while (index < n)
	{
		*temp = *src;
		if (*src)
			++src;
		++temp;
		++index;
	}
	return (dest);
}
