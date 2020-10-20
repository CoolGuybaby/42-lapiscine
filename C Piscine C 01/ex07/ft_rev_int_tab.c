/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:59:52 by jseo              #+#    #+#             */
/*   Updated: 2020/10/20 22:12:55 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int index;
	int temp;

	index = -1;
	while (++index < size / 2)
	{
		temp = *(tab + index);
		*(tab + index) = *(tab + size - index - 1);
		*(tab + size - index - 1) = temp;
	}
}
