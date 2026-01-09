/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:14:48 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/08 16:23:46 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	slen;
	size_t	i;
	char	*str;
	
	i = 0;
	n = 0;
	slen = ft_strlen(s);
	str = malloc(sizeof (char) * (slen + 1));
	while (s[n] && n < len)
	{
		while (s[n] == start)
		{
			str[i] = s[n];
			n++;
		}
		n++;
	}
	return (str);
}