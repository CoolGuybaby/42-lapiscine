/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:13:45 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 09:22:30 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	index;

	index = -1;
	range = NULL;
	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (0);
	while (min < max)
		range[++index] = min++;
	return (range);
}
