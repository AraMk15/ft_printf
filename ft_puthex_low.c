/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:56:25 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 21:56:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_low(unsigned int nbr, char *format)
{
    int count;
    char c;
    
    count = 0;
    if (nbr >= 16)
        count += ft_puthex_low(nbr / 16, format);
    c = format[nbr % 16];
    count += ft_putchar(c);
    return (count);
}
