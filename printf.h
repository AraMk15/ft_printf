/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:20:41 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/13 22:20:46 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *, ...);
void    ft_putchar(char c);
void    ft_putstr(char *str);

#endif
