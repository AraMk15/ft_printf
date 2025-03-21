/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:38:55 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 19:43:46 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *first, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_put_uns_int(unsigned int nbr);
int	ft_puthex_low(size_t nbr, char *format);
int	ft_putptr(size_t nbr, char *format);
int	ft_puthex_upp(unsigned int nbr, char *format);

#endif
