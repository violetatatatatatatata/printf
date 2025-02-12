/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:02:59 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/12 15:19:07 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    *ft_memset(void *b, int c, size_t len);

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

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

void    *ft_memset(void *b, int c, size_t len)
{
    size_t          i;
    unsigned char   *ptr;

    ptr = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
