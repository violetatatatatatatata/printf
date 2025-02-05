/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:57:58 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 15:50:59 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	Imprime carácteres en hexadecimal (base 16), casteandolo a string

void	ft_puthex(unsigned int num, size_t *count, char *base)
{
	char	*str;
	
	str = ft_numtostr(num, base);
	ft_putstr(str, count);
	free(str);
}
