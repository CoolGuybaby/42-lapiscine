/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:15:52 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 15:44:59 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (*str)
	{
		++index;
		++str;
	}
	return (index);
}

char		*ft_strxcat(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

void		ft_complete_str(char *temp, char **strs, char *sep)
{
	int		index;

	index = -1;
	temp = ft_strxcat(temp, strs[++index]);
	while (++index < size)
	{
		temp = ft_strxcat(temp, sep);
		temp = ft_strxcat(temp, strs[index]);
	}
	*temp = '\0';
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		t_length;
	char	*join;

	index = -1;
	t_length = 0;
	if (!size)
	{
		join = (char *)malloc(1);
		if (!join)
			return (0);
		join[0] = 0;
		return (join);
	}
	while (++index < size)
		t_length += ft_strlen(strs[index]);
	join = (char *)malloc(t_length + (ft_strlen(sep) * (size - 1)) + 1);
	if (!join)
		return (0);
	ft_complete_str(join, strs, sep);
	return (join);
}
