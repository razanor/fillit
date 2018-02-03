/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:24:17 by aorji             #+#    #+#             */
/*   Updated: 2017/12/02 18:19:07 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_last(int i, int res)
{
	if (i == g_quant)
	{
		if (res != 20)
		{
			ft_putstr("error\n");
			return (0);
		}
		g_buf[res++] = '\n';
	}
	return (res);
}

static void	ft_check_num(char *str)
{
	int	k;
	int	fd;
	int	res;

	k = 0;
	fd = open(str, O_RDONLY);
	while ((res = read(fd, g_buf, BUF_SIZE)))
		k++;
	close(fd);
	g_quant = k - 1;
}

int			ft_input(int fd)
{
	int		res;
	int		i;

	i = 0;
	while ((res = read(fd, g_buf, BUF_SIZE)))
	{
		if (!(res = ft_check_last(i, res)))
			return (0);
		g_buf[res] = '\0';
		if (!(ft_isvalid(g_buf, i)))
			return (0);
		ft_coordinates(g_buf, i);
		i++;
	}
	if (i == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_done();
	return (0);
}

int			main(int argc, char **argv)
{
	int		fd;

	//map = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit [file]\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		ft_check_num(argv[1]);
		ft_input(fd);
	}
	else
	{
		ft_putstr("error\n");
		return (0);
	}
	close(fd);
	return (0);
}
