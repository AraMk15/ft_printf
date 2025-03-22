/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:44:28 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 19:54:36 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_uns_int(unsigned int nbr)
{
	char	c;
	int		count;

	count = 0;
	if (nbr >= 10)
		count += ft_put_uns_int(nbr / 10);
	c = nbr % 10 + '0';
	count += ft_putchar(c);
	return (count);
}
