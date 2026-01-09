/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:45:28 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/08 10:58:46 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str_dest;
	unsigned char	*str_src;

	str_dest = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>

int main(void)
{
	unsigned char src[] = "selamlar";
	unsigned char dest[10] = "merh";
	size_t			n = 8;

	printf("%p", ft_memcpy(dest,src,n));
	printf("\n%s", dest);
}

