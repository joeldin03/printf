/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:57:01 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 16:24:36 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", tolower('A'));
	printf("\n");
	printf("%d\n", ft_tolower('z'));
    printf("%d\n", tolower('z'));
	printf("\n");
	printf("%d\n", ft_tolower('4'));
    printf("%d\n", tolower('4'));
	printf("\n");
    printf("%d\n", ft_tolower('+'));
    printf("%d\n", tolower('+'));
}
*/
