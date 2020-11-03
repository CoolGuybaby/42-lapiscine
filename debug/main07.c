/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:36:39 by jseo              #+#    #+#             */
/*   Updated: 2020/11/03 23:27:15 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c07.h"
#include "ftstring.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	//char *dest = ft_strdup("Hello");
	//printf("%s", dest);

	//int index = -1;
	//int min = 1;
	//int max = 3;
	//int *range = ft_range(min, max);
	//while (++index < max - min)
		//printf("%d\n", range[index]);
	
	//int index = -1;
	//int min = 1;
	//int max = 10;
	//int *range;
	//printf("%d\n", ft_ultimate_range(&range, min, max));
	//while (++index < max - min)
		//printf("%d\n", range[index]);
	
	//int index = -1;
	//char **strs = (char **)malloc(3 * sizeof(char *));
	//while (++index < 3)
		//strs[index] = (char *)malloc(10);
	//strs[0] = "1234567890";
	//strs[1] = "abcdefghij";
	//strs[2] = "zxcvbnmasd";
	//printf("%s", ft_strjoin(3, strs, "::"));

	printf("%s", ft_convert_base("0", "0123456789abcdef", "0123456789"));

	//char **split;
	//split = ft_split("a s d f a s dfsadfa sd fasdf", " \n\t\r\v\f");
	//while (*split)
	//{
		//while (**split)
			//write(1, (*split)++, 1);
		//write(1, "\n", 1);
		//split++;
	//}
	
	return (0);
}
