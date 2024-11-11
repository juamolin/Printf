/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:40:08 by juamolin          #+#    #+#             */
/*   Updated: 2024/11/11 16:52:07 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	n_print;

	n_print = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		n_print += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		n_print += ft_putnbr(n / 10);
	}
	n_print += ft_putchar(n % 10 + '0');
	return (n_print);
}

int	ft_putnbr_extra(unsigned int n, char *b)
{
	int				n_print;
	unsigned long	len;

	len = 0;
	while (b[len])
		len++;
	n_print = 0;
	if (n >= len)
		n_print += ft_putnbr_extra(n / len, b);
	n_print += ft_putchar(b[n % len]);
	return (n_print);
}

int	ft_ptr(unsigned long ptr)
{
	int	n;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	n = 0;
	n += ft_putstr ("0x");
	n += ft_putnbr_extra(ptr, "01234567890abcdef");
	return (n);
}
