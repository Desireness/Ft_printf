/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primerospasos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:41:40 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/07 00:50:34 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void example(int num, ...)
{
	va_list args;
	va_start(args, num);

	for(int i = 0; i < num; i++)
	{
		int valor = va_arg(args, int);
		printf("Valor %d: %d\n", i + 1, valor);		
	
	}
	va_end(args);
}

int main()
{
	example(5, 10, 20, 30, 40, 50);
	return (0);
}
