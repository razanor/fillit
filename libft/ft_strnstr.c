/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 21:24:31 by aorji             #+#    #+#             */
/*   Updated: 2017/11/14 18:26:13 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle &&
			ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
		{
			if (ft_strlen(needle) > len)
				return (NULL);
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
