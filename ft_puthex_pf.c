/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:22 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/07 19:56:47 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned long int n, char *base)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += ft_puthex_pf(n / 16, base);
	counter += ft_putchar_pf(*(base + (n % 16)));
	return (counter);
}
