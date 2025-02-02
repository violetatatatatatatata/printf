/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:51:02 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:10:19 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
DESCRIPTION
       The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.

       The  explicit_bzero()  function  performs the same task as bzero().  It
       differs from bzero() in that it guarantees that compiler  optimizations
       will  not  remove  the erase operation if the compiler deduces that the
       operation is "unnecessary".

RETURN VALUE
       None.

*/
/*
#include <stdio.h>
#include <strings.h>  // Per comparar amb bzero original

// Prototip de la teva funció
void ft_bzero(void *s, size_t n);

void print_bytes(const void *ptr, size_t size)
{
    unsigned char *bytes = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02x ", bytes[i]);
    printf("\n");
}

int main(void)
{
    char buffer1[10] = "ABCDEFGHI"; // Cadena inicial
    char buffer2[10] = "ABCDEFGHI"; // Per comparar

    printf("Abans de bzero:\n");
    print_bytes(buffer1, 10);

    ft_bzero(buffer1, 5);
    printf("Després de ft_bzero (5 bytes):\n");
    print_bytes(buffer1, 10);

    bzero(buffer2, 5);
    printf("Després de bzero original (5 bytes):\n");
    print_bytes(buffer2, 10);

    return 0;
}
*/
