/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:09:37 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 21:03:00 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1++ == *s2++))
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void		ft_sort_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(*(argv + i), *(argv + j)) > 0)
			{
				temp = *(argv + j);
				*(argv + j) = *(argv + i);
				*(argv + i) = temp;
			}
		}
	}
}

void		ft_print_args(char **argv)
{
	while (*(++argv))
	{
		while (**argv)
			write(1, (*argv)++, 1);
		write(1, "\n", 1);
	}
}

int			main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_args(argc, argv);
		ft_print_args(argv);
	}
	return (0);
}
