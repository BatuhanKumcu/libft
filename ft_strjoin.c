/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:48:17 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/08 16:55:47 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	sn;
	char	*sum;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	sn = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sum = malloc(sizeof(char) * (s1len + s2len + 1));
	if(!sum)
		return (NULL);
	while (s1[sn])
	{
		sum[i] = s1[sn];
		i++;
		sn++;
	}
	sn = 0;
	while (s2[sn])
	{
		sum[i] = s2[sn];
		i++;
		sn++;
	}
	sum[i] = '\0';
	return (sum);
}
