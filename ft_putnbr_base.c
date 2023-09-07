/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:21:54 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/07 13:30:12 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long n, char *base)
{
	int bytes;
	int base_size;

	bytes = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		bytes += ft_putchar('-');
		n = -n;
	}
	if (n >= base_size)
		bytes += ft_putnbr_base((n / base_size), base);
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}
