/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:58:10 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 16:49:51 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignint(unsigned int n, size_t *count)
{
	char	*s;

	ft_numtostr(n, DEC_BASE);
	ft_putstr(n, count);
	free(str)
}
