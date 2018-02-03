/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:52:53 by aorji             #+#    #+#             */
/*   Updated: 2017/11/14 18:45:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n)
	{
		if (*s1 == *s2 && (n - 1) != 0)
		{
			s1++;
			s2++;
		}
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
