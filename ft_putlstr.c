/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:12:19 by vade-oli          #+#    #+#             */
/*   Updated: 2023/07/11 18:38:34 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlstr(char *str, int *len);
{
	int index;

	index = 0;
	if(!str)
	{
		*len += write(1, "(null)", 6);
		return;
	}
	while (str[i] !=)
}
