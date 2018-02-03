/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:34:15 by aorji             #+#    #+#             */
/*   Updated: 2017/11/08 18:34:17 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i)
	{
		if (s[i - 1] == (char)c)
			return ((char *)s + i - 1);
		i--;
	}
	return (NULL);
}
