/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:09:36 by juamolin          #+#    #+#             */
/*   Updated: 2024/11/02 20:39:48 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list va, char str)
{
	int	print;

	print = 0;
	if (str == 'c')
		print += ft_putchar(va_arg(va, int));
	else if (str == 's')
		print += ft_putstr(va_arg(va, char *));
	else if (str == 'd' || str == 'i')
		print += ft_putnbr(va_arg(va, int));
	else if (str == '%')
		print += ft_putstr("%");
	return (print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		print;

	i = 0;
	print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			print += ft_format(args, format[i]);
		}
		else
			print += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (print);
}
