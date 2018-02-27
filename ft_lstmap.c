/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:37:31 by nroman            #+#    #+#             */
/*   Updated: 2018/02/26 22:22:55 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin;

	begin = lst;
	if (lst && f)
	{
		while(lst)
		{
			new = ft_lstnew(lst->content, lst->content_size);
			if (!new)
				return (NULL);
			if (new == begin)
			{
				begin = f(lst);
			}
			else
				new = f(lst);
			ft_lstadd_back(begin, new);
			lst = lst->next;
		}
		return (begin);
	}
	return (NULL);
}
