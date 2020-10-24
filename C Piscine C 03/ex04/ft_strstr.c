/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:36:08 by jseo              #+#    #+#             */
/*   Updated: 2020/10/25 01:48:55 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	char	*cp;
	char	*s1;
	char	*s2;

	if (!*to_find)
		return (str);
	cp = str;
	while (*cp)
	{
		s1 = cp;
		s2 = to_find;
		while (*s1 && *s2 && *s1++ == *s2++)
			;
		if (!*s2)
			return (cp);
		++cp;
	}
	return (0);
}
