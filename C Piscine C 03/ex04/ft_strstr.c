/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:36:08 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 12:21:59 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	char	*origin;
	char	*explore;

	origin = str;
	explore = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		origin = str;
		explore = to_find;
		while (*explore && *origin == *explore)
		{
			++origin;
			++explore;
		}
		if (!*explore)
			return (str);
		++str;
	}
	return (0);
}
