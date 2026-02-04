/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:12:20 by vaktas            #+#    #+#             */
/*   Updated: 2026/02/04 12:30:20 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_puthex(unsigned long n, char *base);
int	ft_putptr(unsigned long n);
int	ft_check_format(va_list args, char format);
int	ft_printf(const char *format, ...);

#endif
