/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:57:54 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 21:57:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int nbr)
{
    char    c;
    int     count;

    count = 0;
    if (nbr == -2147483648)
    {
        count += ft_putchar('-');
        count += ft_putchar('2');
        nbr = 147483648;
    }
    if (nbr < 0)
    {
        count += ft_putchar('-');
        nbr *= -1;
    }
    if (nbr >= 10)
    {
        count += ft_putnbr(nbr / 10);
    }
    c = nbr % 10 + '0';
    count += ft_putchar(c);
    return count;
}