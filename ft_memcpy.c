/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:45:28 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/30 15:44:31 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
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
