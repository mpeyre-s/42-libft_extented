/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:40:46 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/26 11:30:39 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int		ft_printf(const char *str, ...);
int		printhub(char type, va_list parameters);

int		print_char(int c);
int		print_string(char *str);
int		print_percent(char c);

int		print_base10(int nb);
int		print_unsigned10(unsigned int nb);

int		print_hex(void *ptr);

int		hexhub(unsigned int nb, char type);
void	print_hexlower(unsigned int nb);
void	print_hexlower(unsigned int nb);

#endif
