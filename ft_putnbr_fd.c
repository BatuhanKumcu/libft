/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:14:54 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/01 11:14:55 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a;
	long	nm;

	nm = (long)n;
	if (nm < 0)
	{
		write(fd, "-", 1);
		nm = -nm;
	}
	if (nm > 9)
	{
		ft_putnbr_fd((nm) / 10, fd);
		ft_putnbr_fd((nm) % 10, fd);
	}
	else
	{
		a = nm + '0';
		write(fd, &a, 1);
	}
}
