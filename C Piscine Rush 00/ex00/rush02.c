/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:56:18 by jseo              #+#    #+#             */
/*   Updated: 2020/10/18 17:57:00 by jseo             ###   ########.fr       */
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

void		ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
}

void		print_col(char *preset, int max_col)
{
	int			col;

	col = 0;
	while (col < max_col)
	{
		if (col == 0)
			ft_putchar(preset[0]);
		else if (col == max_col - 1)
			ft_putchar(preset[2]);
		else
			ft_putchar(preset[1]);
		++col;
	}
}

void		rush(int x, int y)
{
	int			row;
	char		preset[3];

	row = 0;
	while (row < y && check_positive(x, y))
	{
		if (row == 0)
		{
			ft_strcpy(preset, "ABA");
			print_col(preset, x);
		}
		else if (row == y - 1)
		{
			ft_strcpy(preset, "CBC");
			print_col(preset, x);
		}
		else
		{
			ft_strcpy(preset, "B B");
			print_col(preset, x);
		}
		ft_putchar('\n');
		++row;
	}
}
