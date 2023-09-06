/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:23:54 by almarcos          #+#    #+#             */
/*   Updated: 2023/09/06 18:18:33 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
	int str_len;
	int bytes;

	if (!str || str[0] == '\0')
		return (0);
	str_len = ft_strlen(str);
	bytes = write(1, str, str_len);
	return (bytes);
}
