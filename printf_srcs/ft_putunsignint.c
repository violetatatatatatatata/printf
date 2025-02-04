/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:58:10 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/02 18:58:11 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putunsignint(int n, size_t *count)
{
	n = (unsigned int)n;
	ft_putint(n, &count)
}
