/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:28:18 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:16:15 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((s1[i] != s2[i]))
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		i++;
	}
	if (i < n)
		return (((unsigned char)(s1[i])) - ((unsigned char)s2[i]));
	return (0);
}
