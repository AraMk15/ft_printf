/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:09:55 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 18:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(char *str)
{
    int count;

    if(!str)
        return (ft_putstr("(null)"));
    count = 0;
    while(*str)
    {   
        count += ft_putchar(*(str));
        str++;
    }
    return count;
}
