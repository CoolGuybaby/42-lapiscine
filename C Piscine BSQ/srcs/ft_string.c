/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:02:02 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:29:33 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

t_char		*ft_strncpy(t_char *dest, t_char *src, t_int n)
{
	t_int	index;
	t_char	*temp;

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
