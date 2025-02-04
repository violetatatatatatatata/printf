/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:24:16 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/04 00:29:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_digits(int n, char *base);

/*
	Esta funcion retorna un string del numero deseado en la base
	correspondiente
*/

char	ft_selector(unsigned long long n, char *base)
{
	int	base_len;
	int	num_len;
	char	*str;

	base_len = ft_strlen(base);
	num_len = ft_digits(n, base_len);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (num_len--)
	{
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}

size_t  ft_digits(int n, int base_len)
{
	size_t	len;

	len = 1;
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}
