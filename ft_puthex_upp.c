/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:00:54 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 20:01:52 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned int nbr, char *format)
{
	int		count;
	char	c;

	count = 0;
	if (nbr >= 16)
		count += ft_puthex_upp(nbr / 16, format);
	c = format[nbr % 16];
	count += ft_putchar(c);
	return (count);
}
