/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:02:00 by avelandr          #+#    #+#             */
/*   Updated: 2025/02/12 15:21:29 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define HEX_LWBASE "0123456789abcdef"
# define HEX_UPBASE "0123456789ABCDEF"
# define DEC_BASE "0123456789"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_hexpointer(void *ptr, size_t *count);
char	*ft_numtostr(unsigned long long n, char *base);
size_t	ft_printf(char const *str, ...);
void	ft_putchar(char c, size_t *count);
void	ft_puthex(unsigned int num, size_t *count, char *base);
void	ft_putnum(int n, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putunsignint(unsigned int n, size_t *count);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
