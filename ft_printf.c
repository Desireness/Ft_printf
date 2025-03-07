/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:23:40 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/07 00:58:35 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	return write(1, &c, 1);
}

int	ft_printf(char const *format, ...)
{
	va_list args;

	va_start(args, format);
	while(*format)
	{
		ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (0);
}

