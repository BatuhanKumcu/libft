/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:22:52 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:16:49 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_true(char b, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == b)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*fnl;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_set_true(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set_true(s1[end - 1], set))
		end--;
	fnl = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!fnl)
		return (NULL);
	i = 0;
	while (start < end)
	{
		fnl[i] = s1[start];
		i++;
		start++;
	}
	fnl[i] = '\0';
	return (fnl);
}
