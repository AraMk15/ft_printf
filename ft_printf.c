/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:20:15 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 18:09:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_valid(const char *first, va_list args)
{
    int  count;


    count = 0;
    while (*first)
    {
        if (*first == '%')
        {
            first++;
            if (*first == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (*first == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (*first == 'd' || *first == 'i')
                count += ft_putnbr(va_arg(args, int));
            else if(*first == 'u')
                count += ft_put_uns_int(va_arg(args, unsigned int));
            else if(*first == 'x')
                count += ft_puthex_low(va_arg(args, unsigned int),"0123456789abcdef");
            else if(*first == 'X')
                count += ft_puthex_low(va_arg(args, unsigned int),"0123456789ABCDEF");
            else if(*first == 'p')
                count += ft_putptr((size_t)va_arg(args, void *),"0123456789abcdef");
            else if (*first == '%')
                count += ft_putchar('%');
        }
        else
            count += ft_putchar(*first);
        first++;
    }
    return count;
}

int ft_printf(const char *first, ...)
{
    va_list args;
    int count;

    va_start(args, first);
    
    count = ft_valid(first, args);
    va_end(args);
    return (count);
}

/*
int main() {
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", 1);
    ft_printf("Pointer: %p\n", 15);
    ft_printf("Pointer: %p\n", 16);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hexadecimal (lower): %x\n", 42);
    ft_printf("Hexadecimal (upper): %X\n", 42);
    ft_printf("Percent sign: %%\n");
    printf("Character: %c\n", 'A');
    printf("String: %s\n", "Hello, World!");
    printf("Pointer: %p\n", 1);
    printf("Pointer: %p\n", 15);
    printf("Pointer: %p\n", 16);
    printf("Decimal: %d\n", 42);
    printf("Unsigned: %u\n", 42);
    printf("Hexadecimal (lower): %x\n", 42);
    printf("Hexadecimal (upper): %X\n", 42);
    printf("Percent sign: %%\n");
    return 0;
}
*/