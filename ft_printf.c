/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:51:22 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/07 17:38:03 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_parse(char formater, va_list args);

int ft_printf(const char *format, ...)
{
	va_list args;
	int index;
	int bytes;

	if (!format)
		return (-1);
	va_start(args, format);
	bytes = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] != '\0')
			bytes += ft_parse(format[++index], args);
		else
			bytes += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (bytes);
}

int ft_parse(char formater, va_list args)
{
	int bytes;

	bytes = 0;
	if (formater == 'c')
		bytes += ft_putchar(va_arg(args, int));
	else if (formater == 's')
		bytes += ft_putstr(va_arg(args, char *));
	else if (formater == 'x')
		bytes += ft_putnbr_base(va_arg(args, unsigned int), HEXA_LOW_BASE);
	else if (formater == 'X')
		bytes += ft_putnbr_base(va_arg(args, unsigned int), HEXA_UP_BASE);
	else if (formater == 'u')
		bytes += ft_putnbr_base(va_arg(args, unsigned int), DECIMAL_BASE);
	else if (formater == 'i' || formater == 'd')
		bytes += ft_putnbr_base(va_arg(args, int), DECIMAL_BASE);
	else if (formater == 'p')
		bytes += ft_putptr(va_arg(args, unsigned long), HEXA_LOW_BASE);
	else if (formater == '%')
		bytes += ft_putchar('%');
	return (bytes);
}
