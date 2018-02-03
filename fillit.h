/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:56:27 by nrepak            #+#    #+#             */
/*   Updated: 2017/12/02 16:08:47 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 21
# define MAP 4
# include "./libft/libft.h"
# include <fcntl.h>

int		g_x[26][4];
int		g_y[26][4];
int		g_quant;
int		g_pos;
int		g_letter;
char	g_buf[BUF_SIZE + 1];
int		ft_input(int fd);
int		ft_isvalid(char *buf, int i);
char	**ft_make_map(int size);
void	show(char **all);
void	ft_coordinates(char *map, int index);
void	ft_done(void);
int		ft_count_s_root(int number);

#endif
