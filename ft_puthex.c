/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:07:56 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:50:17 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int x, char *b, int *len)
{
	long int	xx;

	xx = x;
	if (xx / 16 == 0)
		ft_putchar(b[xx % 16], len);
	else
	{
		ft_puthex(xx / 16, b, len);
		ft_putchar(b[xx % 16], len);
	}
}
