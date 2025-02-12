/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:58:36 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/08 13:29:33 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Esta función imprime un numero dentro de los limites del int y lo
	castea mediante ft_putchar()
*/

void	ft_putnum(int num, size_t *count)
{
	int	sign;

	sign = -1;
	if (num < 0)
	{
		ft_putchar('-', count);
		ft_putnum(sign * num, count);
	}
	else if (num == -2147483648)
	{
		ft_putchar(num / 10, count);
		ft_putchar('8', count);
	}
	else
	{
		if (num > 9)
			ft_putnum((num / 10), count);
		ft_putchar(('0' + num % 10), count);
	}
}
