/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:23:38 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/26 15:03:06 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		numlen;
	char	*str;
	
	numlen = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!str)
		return (NULL);
	str[numlen] = '\0';
	return (str);
}

static	int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

// verilen integerı cevirerek stringe dönüştürüceksin
// ama verilen sayı tersten stringe dönüştürülmeli bu yüzden malloc ile
// sayının analı alınmalı