/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:06:30 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/30 18:03:07 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_str;
	unsigned char	*dst_str;
	size_t			i;

	i = 0;
	src_str = (unsigned char *)src;
	dst_str = (unsigned char *)dst;
	if (dst_str == NULL && src_str == NULL)
		return (NULL);
	if (dst_str < src_str)
	{
		while (i < len)
		{
			dst_str[i] = src_str[i];
			i++;
		}
	}
	else
	{ 
		while (len-- > 0)
			dst_str[len] = src_str[len];
	}
	return (dst);
}
