/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:16:35 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 23:10:10 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		++str;
		++index;
	}
	return (index);
}

int			ft_compute_length(unsigned int nbr, int radix, int neg)
{
	int	length;

	length = neg ? 1 : 0;
	while (1)
	{
		++length;
		if (!(nbr / radix))
			break ;
		nbr /= radix;
	}
	return (length);
}

int			ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

int			ft_is_valid(char *base)
{
	char	*temp;
	int		pivot_1;
	int		pivot_2;

	temp = base;
	pivot_1 = 0;
	pivot_2 = 0;
	if (!*base || ft_strlen(base) == 1)
		return (0);
	while (*temp)
		if (ft_is_in_string(*temp++, " \n\t\v\r\f+-"))
			return (0);
	pivot_1 = -1;
	while (++pivot_1 < (int)(temp - base) - 1)
	{
		pivot_2 = pivot_1;
		while (++pivot_2 < (int)(temp - base))
			if (*(base + pivot_1) == *(base + pivot_2))
				return (0);
	}
	return (1);
}
