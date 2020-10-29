/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 00:16:30 by jseo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/29 20:46:59 by jseo             ###   ########.fr       */
=======
/*   Updated: 2020/10/29 09:07:40 by jseo             ###   ########.fr       */
>>>>>>> e2fcb4d095d2ad16bb6e984e0b68f57d24d3a299
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
