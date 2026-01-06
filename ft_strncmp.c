/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:28:18 by bakumcu           #+#    #+#             */
/*   Updated: 2026/01/06 12:27:17 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	size_t a;

	a = 0;
	i = 0;
	while (s1[i] && s2[i] && a < n && s1[i] == s2[i])
	{
		i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		a++;
	}
	return (0);
}
