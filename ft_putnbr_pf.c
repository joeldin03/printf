/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:43:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:04:57 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *counter)
{
	long	longn;

	longn = n;
	if (longn < 0)
	{
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(-n, counter);
	}
	if (longn >= 10)
		ft_putnbr_pf(n / 10, counter);
	ft_putchar_pf('0' + longn % 10, counter);
}
