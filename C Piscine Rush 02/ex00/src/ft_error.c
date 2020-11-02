/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:59:50 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 18:36:55 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_dict.h"
#include "ft_number.h"
#include "ft_io.h"
#include "ft_itos.h"

t_error		ft_sep_role(int argc, char **argv, char **conv, t_dict *dict)
{
	if (argc == 2)
	{
		*dict = ft_fork_std_dict();
		*conv = argv[1];
	}
	else if (argc == 3)
	{
		*dict = ft_fork_dict(argv[1]);
		*conv = argv[2];
	}
	else
		return (argc);
	return (none_e);
}

t_error		ft_exec_conv(char *conv, t_dict *dict)
{
	t_long	number;
	t_bool	space;

	number = ft_atoi_big(conv);
	if (number == (t_long)-1)
		return (numeric);
	if (!ft_itos(dict, number, 0, false))
		return (convert);
	space = false;
	ft_itos(dict, number, &space, true);
	return (none_e);
}

void		show_error(t_error error)
{
	if (error == parse)
		ft_err_string("Dict Error\n");
	else if (error == convert)
		ft_err_string("Dict Error\n");
	else if (error == numeric)
		ft_err_string("Error\n");
	else if (error == argc)
		ft_err_string("Dict Error\n");
	else
		return ;
}
