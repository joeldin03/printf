/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:40:58 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/07 19:41:43 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_putptr_pf(va_arg(arg, void *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr_pf(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putuint_pf(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_pf(va_arg(arg, unsigned int), HEX_LC));
	else if (c == 'X')
		return (ft_puthex_pf(va_arg(arg, unsigned int), HEX_UC));
	else if (c == '%')
		return (ft_putchar_pf(c));
	return (-1);
}

int	ft_printf(char const *s, ...)
{
	va_list	ap;
	size_t	i;
	int		print_count;
	int		len_print;

	va_start(ap, s);
	i = 0;
	print_count = 0;		
	len_print = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			len_print = ft_checkformat(ap, s[++i]);
			if (len_print == -1)
				return (-1);
			print_count += len_print;
			i++;
			continue ;
		}
		write(1, &s[i++], 1);
		print_count++;
	}
	va_end(ap);
	return (print_count);
}
