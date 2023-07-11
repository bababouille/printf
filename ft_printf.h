/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:27:25 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/11 18:12:08 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putlchar(char x, int *len);
void	ft_putlstr(char *str, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putlhex(unsigned int n, char *b, int *len);
void	ft_putptr(size_t x, int *len);

#endif