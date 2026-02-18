/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:14:50 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/15 20:09:17 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*#include <unistd.h>

int	main(void)
{
	char	s1[10] = {65, 67, 2, 3, 4, 5, 6, 7, 8, 9};
	char	s2[10] = {65, 67, 2, 3, 4, 5, 6, 7, 8, 9};
	char	*strs[2] = {s1, s2};
	int		j;
	int		i;

	// printf("s: %s\n",(char *) s1);
	bzero(s1, 5);
	ft_bzero(s2, 5);
	// printf("s: %s\n",(char *) s1);
	// return (0);
	j = 0;
	i = 0;
	while (j < 2)
	{
		i = 0;
		while (i < 10)
		{
			if (strs[j][i] == '\0')
				write(1, "#", 1);
			else
				write(1, &strs[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}*/
