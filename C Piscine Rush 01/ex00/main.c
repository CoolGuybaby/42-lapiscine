/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:28:24 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 11:26:09 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "string.h"
#define BASENUM 64

int		main(int argc, char **argv)
{
	t_bool is_error;

	is_error = (argc != 2);
	if (!is_error)
	{
		// calc grid
		// grid is valid on 64
		if (!is_error)
		{
			//solve logic
		}
	}
	else
		ft_write_str("ERROR OCCURED ON RUNNING TIME");
	ft_write_char('\n');
	return (0);
}
