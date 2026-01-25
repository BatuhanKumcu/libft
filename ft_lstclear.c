/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:56:01 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/25 14:53:59 by batuhankumc      ###   ########.fr       */
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