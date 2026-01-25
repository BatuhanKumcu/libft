/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:03:08 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/25 15:08:59 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*obj_new;
	
	if (!lst || !f || !del)
		return (NULL);
	lst_new = NULL;
	while (lst)
	{
		obj_new = ft_lstnew(f(lst->content));
		if (!obj_new)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, obj_new);
		lst = lst->next;
	}
	return (lst_new);
}
