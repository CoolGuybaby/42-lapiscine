/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 00:23:30 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 00:42:47 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	acc;

	acc = 1;
	if (power < 0)
		return (0);
	while (power--)
		acc *= nb;
	return (acc);
}
