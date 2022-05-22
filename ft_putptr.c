/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-tkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:57:58 by rben-tkh          #+#    #+#             */
/*   Updated: 2022/05/21 15:01:23 by rben-tkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(unsigned long adr, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (adr > 15)
		ft_convert((adr / 16), i);
	ft_putchar(base[(adr % 16)], i);
}

void	ft_putptr(void *p, int *i)
{
	unsigned long	adr;

	if (!p)
		ft_putstr("(nil)", i);
	else
	{
		adr = (unsigned long)p;
		ft_putstr("0x", i);
		ft_convert(adr, i);
	}
}
