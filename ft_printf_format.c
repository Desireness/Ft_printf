/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:36:30 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/08 11:08:12 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list args)
{
	char c = va_arg(args, int);
	return (ft_putchar(c));
}

int	handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	return (ft_putstr(str));
}

int handle_pointer(va_list args)
{
	void *ptr = va_arg(args, void*);
	if(!ptr)
		return (ft_putstr("0x0"));
	ft_putstr("0x");
	ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (ft_strlen(ptr));
}

int	handle_decimal(va_list args)
{
	int num;

	num = va_arg(args, int);
	ft_putnbr(num);
	return (ft_num_len(num));
}

int handle_hexadecimal(unsigned int num, char specifier)
{
    int count = 0;
    char *base;

    if (specifier == 'x')
    {
        base = "0123456789abcdef";
    }
    else if (specifier == 'X')
    {
        base = "0123456789ABCDEF";
    }

    count += ft_putnbr_base(num, base);
    return count;
}

int handle_unsigned(unsigned int num)
{
    return ft_putnbr_base_u(num);
}

