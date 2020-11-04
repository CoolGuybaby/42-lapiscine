/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:01:58 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 13:24:34 by jseo             ###   ########.fr       */
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
		show_error(error, &dict);
		return (1);
	}
	error = ft_exec_conv(conv, &dict);
	if (error == none_e)
		ft_out_string("\n");
	else
	{
		show_error(error, &dict);
		return (1);
	}
	ft_free_dict(&dict);
	return (0);
}
