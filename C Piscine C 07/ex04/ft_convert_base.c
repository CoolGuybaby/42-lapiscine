/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:15:09 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 23:25:26 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
int				ft_compute_length(long long nbr, int radix, int neg);
int				ft_is_in_string(char ch, char *str);
int				ft_is_valid(char *base);

int				ft_convert_char(char ch, char *base)
{
	int				index;

	index = -1;
	while (base[++index])
		if (base[index] == ch)
			return (index);
	return (-1);
}

unsigned int	ft_atoi(char *str, char *base, int *sign)
{
	int				radix;
	int				converted;
	unsigned int	result;

	*sign = 1;
	radix = ft_strlen(base);
	result = 0;
	while (ft_is_in_string(*str, " \n\t\v\r\f"))
		++str;
	while (ft_is_in_string(*str, "+-"))
		if (*str++ == '-')
			*sign *= -1;
	while ((converted = ft_convert_char(*str, base)) != -1)
	{
		result *= radix;
		result += converted;
		++str;
	}
	*sign = result == 0 ? 1 : *sign;
	return (result);
}

char			*ft_itoa(unsigned int nbr, char *base, int neg)
{
	int				radix;
	int				index;
	int				size;
	char			*converted;

	radix = ft_strlen(base);
	index = neg ? 0 : -1;
	size = ft_compute_length(nbr, radix, neg);
	converted = (char *)malloc(size + 1);
	if (!converted)
		return (0);
	if (neg)
		converted[0] = '-';
	while (++index < size)
	{
		converted[size - (!neg) - index] = base[nbr % radix];
		nbr /= radix;
	}
	converted[size] = '\0';
	return (converted);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				sign;
	unsigned int	result;

	sign = 1;
	result = 0;
	if (!ft_is_valid(base_from) || !ft_is_valid(base_to))
		return (0);
	result = ft_atoi(nbr, base_from, &sign);
	return (ft_itoa(result, base_to, (sign > 0 ? 0 : 1)));
}
