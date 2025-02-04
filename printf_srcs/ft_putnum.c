/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:58:36 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/02 18:58:37 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnum(int n, size_t *count, int base)
{
	if (base == 2)
		ft_putunsignint(n, &count);
	else if (base == 10)
		ft_putint(n, &count);
	else if (base == 16)
		ft_puthexmin(n, &count);
	else
		return ;
}
