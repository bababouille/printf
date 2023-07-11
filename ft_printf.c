/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:50:45 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/11 18:10:21 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_findformat(va_list arguments, char x, int *length)
{
	if (x == 'c')
		ft_putlchar(va_arg(arguments, int), length);
	if (x == 's')
		ft_putlstr(va_arg(arguments, char *), length);
	if (x == 'd')
		ft_putlnbr(va_arg(arguments, int), length);
	if (x == 'i')
		ft_putlnbr(va_arg(arguments, int), length);
	if (x == 'u')
		ft_putlnbr(va_arg(arguments, unsigned int), length);
	if (x == 'x')
		ft_putlhex(va_arg(arguments, unsigned int), length);
	if (x == 'X')
		ft_putlhex(va_arg(arguments, unsigned int), length);
	if (x == 'p')
		ft_putptr(va_arg(arguments, unsigned long int), length);
	if (x == '%')
		ft_putlchar('%', length);

}
int	ft_printf(const char *format, ...)
{
	int	index;
	int	length;
	va_list arguments;

	index = 0;
	length = 0;
	va_start(arguments, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
			ft_findformat(arguments, format[++index], &length);
		else
			ft_putlchar(format[index], &length);
		index++;
	}
	va_end(arguments);
	return (length);
}