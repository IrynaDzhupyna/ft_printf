/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:08:23 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/20 22:19:53 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && i + j < len && little[j] == big[i + j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
