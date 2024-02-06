/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:41:22 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:04:54 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int n, char *base)
{
	char	*s;

	s = decimaltohex(n, base);
	ft_putstr_pf(s);
	free(s);
	return (len_hexnumber(n));
}
