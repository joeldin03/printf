/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:43:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:53:49 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n, int *count)
{
	if (n == -2147483648 && *count != -1)
	{
		ft_putstr_pf("-2147483648", count);
		return (*count);
	}
	if (n < 0 && *count != -1)
	{
		ft_putchar_pf('-', count);
		n = -n;
	}
	if (n >= 10 && *count != -1)
		ft_putnbr_pf(n / 10, count);
	ft_putchar_pf('0' + n % 10, count);
	return (*count);
}
