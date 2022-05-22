/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-tkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:51:37 by rben-tkh          #+#    #+#             */
/*   Updated: 2022/05/20 16:17:28 by rben-tkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(int c, int *i);
void	ft_puthex(unsigned int n, char *base, int *i);
void	ft_putnbr(int n, int *i);
void	ft_putptr(void *p, int *i);
void	ft_putstr(char *s, int *i);
void	ft_putunbr(unsigned int n, int *i);

#endif
