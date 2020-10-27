/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:05:11 by jseo              #+#    #+#             */
/*   Updated: 2020/10/26 15:06:33 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_in_string(char ch, char *str)
{
	while (*str)
		if (ch == *str++)
			return (1);
	return (0);
}

int		ft_is_whitespace(char ch)
{
	return (ft_is_in_string(ch, " \n\t\v\r\f"));
}

int		ft_is_operator(char ch)
{
	return (ft_is_in_string(ch, "-+"));
}

int		ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int		ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_is_whitespace(*str))
		++str;
	while (ft_is_operator(*str))
		if (*str++ == '-')
			sign *= -1;
	while (ft_is_numeric(*str))
	{
		result *= 10;
		result += (*str++ - 48);
	}
	return (result * sign);
}
