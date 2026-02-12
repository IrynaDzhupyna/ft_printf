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

//take the specifier char (c s p d i u x X %)
// use switch statement to handle each case
//return the num of char printed for that conversion
int	handle_conversion(char specifier, va_list args)
{
	int	char_printed;

	char_printed = 0;
	switch (specifier)
	{
		case 'c':
		case '%'
			char_printed = handler_char(args);
			break;
		case 's':
			char_printed = handler_string(args);
			break;
		case 'p':
			char_printed = handler_void_pointer(args);
			break;
		case 'd':
		case 'i':
			char_printed = handler_int(args);
			break;
		case 'u':
			char_printed = handler_unsigned_decimal(args);
			break;
		case 'x':
		case 'X':
			char_printed = handler_hexadecimal(args, specifier);
			break;
		default:
			return (0);
	}
	return (char_printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int char_printed;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			char_printed += handle_conversion(format[i+1], args);
			i = i + 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			char_printed++;
		}
	}
	va_end(args);
	return (char_printed);
}

int	main(void)
{
	printf("%c\n", c);
	return (0);
}
