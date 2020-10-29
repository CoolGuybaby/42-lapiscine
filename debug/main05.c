/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 00:07:56 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 20:58:12 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c05.h"
#include "ftstring.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	//int n_0 = 10;
	//while (n_0--)
		//printf("%d: %d\n", n_0, ft_iterative_factorial(n_0)); 

	//int n_1 = 10;
	//while (n_1--)
		//printf("%d: %d\n", n_1, ft_recursive_factorial(n_1));
	
	//printf("%d\n", ft_iterative_power(2, 0));
	//printf("%d\n", ft_iterative_power(0, 0));
	//printf("%d\n", ft_iterative_power(-1, 2));
	//printf("%d\n", ft_iterative_power(2, -5));
	//printf("%d\n", ft_iterative_power(2, 10));
	
	//printf("%d\n", ft_recursive_power(2, 0));
	//printf("%d\n", ft_recursive_power(0, 0));
	//printf("%d\n", ft_recursive_power(-1, 2));
	//printf("%d\n", ft_recursive_power(2, -5));
	//printf("%d\n", ft_recursive_power(2, 10));

	//int n_4 = 10;
	//while (n_4--)
		//printf("%d: %d\n", n_4, ft_fibonacci(n_4));

	//int n_5 = 100;
	//while (n_5--)
		//printf("%d: %d\n", n_5, ft_sqrt(n_5));

	//int n_6 = 100;
	//while (n_6--)
		//printf("%d: %d\n", n_6, ft_is_prime(n_6));

	int n_7 = -10;
	while (n_7++ < 500)
		printf("%d: %d\n", n_7, ft_find_next_prime(n_7));
	
	//printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
