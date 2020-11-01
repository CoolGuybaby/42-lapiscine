/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:01:43 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 11:59:54 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include "ft_ab_types.h"

int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strxcpy(char *dest, char *src);
void		ft_strucpy(char *dest, char *from, char *until);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strdup(char *src);
char		*ft_strndup(char *src, t_int n);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char *str, char *charset);

#endif
