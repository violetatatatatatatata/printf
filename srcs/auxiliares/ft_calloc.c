/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:53:06 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:10:35 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
DESCRIPTION
	The malloc() function allocates size bytes and returns a pointer to the
	allocated memory.  The memory is not initialized.  If size is 0, then
	malloc()  returns  either  NULL,  or  a  unique pointer value that can
	later be successfully passed to free().
	The  calloc()  function allocates memory for an array of nmemb elements
	of size bytes each and returns a pointer to the allocated memory.
	The memory is set to zero.  If nmemb or size is 0, then  calloc() returns
	either NULL, or a unique pointer value that can later be successfully
    passed to free().  If the multiplication of nmemb and size would result
	in  integer  overflow, then calloc() returns an error. By contrast, an
	integer overflow would not be detected in the following call to malloc(),
	with the result that an incorrectly sized block of memory would be
    allocated:       malloc(nmemb * size);

RETURN VALUE
       The  malloc()  and calloc() functions return a pointer to the
	   allocated memory, which is suit‐ably aligned for any built-in type.
	   On error, these functions return NULL.
*/
/*
#include <stdio.h>
#include <stdlib.h>  // Per comparar amb calloc original

// Prototip de la teva funció
void *ft_calloc(size_t count, size_t size);

void print_bytes(const void *ptr, size_t size)
{
    unsigned char *bytes = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02x ", bytes[i]);
    printf("\n");
}

int main(void)
{
    size_t elements = 5;
    size_t elem_size = sizeof(int);

    int *arr1 = (int *)ft_calloc(elements, elem_size);
    int *arr2 = (int *)calloc(elements, elem_size);

    if (!arr1 || !arr2)
    {
        printf("Error: No s'ha pogut reservar memòria.\n");
        return 1;
    }

    printf("Memòria de ft_calloc:\n");
    print_bytes(arr1, elements * elem_size);

    printf("Memòria de calloc original:\n");
    print_bytes(arr2, elements * elem_size);

    free(arr1);
    free(arr2);

    return 0;
}
*/
