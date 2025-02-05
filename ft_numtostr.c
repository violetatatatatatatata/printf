/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:24:16 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 16:45:45 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_digits(int n, char *base);
void    *ft_calloc(size_t nmemb, size_t size);
size_t  ft_strlen(const char *s);

/*
	Esta funcion retorna un string del numero deseado en la base
	correspondiente
*/

char	ft_numtostr(unsigned long long n, char *base)
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size && nmemb > ((size_t) - 1) / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
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
