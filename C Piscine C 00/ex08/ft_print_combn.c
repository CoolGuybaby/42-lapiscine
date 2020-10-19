/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:38:20 by jseo              #+#    #+#             */
/*   Updated: 2020/10/19 15:18:34 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_recursion(char *preset, int max_depth, int cur, int prev_val)
{
	if (max_depth == cur)
	{
		write(1, preset, max_depth);
		if (!(preset[0] == (58 - max_depth) && preset[max_depth - 1] == '9'))
			write(1, ", ", 2);
	}
	else
	{
		while (++prev_val <= 9)
		{
			preset[cur] = prev_val + 48;
			ft_recursion(preset, max_depth, cur + 1, prev_val);
		}
	}
}

void		ft_print_combn(int n)
{
	char		preset[10];

	ft_recursion(preset, n, 0, -1);
}
