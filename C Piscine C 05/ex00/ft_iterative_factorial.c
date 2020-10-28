/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 23:54:20 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 03:33:16 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	index;
	int	factorial;

	index = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (index <= nb)
	{
		factorial = factorial * index++;
	}
	return (factorial);
}
