/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 21:41:12 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/16 22:03:07 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_len(unsigned n)
{
	int	len;
	
	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned n)
{
	char	*s;
	int	len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_unsigned_len(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (n != 0)
	{
		s[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}
