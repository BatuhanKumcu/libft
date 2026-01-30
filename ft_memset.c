/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:01:08 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/29 15:59:16 by batuhankumc      ###   ########.fr       */
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

int	main(void)
{
	int	x[2];
	x[0] = 0;
	ft_memset(&x[1], 255, 4);
	ft_memset(&x[1], 249, 3);
	ft_memset(&x[1], 134, 2);
	ft_memset(&x[1], 206, 1);
	printf("%d\n", x[0]);
	printf("%d", x[1]);
}
