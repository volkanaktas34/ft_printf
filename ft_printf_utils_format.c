/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_format.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:12:42 by vaktas            #+#    #+#             */
/*   Updated: 2026/02/04 12:45:02 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_putptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}
