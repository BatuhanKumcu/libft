/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:01:08 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/09 16:04:52 by bakumcu          ###   ########.fr       */
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
	unsigned char s[12];
	s[0] = 200;
	s[1] = 67;
	s[2] = 'D';
	int i = 2;
	while (++i < 12)
		s[i] = '\0';
	int *p = ft_memset(s, 1, 5);
	//p = ft_memset(p, 1, 1);
	printf("%d\n%d\n%d\n", p[0], p[1], p[2]);
}
