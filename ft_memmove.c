/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:06:30 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/29 19:12:58 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_str;
	unsigned char	*dst_str;
	size_t			i;

	src_str = (unsigned	char *)src;
	dst_str = (unsigned char *)dst;
	if (dst_str < src_str)
	{
		i = 0;
		while (i < len)
		{
			dst_str[i] = src_str[i];
			i++;
		}
	}
	else if (src_str < dst_str)
	{
		while (len > 0)
		{
			len--;
			dst_str[len] = src_str[len];
		}
	}
	return (dst);
}
