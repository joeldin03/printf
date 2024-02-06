/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:43 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:05:00 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	unsigned long	address;
	int		counter;

	if (!ptr)
		return (ft_putstr_pf("0x0"));
	address = (unsigned long)ptr;
	counter = 0;
	counter += ft_putstr_pf("0x");
	counter += ft_puthex_pf(address, HEX_LC);
	return (counter);
}
