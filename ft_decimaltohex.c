/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimaltohex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:42:36 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:35:12 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_hexlen(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_decimaltohex(unsigned int n, char *base)
{
	size_t	len;
	char	*s;

	len = ft_hexlen(n);
	s = malloc(len + 1);
	if (!s)
		return (0);
	while (len--)
	{
		s[len] = base[n % 16];
		n /= 16;
	}
	s[len] = '\0';
	return (s);
}
