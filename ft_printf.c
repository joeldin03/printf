/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:40:58 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:44:52 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(va_list arg, char c, int *count)
{
	if (c == 'c')
		ft_putchar_pf(va_arg(arg, int), count);
	else if (c == 's')
		ft_putstr_pf(va_arg(arg, char *), count);
	else if (c == 'p')
		ft_putptr_pf(va_arg(arg, unsigned long), count);
	else if (c == 'i' || c == 'd')
		ft_putnbr_pf(va_arg(arg, int), count);
	else if (c == 'u')
		ft_putuint_pf(va_arg(arg, unsigned int), count);
	else if (c == 'x')
		ft_puthex_pf(va_arg(arg, unsigned int), HEX_LC, count);
	else if (c == 'X')
		ft_puthex_pf(va_arg(arg, unsigned int), HEX_UC, count);
	else if (c == '%')
		ft_putchar_pf(c, count);
	return (*count);
}

int	ft_printf(char const *s, ...)
{
	va_list	ap;
	size_t	i;
	int		count;

	va_start(ap, s);
	i = 0;
	count = 0;
	while (s[i] && count != -1)
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_checkformat(ap, s[i], &count) == -1)
				return (-1);
		}
		else
			ft_putchar_pf(s[i], &count);
		if (s[i])
			i++;
	}
	va_end(ap);
	return (count);
}
