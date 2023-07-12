/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:50:45 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:49:53 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_findformat(va_list arguments, char x, int *length)
{
	if (x == 'c')
		ft_putchar(va_arg(arguments, int), length);
	else if (x == 's')
		ft_putstr(va_arg(arguments, char *), length);
	else if (x == 'd')
		ft_putnbr(va_arg(arguments, int), length);
	else if (x == 'i')
		ft_putnbr(va_arg(arguments, int), length);
	else if (x == 'u')
		ft_putnbr(va_arg(arguments, unsigned int), length);
	else if (x == 'x')
		ft_puthex(va_arg(arguments, unsigned int), "0123456789abcdef", length);
	else if (x == 'X')
		ft_puthex(va_arg(arguments, unsigned int), "0123456789ABCDEF", length);
	else if (x == 'p')
		ft_putptr(va_arg(arguments, size_t), length);
	else if (x == '%')
		ft_putchar('%', length);
}

/*This function prints the string 'str' while replacing the 
	identifiers (%cspdiuxX) with values from va_list*/

int	ft_printf(const char *format, ...)
{
	int		index;
	int		length;
	va_list	arguments;

	index = 0;
	length = 0;
	va_start(arguments, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
			ft_findformat(arguments, format[++index], &length);
		else
			ft_putchar(format[index], &length);
		index++;
	}
	va_end(arguments);
	return (length);
}

// int main(void)
// {
// 	char *s = "veritasium";
// 	char c = 'u';
// 	int d = 69;
// 	int u = 123456;
// 	int x = 64;
// 	ft_printf("test %s, %c, %d, %u, %x", s, c, d, u, x);
// }