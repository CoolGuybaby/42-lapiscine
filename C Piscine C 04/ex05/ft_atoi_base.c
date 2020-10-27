/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:46:43 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 14:14:54 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (*str)
	{
		++index;
		++str;
	}
	return (index);
}

int		ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

int		ft_is_valid(char *base)
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
	while (++pivot_1 < temp - base - 1)
	{
		pivot_2 = pivot_1;
		while (++pivot_2 < temp - base)
			if (*(base + pivot_1) == *(base + pivot_2))
				return (0);
	}
	return (1);
}

int		ft_convert_char(char ch, char *base)
{
	int	index;

	index = -1;
	while (base[++index])
		if (base[index] == ch)
			return (index);
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		radix;
	int		sign;
	int		result;
	int		converted;

	radix = ft_strlen(base);
	sign = 1;
	result = 0;
	if (!ft_is_valid(base))
		return (0);
	while (ft_is_in_string(*str, " \n\t\v\r\f"))
		++str;
	while (ft_is_in_string(*str, "+-"))
		if (*str++ == '-')
			sign *= -1;
	while ((converted = ft_convert_char(*str, base)) != -1)
	{
		result *= radix;
		result += converted;
		++str;
	}
	return (result * sign);
}
