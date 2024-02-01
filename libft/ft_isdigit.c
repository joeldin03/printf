/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:02:28 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 13:21:14 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
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

	printf("%d\n", ft_isdigit(letter));
	printf("%d\n", isdigit(letter));
	printf("\n");
	printf("%d\n", ft_isdigit(number));
	printf("%d\n", isdigit(number));
	printf("\n");
	printf("%d\n", ft_isdigit(sign));
	printf("%d\n", isdigit(sign));
	printf("\n");
	printf("%d\n", ft_isdigit(space));
	printf("%d\n", isdigit(space));
	printf("\n");
}
*/