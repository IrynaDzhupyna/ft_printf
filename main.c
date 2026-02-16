/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:45:48 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/16 22:16:02 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	unsigned	a;
	int	printed_o;
	int	printed_m;

	a = 4294967295;
	printed_o = 0;
	printed_m = 0;

	printed_o = printf("Original %u\n", a);
	printf("Printed original: %i\n", printed_o);

	printed_m = ft_printf("Mriginal %u\n", a);
	printf("Printed mine: %i\n", printed_m);
	return (0);
}
