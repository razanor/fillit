/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <aorji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:40:24 by aorji             #+#    #+#             */
/*   Updated: 2017/11/17 19:40:50 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	myfree(t_list *new_lst)
{
	t_list *next;

	while (new_lst)
	{
		next = new_lst->next;
		free(new_lst->content);
		free(new_lst);
		new_lst = next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*new_elem;
	t_list	*prev;

	if (!lst || !f)
		return (NULL);
	new_lst = (*f)(lst);
	if (!new_lst)
		return (NULL);
	prev = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_elem = (*f)(lst);
		if (!new_elem)
		{
			myfree(new_lst);
			return (NULL);
		}
		prev->next = new_elem;
		prev = new_elem;
		lst = lst->next;
	}
	prev->next = NULL;
	return (new_lst);
}
