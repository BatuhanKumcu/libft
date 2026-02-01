/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:14:22 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:14:24 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str_dest;
	unsigned char	*str_src;

	i = 0;
	str_dest = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dst);
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dst);
}
