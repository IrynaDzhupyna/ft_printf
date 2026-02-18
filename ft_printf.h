/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idzhup <idzhup@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:22:00 by irdzhupy          #+#    #+#             */
/*   Updated: 2026/02/18 14:56:18 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format_string, ...);
int		handle_conversion(va_list *args, char c);
int		handle_char(int c);
int		handle_str(char *s);
int		handle_int(int n);
int		handle_nbr_base(uintptr_t n, char *base);
int		handle_pointer(void *p);
int		ft_strlen(const char *s);
int		ft_nlen(int n);
char	*ft_itoa(int n);

#endif
