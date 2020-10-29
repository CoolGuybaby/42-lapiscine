/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:14:15 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 15:45:36 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int	diff;

	*range = NULL;
	diff = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(diff * sizeof(int));
	if (!*range)
		return (-1);
	while (**range)
		*((*rangecd)++) = min++;
	return (diff);
}
