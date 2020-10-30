/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:37:40 by jseo              #+#    #+#             */
/*   Updated: 2020/10/30 11:52:31 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C07_H
# define C07_H

char		*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char		*ft_strjoin(int size, char **strs, char *sep);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
char		**ft_split(char *str, char *charset);

#endif
