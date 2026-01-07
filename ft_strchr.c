/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:46:10 by bakumcu           #+#    #+#             */
/*   Updated: 2026/01/07 14:23:12 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
			i++;
	}
	if (s[i] == '\0')
		return ((char *)s + i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	i = 'a';
	char	s[] = "selamlar";
	printf("%s", ft_strchr(s,i));
}
