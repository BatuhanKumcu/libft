/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:13:36 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:13:38 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;
	t_list	*crnt;

	if (!*lst || !*del || !lst)
		return ;
	crnt = *lst;
	while (crnt)
	{
		delete = crnt;
		crnt = crnt->next;
		del(delete->content);
		free(delete);
	}
	*lst = NULL;
}
