/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:48:53 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/17 14:16:05 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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

	printf("%d\n", ft_isalpha(letter));
	printf("%d\n", isalpha(letter));
	printf("\n");
	printf("%d\n", ft_isalpha(number));
	printf("%d\n", isalpha(number));
	printf("\n");
	printf("%d\n", ft_isalpha(sign));
	printf("%d\n", isalpha(sign));
	printf("\n");
	printf("%d\n", ft_isalpha(space));
	printf("%d\n", isalpha(space));
	printf("\n");
}
*/