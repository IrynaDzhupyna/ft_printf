/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:22:00 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/13 21:44:26 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *format_string, ...);
int	handle_conversion(va_list args, char c);
int	handle_char(int c);
int	handle_str(char *s);
int	handle_int(int n);


char	*ft_itoa(int n);
int	ft_nlen(int n);
#endif
