/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:39:31 by jseo              #+#    #+#             */
/*   Updated: 2020/10/17 18:19:13 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char ch);

void 		rush(int x, int y)
{
	int r_ind;
	int c_ind;
	char *preset = "o-o| |o-o";

	r_ind = 0;
	while (r_ind < y)
	{
		c_ind = 0;
		while (c_ind < x)
		{
			ft_putchar(preset[((r_ind != 0) + (r_ind == y - 1)) * 3 + ((c_ind != 0) + (c_ind == x - 1))]);
			++c_ind;
		}
		ft_putchar('\n');
		++r_ind;
	}
}
