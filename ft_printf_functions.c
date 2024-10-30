/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 15:40:08 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-30 15:40:08 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_putchar(int c)
{
    write(1, &c, 1);
    return(0);
}

int    ft_putstr(const char *str)
{
    int i;

    i = 0;
    if (!str)
    {
        write (1, "(null)", 6);
        return(6);
    }
    while(*str != '\0')
    {
        write (1, &str, 1);
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
		ft_putchar('-');
		++n_print;
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
	else
	{
		ft_putchar(n + 48);
		++n_print;
	}
	return (n_print);
}