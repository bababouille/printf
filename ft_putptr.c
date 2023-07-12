/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:17:36 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:49:11 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(size_t x, int *len)
{
	if (!x)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	if (x < 16)
	{
		ft_putstr("0x", len);
		ft_putchar("0123456789abcdef"[x % 16], len);
	}
	else
	{
		ft_putptr(x / 16, len);
		ft_putchar("0123456789abcdef"[x % 16], len);
	}
}
