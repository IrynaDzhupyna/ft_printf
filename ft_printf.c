/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:55:32 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/09 19:23:00 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	num_printed;
	int	i;

	num_printed = 0;
	i = 0;
	va_start(args, format);

	while (i < format)
	{
		/*write to stdout
                • %c Prints a single character.
                • %s Prints a string (as defined by the common C convention).
                • %p The void * pointer argument has to be printed in hexadecimal format.
                • %d Prints a decimal (base 10) number.
                • %i Prints an integer in base 10.
                • %u Prints an unsigned decimal (base 10) number.
                • %x Prints a number in hexadecimal (base 16) lowercase format.
                • %X Prints a number in hexadecimal (base 16) uppercase format.
                • %% Prints a percent sign.*/
		i++;
		format += va_arg(va, format_specifier);
		if (error)
			return (-1);
	}
	va_end(va);
	return (num_printed);
}

int	main(void)
{
	printf("%c\n", c);
	return (0);
}
