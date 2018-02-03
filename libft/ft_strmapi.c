/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:21:09 by aorji             #+#    #+#             */
/*   Updated: 2017/11/14 19:22:18 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	size_t			i;
	unsigned int	index;

	i = 0;
	index = 0;
	if (!s || !f)
		return (NULL);
	a = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!a)
		return (NULL);
	while (*s)
	{
		if (f(index, *s))
			a[i++] = f(index++, *s);
		s++;
	}
	a[i] = '\0';
	return (a);
}
