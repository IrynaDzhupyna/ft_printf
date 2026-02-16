/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:41:53 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/16 11:09:37 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	handle_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	handle_int(int n)
{
	int	printed;
	char	*s;

	s = ft_itoa(n);
	printed = handle_str(s);
	free(s);
	return (printed);
}
