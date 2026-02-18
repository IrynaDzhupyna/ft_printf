/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:58:36 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/19 19:45:18 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_is_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
 {
		char    *test;
		if (argc != 3)
			return (0);
		test = ft_strtrim(argv[1], argv[2]);
		printf("%s\n", test);
		free(test);
		return (0);
}*/
