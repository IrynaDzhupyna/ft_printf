/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:14:05 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/20 20:32:35 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_nlen(n);
	nb = n;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		s[--len] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (s);
}
