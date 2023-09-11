/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:23:54 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/11 11:38:57 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	str_len;
	int	bytes;

	if (!str)
		return (write(1, "(null)", 6));
	str_len = ft_strlen(str);
	bytes = write(1, str, str_len);
	return (bytes);
}
