/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:03:11 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/12 15:06:32 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	imprime un puntero en formato hexadecimal

void	ft_hexpointer(void *ptr, size_t *count)
{
	char			*str;
	unsigned long	adress;

	adress = (unsigned long)ptr;
	ft_putstr("0x", count);
	str = ft_numtostr(adress, HEX_LWBASE);
	if (!str)
		return ;
	ft_putstr(str, count);
	free(str);
}
