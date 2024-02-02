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

void	ft_puthex_pf(unsigned int n, size_t *counter, char *base)
{
	char	*s;

	s = ft_decimaltohex(n, base);
	ft_putstr_pf(s, counter);
	free(s);
}
