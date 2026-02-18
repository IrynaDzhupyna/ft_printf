/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:42:43 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/17 21:10:25 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;
	size_t	copy;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		copy = 0;
	else if (len > s_len - start)
		copy = s_len - start;
	else
		copy = len;
	new = (char *)malloc(copy + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (j < copy)
	{
		new[j] = s[start + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
