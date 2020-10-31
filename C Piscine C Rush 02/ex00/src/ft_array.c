/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:34:22 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 18:45:57 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_string.h"
#include "ft_ab_types.h"
#include <stdlib.h>

char	*ft_resize_array(char *origin, char *new, t_int o_len, t_int n_len)
{
	char	*dest;

	dest = (char *)malloc(n_len + 1);
	if (!dest)
		return (0);
	if (origin)
		ft_strncpy(dest, origin, o_len);
	ft_strncpy(dest + o_len, new, (t_int)(n_len - o_len));
	return (dest);
}
