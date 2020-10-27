/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:28:39 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 18:29:48 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINT_H
# define CONSTRAINT_H
# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

typedef struct	s_cstr {
	int	*val;
}				t_cstr;

t_cstr			ft_create_cstr(char *str, int offset, int size);

void			ft_free_cstr(void);

#endif
