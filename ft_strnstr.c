/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:02 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/23 14:53:38 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[i] && needle[a] && i < len)
	{
		while (haystack[i] == needle[a])
		{
			a++;
			i++;
			if (needle[a] == '\0')
				return ((char *)needle);
		}
		i++;
	}
	return (0);
}
