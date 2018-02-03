/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:35:23 by aorji             #+#    #+#             */
/*   Updated: 2017/11/13 20:09:58 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	len2;
	size_t	l;

	len = ft_strlen(dst);
	l = len;
	len2 = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= len)
		return (dstsize + ft_strlen(src));
	while (dstsize - 1 - len && *src)
	{
		dst[l] = *src;
		src++;
		l++;
		dstsize--;
	}
	dst[l] = '\0';
	return (len2);
}
