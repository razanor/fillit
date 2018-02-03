/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:24:23 by aorji             #+#    #+#             */
/*   Updated: 2017/11/12 14:59:25 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespace_end(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i--;
	return (i);
}

static int	ft_whitespace_start(char const *s)
{
	int		k;

	k = 0;
	while ((s[k] == ' ' || s[k] == '\t' || s[k] == '\n') && s[k])
		k++;
	return (k);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		d;
	char	*new;

	j = 0;
	if (!s)
		return (0);
	d = ft_strlen(s) - 1;
	i = ft_whitespace_end(s);
	k = ft_whitespace_start(s);
	d = d - i;
	if (i == -1)
	{
		d = 0;
		k = ft_strlen(s);
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) - k - d + 1));
	if (!new)
		return (0);
	while (k <= i)
		new[j++] = s[k++];
	new[j] = '\0';
	return (new);
}
