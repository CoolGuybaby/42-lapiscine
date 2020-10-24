/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:32:22 by jseo              #+#    #+#             */
/*   Updated: 2020/10/25 01:35:46 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest++)
		;
	while (nb > 0 && *src)
	{
		*dest = *(unsigned char *)src;
		++dest;
		++src;
		--nb;
	}
	*dest = '\0';
	return (temp);
}
