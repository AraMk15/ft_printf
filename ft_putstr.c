/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:06:26 by armkrtch          #+#    #+#             */
/*   Updated: 2025/03/22 20:08:12 by armkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		count;

	if (!str)
		return (ft_putstr("(null)"));
	count = 0;
	while (*str)
	{
		count += ft_putchar(*(str));
		str++;
	}
	return (count);
}
