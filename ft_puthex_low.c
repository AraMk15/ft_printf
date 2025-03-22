/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:59:05 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 20:00:17 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(size_t nbr, char *format)
{
	int		count;
	char	c;

	count = 0;
	if (nbr >= 16)
		count += ft_puthex_low(nbr / 16, format);
	c = format[nbr % 16];
	count += ft_putchar(c);
	return (count);
}
