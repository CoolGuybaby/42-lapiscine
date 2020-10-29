/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:13:45 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 14:10:26 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

int		*ft_range(int min, int max)
{
	int	*range;
	int	*temp;

	index = 0;
	range = NULL;
	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (0);
	temp = range;
	while (*temp)
		*temp++ = min++;
	return (range);
}
