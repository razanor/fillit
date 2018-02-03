/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:43:35 by aorji             #+#    #+#             */
/*   Updated: 2017/11/27 21:28:50 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_validation1(char *buf)
{
	int	count;

	count = 0;
	while (*buf)
	{
		if (*buf == 35)
		{
			if (*(buf + 1) == 35)
				count++;
			if (*(buf + 5) == 35)
				count++;
		}
		buf++;
	}
	if (count != 3 && count != 4)
		return (0);
	return (1);
}

static int	ft_validation2(char *buf)
{
	int number_sign;
	int n_line;
	int point;

	n_line = 0;
	number_sign = 0;
	point = 0;
	while (*buf)
	{
		if (*buf == 35)
			number_sign++;
		if (*buf == 46)
			point++;
		if (*buf == '\n')
			n_line++;
		buf++;
	}
	if (number_sign == 4 && n_line == 5 && point == 12)
		return (1);
	return (0);
}

static int	ft_validation3(char *buf)
{
	int	n;

	n = 4;
	while (n--)
	{
		if (*(buf + 4) == '\n')
			buf = buf + 5;
		else
			return (0);
	}
	return (1);
}

static int	ft_validation(char *buf)
{
	int	v1;
	int v2;
	int	v3;

	v1 = ft_validation1(buf);
	v2 = ft_validation2(buf);
	v3 = ft_validation3(buf);
	if (v1 && v2 && v3)
		return (1);
	return (0);
}

int			ft_isvalid(char *buf, int i)
{
	if (!(ft_validation(buf)) || i > 26)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}
