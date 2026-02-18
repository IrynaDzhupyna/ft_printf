/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:02:05 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/22 11:52:38 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((9 <= nptr[i] && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (48 <= nptr[i] && nptr[i] <= 57)
	{
		nbr = nbr * 10 + (nptr[i] - 48);
		i++;
	}
	return (nbr * sign);
}
