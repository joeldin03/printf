/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:43 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/07 19:54:45 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	unsigned long	address;

	if (!ptr)
	{
		if (ft_putstr_pf("0x0") == -1)
			return (-1);
		else
			return (3);
	}
	address = (unsigned long)ptr;
	if (ft_putstr_pf("0x") == -1)
		return (-1);
	return (ft_puthex_pf(address, HEX_LC) + 2);
}
