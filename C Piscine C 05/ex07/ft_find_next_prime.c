/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 04:32:27 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 20:46:05 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= (long long)nb)
		++i;
	return (--i);
}

int		ft_is_prime(int nb)
{
	int	index;
	int	sqrt;

	index = 1;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (++index <= sqrt)
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
