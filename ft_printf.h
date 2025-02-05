/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:02:00 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/05 17:06:59 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define LWHEX_BASE "0123456789abcdef"
# define UPHEX_BASE "0123456789ABCDEF"
# define DEC_BASE "0123456789"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_hexpointer(unsigned int num, size_t *count, char *base);
char	ft_numtostr(unsigned long long n, char *base);
size_t	ft_print(char const *str, ...);
void	ft_putchar(char c, size_t *count);
void	ft_puthex(unsigned int num, size_t *count, char *base);
void	ft_putnum(int n, size_t *count, int base);
void	ft_putstr(char *str, size_t *count);
void	ft_putunsignint(unsigned int n, size_t *count);

#endif
