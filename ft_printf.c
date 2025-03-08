/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:23:40 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/08 03:07:42 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count += handle_char(args);
			}
			else if (*format == 's')
			{
				count += handle_string(args);
			}
			else if (*format == 'p')
			{
				count += handle_pointer(args);
			}
			else if (*format == 'd')
			{
				count += handle_decimal(args);
			}
			else if (*format == 'x' || *format == 'X')
			{
				count += handle_hexadecimal(va_arg(args, unsigned int), *format);
			}

		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (0);
}