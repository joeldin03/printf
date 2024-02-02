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

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	size_t	address;
	char	*s;

	address = (unsigned long)ptr;
	s = ft_decimaltohex(address, HEX_LC);
	ft_putstr_pf("0x", counter);
	ft_putstr_pf(s, counter);
	free(s);
}
