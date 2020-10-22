/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:01:48 by jseo              #+#    #+#             */
/*   Updated: 2020/10/22 10:02:16 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size - 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		++index;
	}
	*dest = '\0';
	while (*src)
	{
		++src;
		++index;
	}
	return (index);
}
