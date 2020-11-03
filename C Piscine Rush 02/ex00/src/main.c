/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:45:38 by jseo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/03 15:57:40 by jseo             ###   ########.fr       */
=======
/*   Updated: 2020/11/03 15:38:28 by jseo             ###   ########.fr       */
>>>>>>> e3b5b89748b6acebe8e8df9c259a0a571c01f977
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_dict.h"
#include "ft_io.h"

int	main(int argc, char **argv)
{
	t_error	error;
	t_dict	dict;
	char	*conv;

	error = ft_sep_role(argc, argv, &conv, &dict);
	if (error == none_e && !dict.valid)
		error = parse;
	if (error != none_e)
	{
		show_error(error);
		return (1);
	}
	error = ft_exec_conv(conv, &dict);
	if (error == none_e)
		ft_out_string("\n");
	else
	{
		show_error(error);
		return (1);
	}
	while(1)
		;
	return (0);
}
