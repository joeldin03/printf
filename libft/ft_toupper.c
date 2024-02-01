/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:43:04 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 16:25:08 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", toupper('A'));
	printf("\n");
	printf("%d\n", ft_toupper('z'));
    printf("%d\n", toupper('z'));
	printf("\n");
	printf("%d\n", ft_toupper('4'));
    printf("%d\n", toupper('4'));
	printf("\n");
    printf("%d\n", ft_toupper('+'));
    printf("%d\n", toupper('+'));
}
*/
