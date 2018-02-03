/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:05:40 by aorji             #+#    #+#             */
/*   Updated: 2017/11/22 16:24:05 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_each(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			if (*(s + 1) == c || *(s + 1) == '\0')
				return (i);
			s++;
		}
	}
	return (i);
}

static char	**ft_run(char **new, int g, char const *s, char c)
{
	int		k;
	int		i;
	char	*part;

	i = 0;
	while (i < g)
	{
		while (*s == c)
			s++;
		part = (char *)malloc(sizeof(char) * (ft_each(s, c) + 1));
		if (!part)
		{
			while (i + 1)
				free(new[i--]);
			free(new);
			return (NULL);
		}
		k = 0;
		while (*s != c && *s)
			part[k++] = *s++;
		part[k] = '\0';
		new[i++] = part;
	}
	new[i] = NULL;
	return (new);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	//int		j;
	int		g;

	//j = 0;
	if (!s)
		return (0);
	g = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (g + 1));
	if (!new)
		return (NULL);
	while (*s && *s == c)
		s++;
	new = ft_run(new, g, s, c);
	return (new);
}
