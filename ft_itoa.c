/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:23:38 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/30 17:27:49 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_itoa(int n)
{
	char	*final;
	int		digitnmbr;
	long	nlong;

	nlong = (long)n;
	digitnmbr = ft_numlen(nlong);
	final = malloc(sizeof(char) * (digitnmbr + 1));
	if (!final)
		return (NULL);
	final[digitnmbr] = '\0';
	if (nlong < 0)
	{
		final[0] = '-';
		nlong = -nlong;
	}
	digitnmbr--;
	while (nlong > 9)
	{
		final[digitnmbr] = (nlong % 10) + '0';
		nlong = nlong / 10;
		digitnmbr--;
	}
	final[digitnmbr] = nlong + '0';
	return (final);
}
