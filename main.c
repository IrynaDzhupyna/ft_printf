/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:45:48 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/16 11:02:21 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//int	printed;
	int 	a;
	int	b;

	a = 0x1A2B;
	b = 0x1a2b;
	printf("Original upper: %x\n", a);
	printf("Original lower: %x\n", b);
	//printed = ft_printf("Mine: %x\n", a);
	ft_printf("%x\n", a);
	return (0);
}
