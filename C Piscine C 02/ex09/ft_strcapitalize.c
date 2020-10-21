/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:25:48 by jseo              #+#    #+#             */
/*   Updated: 2020/10/21 18:51:02 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_flip_alphabet(char *str, int to_upper)
{
	if (to_upper)
	{
		*str -= 32;
	}
	else
	{
		*str += 32;
	}
}

int			ft_is_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int			ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void		ft_str_capitalize_delegate(char *str, int s_letter)
{
	if (s_letter)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_flip_alphabet(str, 1);
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
			ft_flip_alphabet(str, 0);
	}
}

char		*ft_strcapitalize(char *str)
{
	char		*temp;
	int			s_letter;

	temp = str;
	s_letter = 1;
	while (*str)
	{
		ft_str_capitalize_delegate(str, s_letter);
		if (!(ft_is_alphabet(*str) || ft_is_numeric(*str)))
			s_letter = 1;
		else
			s_letter = 0;
		++str;
	}
	return (temp);
}
