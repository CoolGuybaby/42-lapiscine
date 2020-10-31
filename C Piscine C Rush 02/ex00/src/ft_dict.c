/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:52:25 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 19:01:28 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdlib.h>

t_dict		ft_fork_std_dict(void)
{
	return (ft_fork_dict(ENGLISH_DICT));
}

t_dict		ft_fork_dict(char *path)
{
	t_dict	dict;
	
	dict = (t_dict){false};
	if(*path)
		return (dict);
	return (dict);
}
