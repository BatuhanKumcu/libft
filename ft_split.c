/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:27:24 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:15:15 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word);
}

static	char	*ft_alloc_word(char const *s, char c, int *i)
{
	char	*word;
	int		len;
	int		j;

	len = 0;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = s[*i];
		word++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

static	void	ft_free_split(char **strs, int j)
{
	int	a;

	a = 0;
	while (a < j)
	{
		free(strs[a]);
		a++;
	}
}

static	char	**ft_put_words(char const *s, char c, int word_count)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	strs = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strs[j] = ft_alloc_word(s, c, &i);
			if (!strs[j])
				return (ft_free_split(strs, j - 1), NULL);
			j++;
		}		
		else
			i++;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		word_len;
	
	if (!s)
		return (NULL);
	word_len = ft_word_count(s, c);
	if (word_len == 0)
		return (NULL);
	strs = ft_put_words(s, c, word_len);
	if (!strs)
		return (NULL);
	return (strs);
}
