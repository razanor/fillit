/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:14:29 by aorji             #+#    #+#             */
/*   Updated: 2017/11/15 18:37:20 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*new;

	nb = n;
	len = ft_digitsize(n);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	new[len--] = '\0';
	if (nb < 0)
	{
		new[0] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		new[len--] = (nb % 10 + 48);
		nb = nb / 10;
	}
	new[len] = (nb + 48);
	return (new);
}
