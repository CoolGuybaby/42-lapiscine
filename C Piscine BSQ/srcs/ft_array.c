/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:05:54 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 19:31:02 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ab_types.h"
#include "ft_string.h"
#include <stdlib.h>

t_char	*ft_resize_array(t_char *origin, t_char *dup, t_int o_len, t_int n_len)
{
	t_char	*dest;

	if (!(dest = (t_char *)malloc(n_len + 1)))
		return (0);
	if (origin)
		ft_strncpy(dest, origin, o_len);
	ft_strncpy(dest + o_len, dup, (t_int)(n_len - o_len));
	if (origin)
		free(origin);
	return (dest);
}
