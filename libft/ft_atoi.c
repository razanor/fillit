/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:03:08 by aorji             #+#    #+#             */
/*   Updated: 2017/11/14 18:40:32 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\f' || c == '\v' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int						minus;
	unsigned long long int	numb;

	minus = 1;
	numb = 0;
	while (ft_check(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		minus = -1;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		numb = (numb * 10) + (*str - 48);
		str++;
	}
	if (numb > 9223372036854775807 && minus == 1)
		return (-1);
	else if (numb > 9223372036854775807 && minus == -1)
		return (0);
	return ((int)numb * minus);
}
