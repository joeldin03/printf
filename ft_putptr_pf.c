/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:43 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:47:04 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(unsigned long ptr, int *count)
{
	ft_putstr_pf("0x", count);
	ft_puthex_pf(ptr, HEX_LC, count);
	return (*count);
}
