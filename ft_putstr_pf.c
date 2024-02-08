/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:44:00 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/08 19:28:24 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s, int *count)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0' && *count != -1)
	{
		ft_putchar_pf(s[i], count);
		i++;
	}
	return (*count);
}
