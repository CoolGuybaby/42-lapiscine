/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:43:42 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 17:08:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ab_types.h"
#include "ft_string.h"
#include <stdlib.h>

char	*ft_resize_array(char *origin, char *new, t_int o_len, t_int n_len)
{
	char	*dest;

	if (!(dest = (char *)malloc(n_len + 1)))
		return (0);
	if (origin)
		ft_strncpy(dest, origin, o_len);
	ft_strncpy(dest + o_len, new, (t_int)(n_len - o_len));
	if (origin)
		free(origin);
	return (dest);
}
