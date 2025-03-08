/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:36:50 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/08 02:31:41 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>  // Para usar write

// Prototipos de las funciones
int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int handle_char(va_list args);    // Correcto: Declaración de la función
int handle_string(va_list args);  // Correcto: Declaración de la función
int handle_pointer(va_list args);
int	handle_decimal(va_list args);
int ft_putnbr_base(unsigned long nbr, char *base);
int	ft_num_len(int len);
size_t ft_strlen(const char *str);
void	ft_putnbr(int n);

#endif
