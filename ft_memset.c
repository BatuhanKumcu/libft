/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:01:08 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/08 10:44:55 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t	i;

	i = 0;
	str = (unsigned	char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

#include <stdio.h>

int main(void)
{
	unsigned char str[5] = "";
	size_t len = 3;
	int c = 'A';
	printf("%p", ft_memset(str,c,len));
	printf("\n%s", str);
}
