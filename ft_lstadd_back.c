/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:01:16 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/24 18:43:13 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*crnt;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	crnt = *lst;
	while (crnt->next)
		crnt = crnt->next;
	crnt->next = new; // son nodeu manuel olarak yeni node belirledik
}

// new nodeu listenin en sonuna ilave edilmeli. yani listenin uzunluğu ve normaldeki son 
// node belirlenmeli sonrasında ise new nodeu en sonuna eklenmeli

// en son nodea gelip sonraki kısımda node->next = new;