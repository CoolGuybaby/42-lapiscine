/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:36:39 by jseo              #+#    #+#             */
/*   Updated: 2020/10/30 11:59:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c07.h"
#include "ftstring.h"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	char **split;
	split = ft_split("a s d f a s dfsadfa sd fasdf", " \n\t\r\v\f");
	while (*split)
	{
		while (**split)
			write(1, (*split)++, 1);
		write(1, "\n", 1);
		split++;
	}
	return (0);
}
