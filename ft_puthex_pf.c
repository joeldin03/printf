/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:22 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:54:08 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned long int n, char *base, int *count)
{
	if (n >= 16 && *count != -1)
		ft_puthex_pf(n / 16, base, count);
	ft_putchar_pf(*(base + (n % 16)), count);
	return (*count);
}
