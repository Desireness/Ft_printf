/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:23:40 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/07 01:43:12 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char	*str)
{
	int	i;


	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printf(char const *format, ...)
{
	int		count;
	va_list	args;
	char	c;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				count += ft_putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				count += ft_putstr(str);
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

int main()
{
	ft_printf("Hola %c!\n", 'A');
	ft_printf("Caràcter: %c %c %c\n", 'X', 'Y', 'Z');
	ft_printf("Hola, prueba %s", "Prueba1");
	return (0);

}
