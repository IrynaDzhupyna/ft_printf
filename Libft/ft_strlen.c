/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:12:48 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/01/27 11:18:40 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello";
	printf("%zu\n", ft_strlen(str));
}*/
