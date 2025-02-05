/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:03:11 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 16:45:26 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	imprime un puntero en formato hexadecimal

void ft_hexpointer(unsigned int num, size_t *count, char *base)
{
	char		*str;
	unsigned long	*adress;

	adress = (unsigned long)ptr;
        ft_putstr("0x", count);
	str = ft_numtostr(num, HEX_LWBASE);
        ft_putstr(str, count);
	free(str);
}
