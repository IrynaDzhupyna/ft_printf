/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idzhup <idzhup@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:47:07 by idzhup            #+#    #+#             */
/*   Updated: 2026/02/18 15:16:59 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	handle_int(int n)
{
	int		printed;
	char	*s;

	s = ft_itoa(n);
	printed = handle_str(s);
	free(s);
	return (printed);
}

int	handle_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	handle_nbr_base(uintptr_t n, char *base)
{
	int				printed;
	unsigned long	base_len;

	if (!base)
		return (0);
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	printed = 0;
	if (n >= base_len)
		printed += handle_nbr_base(n / base_len, base);
	printed += handle_char(base[n % base_len]);
	return (printed);
}

int	handle_pointer(void *p)
{
	int	printed;

	printed = 0;
	if (!p)
		return (handle_str("(nil)"));
	printed = handle_str("0x");
	printed += handle_nbr_base((uintptr_t)p, "0123456789abcdef");
	return (printed);
}
