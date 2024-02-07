/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:43:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/07 21:00:34 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int	counter;

	if (n == -2147483648)
		return (ft_putstr_pf("-2147483648"));
	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar_pf('-');
		if (counter == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
		counter += ft_putnbr_pf(n / 10);
	return (counter + ft_putchar_pf('0' + n % 10));
}
