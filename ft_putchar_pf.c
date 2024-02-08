/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:43:11 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 20:51:47 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c, int *count)
{
	if (*count == -1)
		return (*count);
	if (write (1, &c, 1) == -1)
	{
		*count = -1;
		return (*count);
	}
	(*count)++;
	return (*count);
}
