/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:49:23 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:49:24 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long x, int *len)
{
	if (x < 0)
	{
		ft_putchar('-', len);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10, len);
		ft_putnbr(x % 10, len);
	}
	else
		ft_putchar(x + '0', len);
}
