/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:10:59 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/08 02:45:57 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_num_len(int n)
{
    int len = 0;
    
    if (n <= 0)
    {
        len++;
        if (n == 0)
            return 1; 
    }
    while (n != 0)
    {
        n /= 10;
        len++;
    }

    return len;
}

char ft_toupper(char c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char ft_tolower(char c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}