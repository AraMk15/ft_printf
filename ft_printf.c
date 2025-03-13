/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:20:15 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/13 22:20:19 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_valid(va_list first, int count)
{
    if
}

int ft_printf(const char *first, ...)
{
    va_list args;
    size_t  count;
    size_t  i;


    count = 0;
    va_start(args, first);
    while (first[i] != '\0')
    {
        if (first[i] == "%" && )
    }
    ft_valid(first, count);
    va_end(args);
    return(count);
}
