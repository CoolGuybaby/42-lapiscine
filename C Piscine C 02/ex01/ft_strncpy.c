/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:07:15 by jseo              #+#    #+#             */
/*   Updated: 2020/10/22 23:25:21 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	char			*temp;

	index = 0;
	temp = dest;
	while (index < n)
	{
		*dest = *src;
		if (*src)
			++src;
		++dest;
		++index;
	}
	return (temp);
}
