/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:51:22 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/06 18:52:44 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_parse(const char *str, int index, va_list args);

int ft_printf(const char *format, ...)
{
	va_list args;
	int index;
	int specifier;
	int bytes;

	if (!format)
		return (-1);
	va_start(args, format);
	bytes = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] != '\0')
			bytes = ft_parse(format[++index], args);
		else
			bytes += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (bytes);
}

int ft_parse(const char *str, int index, va_list args)
{
	int bytes;

	bytes = 0;
	while (str[++index])
	{
		if (str[index] == 'c')
			bytes += ft_putchar(va_arg(args, int));
		else if (str[index] == 's')
			bytes = ft_putstr(va_arg(args, char *));
	}
	return (bytes);
}
