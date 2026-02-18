/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:52:21 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/10 20:37:29 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (p1[i] == p2[i])
		{
			i++;
		}
		else
		{
			return (p1[i] - p2[i]);
		}
	}
	return (0);
}
