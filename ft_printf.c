/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:33 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/08 13:56:52 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_selector(va_list va, char *str, size_t *count);

size_t	ft_printf(char const *str, ...)
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
			ft_putchar(*str, &count);
		str++;
	}
	va_end(va);
	return (count);
}

void	ft_selector(va_list va, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchar((char)va_arg(va, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), count);
	else if (*str == 'p')
		ft_hexpointer(va_arg(va, void *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnum(va_arg(va, int), count);
	else if (*str == 'u')
		ft_putunsignint(va_arg(va, int), count);
	else if (*str == 'x')
		ft_puthex(va_arg(va, unsigned int), count, HEX_LWBASE);
	else if (*str == 'X')
		ft_puthex(va_arg(va, unsigned int), count, HEX_UPBASE);
	else if (*str == '%')
		ft_putchar(*str, count);
}
