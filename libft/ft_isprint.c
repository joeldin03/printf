/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:20:25 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 13:21:14 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
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
	int null = 0;
	int control = 31;
	int del = 127;
	int extended = 128; 

	printf("%d\n", ft_isprint(letter));
	printf("%d\n", isprint(letter));
	printf("\n");
	printf("%d\n", ft_isprint(number));
	printf("%d\n", isprint(number));
	printf("\n");
	printf("%d\n", ft_isprint(sign));
	printf("%d\n", isprint(sign));
	printf("\n");
	printf("%d\n", ft_isprint(space));
	printf("%d\n", isprint(space));
	printf("\n");
	printf("%d\n", ft_isprint(null));
	printf("%d\n", isprint(null));
	printf("\n");
	printf("%d\n", ft_isprint(control));
	printf("%d\n", isprint(control));
	printf("\n");
	printf("%d\n", ft_isprint(del));
	printf("%d\n", isprint(del));
	printf("\n");
	printf("%d\n", ft_isprint(extended));
	printf("%d\n", isprint(extended));
}
*/