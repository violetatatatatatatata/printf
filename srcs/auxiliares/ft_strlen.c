/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:44:11 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/24 14:45:14 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, world!";;
	size_t	len;

	len = ft_strlen(str);
	printf("Length of the string: %zu\n", len);
	return (0);
}
*/
