/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:21:27 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/13 14:47:06 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(va_list args, char c)
{
	int	printed;

	printed = 0;
	if (c == 'c')
		printed += handle_char(va_arg(args, int));
	else if (c == 's')
		printed += handle_str(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		printed += handle_int(va_arg(args, int));
	return (printed);
}

int	ft_printf(const char *format_string, ...)
{
	va_list	args;
	int	i;
	int	printed;

	va_start(args, format_string);
	i = 0;
	while (format_string[i])
	{
		printed = 0;
		if (format_string[i] == '%' && format_string[i+1] != '%' 
				&& format_string[i+1] != '\0')
		{
			printed = handle_conversion(args, format_string[i+1]);
			i++;
		}
		else
			printed = handle_char(format_string[i]);
		i++;
	}
	va_end(args);
	return (1);
}
