/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_done.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:58:17 by aorji             #+#    #+#             */
/*   Updated: 2017/12/02 18:18:58 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check(char **map, int size, int x, int y)
{
	int	a;

	a = 0;
	while (a < MAP)
	{
		if (g_x[g_pos][a] + x >= size || g_y[g_pos][a] + y >= size)
			return (0);
		if (ft_isalpha(map[y + g_y[g_pos][a]][x + g_x[g_pos][a]]))
			return (0);
		a++;
	}
	g_letter++;
	a = 0;
	while (a < MAP)
	{
		map[g_y[g_pos][a] + y][g_x[g_pos][a] + x] = g_letter;
		a++;
	}
	return (1);
}

static void	ft_clean(char **map, int x, int y)
{
	int	a;

	a = 0;
	while (a < MAP)
	{
		map[g_y[g_pos][a] + y][g_x[g_pos][a] + x] = 46;
		a++;
	}
}

static int	ft_fill(char **map, int size, int index)
{
	int	x;
	int	y;

	if (index > g_quant)
		return (1);
	y = 0;
	g_pos = index;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (ft_check(map, size, x, y))
			{
				if (ft_fill(map, size, index + 1))
					return (1);
				g_letter--;
				g_pos = index;
				ft_clean(map, x, y);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void		ft_done(void)
{
	int		size;
	char	**map;

	g_letter = 64;
	size = ft_count_s_root((g_quant + 1) * MAP);
	map = ft_make_map(size);
	while (!(ft_fill(map, size, 0)))
	{
		free(map);
		map = NULL;
		map = ft_make_map(++size);
	}
	show(map);
}
