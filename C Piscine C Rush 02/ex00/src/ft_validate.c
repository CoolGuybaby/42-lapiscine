/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:30:46 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 11:14:49 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_ab_types.h"
#include "ft_validate.h"

t_parse_error		ft_validate_line(char *line, t_int total)
{
	if (line)
		return (none_p);
	if (total)
		return (none_p);
	return (none_p);
}
