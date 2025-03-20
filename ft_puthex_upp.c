/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:57:44 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 21:57:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_upp(unsigned int nbr, char *format)
{
    int count;
    char c;
    
    count = 0;
    if (nbr >= 16)
        count += ft_puthex_upp(nbr / 16, format);
    c = format[nbr % 16];
    count += ft_putchar(c);
    return (count);
}