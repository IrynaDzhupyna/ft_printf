/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:25:54 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/20 22:27:54 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	unsigned char	c;
	int				i;

	c = ch;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
