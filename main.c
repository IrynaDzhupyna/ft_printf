/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:45:48 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/13 21:57:01 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	printed;
	char	*s;

	s = "Hello";
	printf("Original: %s\n", s);
	printed = ft_printf("Mine: %s\n", s);
	printf("%i\n", printed);
	return (0);
}
