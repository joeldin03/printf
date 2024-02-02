/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:42:04 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:05:06 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int n, size_t *counter)
{
	unsigned long	longn;

	longn = n;
	if (longn >= 10)
		ft_putuint_pf(n / 10, counter);
	ft_putchar_pf('0' + longn % 10, counter);
}
