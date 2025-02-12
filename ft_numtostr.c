/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:24:16 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/12 16:08:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_digits(int n, int base_len);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);

/*
	Esta funcion retorna un string del numero deseado en la base
	correspondiente
*/

char	*ft_numtostr(unsigned long long n, char *base)
{
	int		base_len;
	int		num_len;
	char	*str;

	if (!base)
		return (NULL);
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	num_len = ft_digits(n, base_len);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, num_len + 1);
	while (num_len--)
	{
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}

size_t	ft_digits(int n, int base_len)
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
