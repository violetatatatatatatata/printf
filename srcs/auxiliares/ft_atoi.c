/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:57:24 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:09:18 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * n);
}
/*
DESCRIPTION
       The atoi() function converts the initial portion of the
	   string pointed to by nptr to int
RETURN VALUE
       The converted value or 0 on error.
*/
/*
#include <stdio.h>
#include <stdlib.h>

// Prototip de la teva funció
int ft_atoi(const char *str);

int main(void)
{
    char *test_cases[] = {
        "42",           // Nombre positiu simple
        "-42",          // Nombre negatiu
        "   123",       // Amb espais al davant
        "   -123",      // Espais + signe negatiu
        "+456",         // Amb signe positiu explícit
        "0",            // Cas base: zero
        "2147483647",   // Límit superior d'un int
        "-2147483648",  // Límit inferior d'un int
        "9999999999",   // Número fora del rang d'un int
        "   +42abcd",   // Nombre vàlid seguit de caràcters no numèrics
        "--42",         // Signe incorrecte
        "abcd42",       // Caràcters abans del número
        NULL            // Final de la llista
    };

    for (int i = 0; test_cases[i] != NULL; i++)
    {
        int result = ft_atoi(test_cases[i]);
        printf("ft_atoi(\"%s\") = %d\n", test_cases[i], result);
    }

    return 0;
}
*/
