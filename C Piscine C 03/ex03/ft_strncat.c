/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:32:22 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 00:12:26 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest)
		++dest;
	while (nb > 0 && *src)
	{
		*dest++ = *(unsigned char *)src++;
		--nb;
	}
	*dest = '\0';
	return (temp);
}
