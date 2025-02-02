/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:03:23 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/31 18:10:33 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
(Integer to ASCII) es una función que convierte un número entero en una cadena
de caracteres (char *), es decir, transforma un int en una string.
*/

static int	num_str_len(int n);
static long	itol_abs(int n);

char	*ft_itoa(int n)
{
	int		num_len;
	long	n_long;
	char	*n_str;

	num_len = num_str_len(n);
	n_str = (char *)malloc((num_len + 1) * sizeof(char));
	if (!n_str)
		return (NULL);
	n_long = itol_abs(n);
	if (n == 0)
	{
		n_str[0] = '0';
		n_str[1] = '\0';
		return (n_str);
	}
	if (n < 0)
		n_str[0] = '-';
	n_str[num_len] = '\0';
	while (n_long > 0)
	{
		n_str[num_len - 1] = (n_long % 10) + '0';
		n_long = n_long / 10;
		num_len--;
	}
	return (n_str);
}

static int	num_str_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static long	itol_abs(int n)
{
	if (n < 0)
		return ((long)n * -1);
	return ((long)n);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Prototip de la teva funció
char *ft_itoa(int n);

int main(void)
{
    int test_values[] = {0, 42, -42, 123456, -987654, 2147483647, -2147483648};
    size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (size_t i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(test_values[i]);
        if (result)
        {
            printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
            free(result); // Alliberem la memòria per evitar fuites
        }
        else
        {
            printf("Error convertint %d\n", test_values[i]);
        }
    }

    return 0;
}
*/
/*
Divideix repetidament el número per la base per extreure cada dígit.
Guarda els dígits en un buffer en ordre invers.
Si el número és negatiu i la base és 10, afegeix el signe -.
Inverteix la cadena per obtenir el resultat correcte.
*/
