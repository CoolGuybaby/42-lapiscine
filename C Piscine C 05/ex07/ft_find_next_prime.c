/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 04:32:27 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 15:18:13 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	index;

	index = 1;
	if (nb <= 1)
		return (0);
	while (++index < nb)
		if (!(nb % index))
			return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	search;

	search = nb;
	while (!ft_is_prime(search))
		++search;
	return (search);
}
