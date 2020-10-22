/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 22:14:28 by jseo              #+#    #+#             */
/*   Updated: 2020/10/22 13:21:12 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int i_ind;
	int j_ind;
	int temp;

	i_ind = -1;
	while (++i_ind < size - 1)
	{
		j_ind = i_ind;
		while (++j_ind < size)
		{
			if (*(tab + i_ind) > *(tab + j_ind))
			{
				temp = *(tab + i_ind);
				*(tab + i_ind) = *(tab + j_ind);
				*(tab + j_ind) = temp;
			}
		}
	}
}
