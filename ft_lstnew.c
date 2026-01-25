/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:55:59 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/23 16:23:55 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}*/

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	int		*x = malloc(sizeof(int));
	t_list	*a;
	t_list	*b;
	t_list	*c;

	*x = 42;
	a = ft_lstnew(x);
	b = ft_lstnew("B");
	c = ft_lstnew("C");

	a->next = b;
	b->next = c;

	printf("a: %d\n", *(int *)a->content);
	printf("b: %s\n", (char *)a->next->content);
	printf("c: %s\n", (char *)a->next->next->content);

	printf("\nTraverse:\n");
	while (a)
	{
		printf("%s\n", (char *)a->content);
		a = a->next;
	}

	return (0);
}
