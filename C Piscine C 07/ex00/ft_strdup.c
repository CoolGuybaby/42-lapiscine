/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:12:44 by jseo              #+#    #+#             */
/*   Updated: 2020/10/31 12:17:30 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*copy;
	char	*temp;

	temp = src;
	while (*temp)
		++temp;
	copy = (char *)malloc((unsigned int)(temp - src) + 1);
	if (!copy)
		return (0);
	while ((*copy++ = *src++))
		;
	*copy = '\0';
	return (copy);
}
