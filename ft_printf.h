/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:27:25 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:20:37 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char x, int *len);
void	ft_putstr(char *x, int *len);
void	ft_putnbr(long x, int *len);
void	ft_puthex(unsigned int x, char *b, int *len);
void	ft_putptr(size_t x, int *len);

#endif