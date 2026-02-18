/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:53:09 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/27 16:06:14 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = 0;
	d = malloc(ft_strlen(s) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
