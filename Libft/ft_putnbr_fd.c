/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:24:37 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/20 17:36:03 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	nb = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	c = nb % 10 + 48;
	ft_putchar_fd(c, fd);
}
