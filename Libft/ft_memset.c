/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:45:00 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/10 20:43:31 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	int		s1[20];
	int		s2[20];
	size_t	n;
	int		c;

	n = 3; // if n = 3 it return aaa��, if 5 or more it return aaaaa
	c = 'a';
	printf("Mine: %s\n", (char *)ft_memset(s1, c, n));
	printf("Original: %s\n", (char *)memset(s2, c, n));
}*/
