/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:14:15 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 09:48:48 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*temp;

	*range = NULL;
	diff = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(diff * sizeof(int));
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*temp++ = min++;
	return (diff);
}
