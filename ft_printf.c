/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idzhup <idzhup@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:21:27 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/18 11:31:19 by idzhup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	handle_conversion(va_list *args, char c)
{
	if (c == 'c')
		return (handle_char(va_arg(*args, int)));
	else if (c == 's')
		return (handle_str(va_arg(*args, char *)));
	else if (c == 'i' || c == 'd')
		return (handle_int(va_arg(*args, int)));
	else if (c == 'u')
		return (handle_nbr_base(va_arg(*args, unsigned int), "0123456789"));
	else if (c == 'x')
		return (handle_nbr_base(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (handle_nbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (handle_pointer(va_arg(*args, void *)));
	return (0);
}

int	ft_printf(const char *format_string, ...)
{
	va_list	args;
	int	i;
	int	printed;

	va_start(args, format_string);
	i = 0;
	printed = 0;
	while (format_string[i])
	{
		if (format_string[i] == '%' && format_string[i+1] != '%' 
				&& format_string[i+1] != '\0')
		{
			printed += handle_conversion(&args, format_string[i+1]);
			i++;
		}
		else if (format_string[i] == '%' && format_string[i+1] == '%')
		{
			printed += handle_char(format_string[i+1]);
			i++;
		}
		else
			printed += handle_char(format_string[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
