/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:44:41 by juamolin          #+#    #+#             */
/*   Updated: 2024/11/03 20:44:42 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hola, %s!\n", "MI AMOR");
	ft_printf("Número: %d\n", 42);
	ft_printf("Caracter: %c\n", 'A');
	ft_printf("Literal porcentaje: %%\n");
	return (0);
}
