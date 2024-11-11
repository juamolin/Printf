/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:27:14 by juamolin          #+#    #+#             */
/*   Updated: 2024/11/11 16:58:39 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *fotmat, ...);
int	ft_ptr(unsigned long ptr);
int	ft_putnbr2(unsigned long n, char *base);

#endif
