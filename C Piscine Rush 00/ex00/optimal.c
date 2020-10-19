/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:07:28 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 18:15:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char ch);

int			check_positive(int x, int y)
{
	if (x > 0 && y > 0)
		return (1);
	else
		return (0);
}

void		ft_strcpy(char dest[], char *src)
{
	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
}

void		rush(int x, int y)
{
	int			r;
	int			c;
	int			row_ind;
	int			col_ind;
	char		preset[9];

	ft_strcpy(preset, "ABCB BABC");
	r = 1;
	while (r <= y && check_positive(x, y))
	{
		c = 1;
		while (c <= x)
		{
			row_ind = (r != 1) + (r == y) - (y == 1);
			col_ind = (c != 1) + (c == x) - (x == 1);
			ft_putchar(preset[row_ind * 3 + col_ind]);
			++c;
		}
		ft_putchar('\n');
		++r;
	}
}
