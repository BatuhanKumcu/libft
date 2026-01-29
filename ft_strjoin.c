/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:48:17 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/27 11:51:27 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	int		i;
	int		n;
	char	*sum;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sum = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!sum)
		return (NULL);
	while (s1[n])
		sum[i++] = s1[n++];
	n = 0;
	while (s2[n])
		sum[i++] = s2[n++];
	sum[i] = '\0';
	return (sum);
}

#include <stdio.h>

int	main(void)
{
	char const	s1[] = "selam";
	char const	s2[] = " merhaba";
	printf("%s", ft_strjoin(s1,s2));
}