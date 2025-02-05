/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:33 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 17:02:02 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_selector(va_list va, char *str, size_t count);

size_t	ft_print(char const *str, ...)
{
	size_t	count;
	va_list	va;

	if (!str)
		return (0);
	count = 0;
        va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_selector(va, (char *)str, &count);
		}
		else
			ft_putchaar(*str, &count);
		str++;
	}
	va_end(va);
	return (count);
}

void	ft_selector(va_list va, char *str, size_t count)
{
	if (*str == 'c')
		ft_putchar(va_arg(va, int) count);
	else if (*str == 's')
		ft_putstr((va, char *), count);
	else if (*str == 'p')
		ft_hexpointer((va, void *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnum((va, int), count);
	else if (*str == 'x')
		ft_puthex(va_arg(va, unsigned int), count, HEX_LWBASE);
	else if (*str == 'X')
		ft_puthex(va_arg(va, unsigned int), count, HEX_UPBASE);
	else if (*str == '%')
		ft_putchar(*str, count);
}
