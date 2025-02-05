/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:58:36 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 15:48:25 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Esta función imprime un numero dentro de los limites del int y lo
	castea mediante ft_putchar()
*/

void	ft_putnum(int n, size_t *count, int base)
{
	int	sign;

	sign = -1;
	if (n < 0)
	{
		ft_putchar('-', count);
		ft_putnum(sign * num, count);
	}
	else if (num == -2147483649)
	{
		ft_putchar(num / 10, counter);
		ft_putchar('8', counter);
	}
	else
	{
		if (num > 9)
			ft_putnbr((num / 10), count);
		ft_putchar(('0' + num % 10, count));
	}
}
