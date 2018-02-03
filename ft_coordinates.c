/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coordinates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 18:08:08 by aorji             #+#    #+#             */
/*   Updated: 2017/12/16 18:08:16 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_remember_x_y(char *map, int index)
{
	int i;
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	i = 0;
	while (a < 4)
	{
		c = 0;
		while (map[i] != '\n')
		{
			if (map[i] == 35)
			{
				g_x[index][b] = c;
				g_y[index][b++] = a;
			}
			i++;
			c++;
		}
		i++;
		a++;
	}
}

void		ft_coordinates(char *map, int index)
{
	int		x_min;
	int		y_min;
	int		b;
	int		c;

	b = 0;
	c = 0;
	ft_remember_x_y(map, index);
	y_min = g_y[index][0];
	x_min = g_x[index][0];
	while (b < 4)
	{
		if (g_x[index][b] < x_min)
			x_min = g_x[index][b];
		b++;
	}
	while (c < 4)
	{
		g_x[index][c] = g_x[index][c] - x_min;
		g_y[index][c] = g_y[index][c] - y_min;
		c++;
	}
}
