/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:42:19 by bakumcu           #+#    #+#             */
/*   Updated: 2026/01/06 11:54:30 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_len;
	int	i;
	size_t a;

	a = 0;
	i = 0;
	dst_len = ft_strlen(dst);
	while (a < size - 1 && src[i])
	{
		dst[dst_len] = src[i];
		i++;
		a++;
		dst_len++;
	}
	return (dst_len);
}
