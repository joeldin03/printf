/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:42:04 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:08:20 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint_pf(unsigned int n, int *count)
{
	if (n >= 10 && *count != -1)
		ft_putuint_pf(n / 10, count);
	ft_putchar_pf('0' + n % 10, count);
	return (*count);
}
