/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:12:08 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/19 17:34:43 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	len_number(long n)
{
	long	len;

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

static int	isnegative(int n)
{
	return (n < 0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	long	long_n;

	long_n = n;
	digits = len_number(long_n);
	result = (char *)ft_calloc(digits + isnegative(n) + 1, sizeof(char));
	if (!result)
		return (0);
	if (long_n < 0)
	{
		long_n = -long_n;
		result[0] = '-';
	}
	while (digits)
	{
		result[digits + isnegative(n) - 1] = (long_n % 10) + '0';
		digits--;
		long_n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(123456));
}
*/
