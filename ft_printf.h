/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:09:50 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/11 13:09:16 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

// test only
# include <stdio.h>

# define DECIMAL_BASE "0123456789"
# define HEXA_LOW_BASE "0123456789abcdef"
# define HEXA_UP_BASE "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen(const char *s);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long n, char *base);
int	ft_putnbr_base(long long n, char *base);

#endif
