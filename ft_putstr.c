/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:12:19 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/12 18:18:23 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *x, int *len)
{
	int	index;

	index = 0;
	if (!x)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (x[index] != '\0')
	{
		write(1, &x[index], 1);
		*len += 1;
		index++;
	}
}
