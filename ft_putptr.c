/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:04:53 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 20:05:49 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(size_t nbr, char *format)
{
	int		count;
	int		new;

	if (nbr == 0)
	{
		new = ft_putstr("(nil)");
		return (new);
	}
	count = ft_putstr("0x");
	count += ft_puthex_low(nbr, format);
	return (count);
}
