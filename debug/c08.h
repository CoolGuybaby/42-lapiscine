/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c08.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:30:17 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 03:50:17 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C08_H
# define C08_H

typedef struct	s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}				t_stock_str;

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
t_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
void				ft_show_tab(struct s_stock_str *par);

#endif
