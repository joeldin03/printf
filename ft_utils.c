/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:42:36 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:35:12 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_number(long n)
{
	int	len;

	len = 0;
	if (n < 0)
		n = -n;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	len_hexnumber(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*decimaltohex(unsigned int n, char *base)
{
	int		len;
	char	*s;

	len = len_hexnumber(n);
	s = malloc(len + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	while (len--)
	{
		s[len] = base[n % 16];
		n /= 16;
	}
	return (s);
}
