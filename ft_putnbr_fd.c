/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:16:56 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/30 17:07:47 by batuhankumc      ###   ########.fr       */
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
