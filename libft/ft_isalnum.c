/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:09:09 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/17 15:40:35 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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

	printf("%d\n", ft_isalnum(letter));
	printf("%d\n", isalnum(letter));
	printf("\n");
	printf("%d\n", ft_isalnum(number));
	printf("%d\n", isalnum(number));
	printf("\n");
	printf("%d\n", ft_isalnum(sign));
	printf("%d\n", isalnum(sign));
	printf("\n");
	printf("%d\n", ft_isalnum(space));
	printf("%d\n", isalnum(space));
	printf("\n");
}
*/