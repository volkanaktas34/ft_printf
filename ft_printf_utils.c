/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:12:42 by vaktas            #+#    #+#             */
/*   Updated: 2026/02/05 13:32:56 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	total;
	int	check;

	total = 0;
	check = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[total])
	{
		check = ft_putchar(s[total]);
		if (check == -1)
			return (-1);
		total++;
	}
	return (total);
}

int	ft_putnbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int	ft_puthex(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (!base)
		return (0);
	if (n >= 16)
		count += ft_puthex(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(unsigned long n)
{
	int	count;

	if (!n)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex(n, "0123456789abcdef");
	return (count);
}
