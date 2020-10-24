/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:57:57 by jseo              #+#    #+#             */
/*   Updated: 2020/10/25 02:04:43 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (*dest++)
		;
	if (size > 0)
	{
		while (index < size - 1 && *src)
		{
			*dest = *src;
			++dest;
			++src;
			++index
		}
		*dest = '\0';
	}
	while (*src)
	{
		++src;
		++index;
	}
	return (index);
}
