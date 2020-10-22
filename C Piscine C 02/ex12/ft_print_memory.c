/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:03:02 by jseo              #+#    #+#             */
/*   Updated: 2020/10/22 10:51:29 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_calc_buff(unsigned int num, int radix, int *buff, int index)
{
	if (num > (unsigned int)radix - 1)
		ft_calc_buff(num / radix, radix, buff, index + 1);
	*(buff + index) = num % radix;
}

void		ft_puthex(unsigned int num, int radix, int c_cnt)
{
	int index;
	int buff[16];

	index = -1;
	while (++index < 16)
	{
		*(buff + index) = 0;
	}
	ft_calc_buff(num, radix, buff, 0);
	index = -1;
	while (++index < c_cnt)
		write(1, &"0123456789abcdef"[buff[c_cnt - index - 1]], 1);
}

void		ft_print_byte_code(char *curr)
{
	if (*curr >= 32 && *curr <= 126)
		write(1, curr, 1);
	else
		write(1, ".", 1);
}

void		ft_print_curr(void *entry, unsigned int size, char *curr)
{
	int index;

	ft_puthex((unsigned int)curr, 16, 16);
	write(1, ": ", 2);
	index = -1;
	while (++index < 16)
	{
		if ((void *)curr + index < entry + size)
			ft_puthex((unsigned int)*(curr + index), 16, 2);
		else
			write(1, "  ", 2);
		if (index % 2 == 1)
			write(1, " ", 1);
	}
	index = -1;
	while (++index < 16)
	{
		if ((void *)curr + index < entry + size)
			ft_print_byte_code(curr + index);
	}
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	char		*curr;

	curr = (char *)addr;
	while ((void *)curr < addr + size)
	{
		ft_print_curr(addr, size, curr);
		write(1, "\n", 1);
		curr += 16;
	}
	return (addr);
}
