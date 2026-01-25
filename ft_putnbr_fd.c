/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:16:56 by batuhankumc       #+#    #+#             */
/*   Updated: 2026/01/23 14:47:58 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n == 2147483647)
	{
		write(1, "2", 1);
		n = 147483647;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
	else
		ft_putchar(n + '0');
}
*/