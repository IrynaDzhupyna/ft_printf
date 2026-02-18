/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:12 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/22 11:54:33 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	total = nmemb * size;
	if (total / nmemb != size)
	{
		return (NULL);
	}
	p = malloc(total);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_bzero(p, total);
	return (p);
}
