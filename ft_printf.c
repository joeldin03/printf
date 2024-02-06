/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:40:58 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:04:41 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(va_list arg, char *s)
{
	if (*s == 'c')
		return (ft_putchar_pf(va_arg(arg, int)));
	else if (*s == 's')
		return (ft_putstr_pf(va_arg(arg, char *)));
	else if (*s == 'p')
		ft_putptr_pf(va_arg(arg, void *));
	else if (*s == 'i' || *s == 'd')
		return (ft_putnbr_pf(va_arg(arg, int)));
	else if (*s == 'u')
		return (ft_putuint_pf(va_arg(arg, unsigned int)));
	else if (*s == 'x')
		return (ft_puthex_pf(va_arg(arg, unsigned int), HEX_LC));
	else if (*s == 'X')
		return (ft_puthex_pf(va_arg(arg, unsigned int), HEX_UC));
	else if (*s == '%')
		return (ft_putchar_pf(*s));
	return (-1);
}

int	ft_printf(char const *s, ...)
{
	va_list	arg;
	size_t	counter;

	if (!s)
		return (-1);
	counter = 0;
	va_start(arg, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			counter += ft_checkformat(arg, (char *)s);
		}
		else
			counter += ft_putchar_pf(*s);
		s++;
	}
	va_end(arg);
	return (counter);
}
