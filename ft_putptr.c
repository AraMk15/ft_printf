/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:56:57 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 21:56:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long long nbr, char *format)
{
    int count;
    char c;
    
    count = 0;
    if (nbr >= 16)
        count += ft_putptr(nbr / 16, format);
    c = format[nbr % 16];
    count += ft_putchar(c);
    return (count );
}