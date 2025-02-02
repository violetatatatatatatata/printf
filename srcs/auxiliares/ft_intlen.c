/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:30:04 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/02 19:34:48 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

// Funcion que retorna los digitos un numero pasado en cierta base

size_t	ft_intlen(unsigned long long num, char *base)
{
	char	*n;
	size_t	len;
// cambiar itoa a unsigned long long
	n = ft_itoa(num);
	len = ft_strlen(n);
	return (len);
}
