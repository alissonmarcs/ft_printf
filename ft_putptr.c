/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:08:22 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/07 17:24:30 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long n, char *base)
{
	int base_size;
	int bytes;

	if (n == 0)
		return (ft_putstr("(nil)"));
	bytes = 0;
	base_size = ft_strlen(base);
	if (n > (unsigned long) base_size)
		bytes += ft_putptr((n / base_size), base);
	else
		bytes += ft_putstr("0x");
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}
