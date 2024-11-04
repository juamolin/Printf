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
	int	rip;

	rip = ft_printf("Hola, %s!\n", "MI AMOR");
	printf("%d\n",rip);
	rip = printf("Hola, %s!\n", "MI AMOR");
	printf("%d\n",rip);
	rip = ft_printf("Número: %d\n", 42);
	printf("%d\n",rip);
	rip = printf("Número: %d\n", 42);
	printf("%d\n",rip);
	rip = ft_printf("Caracter: %c\n", 'A');
	printf("%d\n",rip);
	rip = printf("Caracter: %c\n", 'A');
	printf("%d\n",rip);
	rip = ft_printf("Literal porcentaje: %%\n");
	printf("%d\n",rip);
	rip = printf("Literal porcentaje: %%\n");
	printf("%d\n",rip);
	return (0);
}
