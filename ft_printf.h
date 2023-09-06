/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:09:50 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/06 18:26:11 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

// test only
#include <stdio.h>

# include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_strlen(const char *s);
int ft_putstr(char *str);

#endif
