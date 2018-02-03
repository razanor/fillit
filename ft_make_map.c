/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 18:12:49 by aorji             #+#    #+#             */
/*   Updated: 2017/12/16 18:12:55 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_make_map(int size)
{
	char	**map;
	int		n;

	n = size;
	if (!(map = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	map[size] = NULL;
	while (n)
	{
		map[n - 1] = (char *)malloc(sizeof(char) * (size + 1));
		ft_memset(map[n - 1], 46, size);
		map[n - 1][size] = '\0';
		n--;
	}
	return (map);
}

int			ft_count_s_root(int number)
{
	int	i;
	int	c;

	i = 0;
	c = 2;
	while (i < 10)
	{
		if (c * c >= number)
			return (c);
		else
			c++;
		i++;
	}
	return (0);
}

void		show(char **all)
{
	while (*all)
	{
		ft_putstr(*all);
		ft_putchar('\n');
		all++;
	}
}
