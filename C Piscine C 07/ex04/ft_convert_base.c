/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:15:09 by jseo              #+#    #+#             */
/*   Updated: 2020/11/02 14:13:25 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str);
int			ft_compute_length(char *str);
int			ft_is_in_string(char ch, char *str);
int			ft_is_valid(char *base);

int			ft_convert_char(char ch, char *base)
{
	int		index;

	index = -1;
	while (base[++index])
		if (base[index] == ch)
			return (index);
	return (-1);
}

int			ft_atoi_base(char *str, char *base)
{
	int		radix;
	int		sign;
	int		result;
	int		converted;

	radix = ft_strlen(base);
	sign = 1;
	result = 0;
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

char		*ft_putnbr_base(int nbr, char *base)
{
	int		radix;
	int		sign;
	int		index;
	int		size;
	char	*converted;

	radix = ft_strlen(base);
	sign = nbr < 0 ? 1 : 0;
	index = sign ? 0 : -1;
	size = ft_compute_length((long long)nbr, radix, sign);
	converted = (char *)malloc(size + 1);
	if (!converted)
		return (0);
	if (sign)
		converted[0] = '-';
	while (++index < size)
	{
		converted[size - (!sign) - index] = base[nbr % radix];
		nbr /= radix;
	}
	converted[size] = '\0';
	return (converted);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_is_valid(base_from) || !ft_is_valid(base_to))
		return (0);
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
