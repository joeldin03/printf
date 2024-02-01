/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:14:56 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 15:10:01 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	int letter = 'a';
	int number = '4';
	int	sign = '-';
	int space = ' ';
	int min_val = 0;
	int max_val = 127;
	int extended = 222;
	int notinrange = 502;

	printf("%d\n", ft_isascii(letter));
	printf("%d\n", isascii(letter));
	printf("\n");
	printf("%d\n", ft_isascii(number));
	printf("%d\n", isascii(number));
	printf("\n");
	printf("%d\n", ft_isascii(sign));
	printf("%d\n", isascii(sign));
	printf("\n");
	printf("%d\n", ft_isascii(space));
	printf("%d\n", isascii(space));
	printf("\n");
	printf("%d\n", ft_isascii(min_val));
	printf("%d\n", isascii(min_val));
	printf("\n");
	printf("%d\n", ft_isascii(max_val));
	printf("%d\n", isascii(max_val));
	printf("\n");
	printf("%d\n", ft_isascii(extended));
	printf("%d\n", isascii(extended));
	printf("\n");
	printf("%d\n", ft_isascii(notinrange));
	printf("%d\n", isascii(notinrange));
}
*/