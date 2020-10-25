/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:27:16 by jseo              #+#    #+#             */
/*   Updated: 2020/10/25 01:30:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest++)
		;
	while (*src)
	{
		*dest = *(unsigned char *)src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (temp);
}
