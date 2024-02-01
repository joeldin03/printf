/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:29:56 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 15:31:47 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[counter] != '\0')
		counter++;
	return (counter);
}

/*
#include <stdio.h>
#include <string.h>
int main() 
{
	char dest[20];
	const char *src = "hola buenos dias";

	char dest2[20];
	const char *src2 = "hola buenos dias";

	printf("%zu\n", ft_strlcpy(dest, src, 8));
	printf("%s\n", dest);
	printf("\n");
	printf("%zu\n", strlcpy(dest2, src2, 8));
	printf("%s\n", dest2);
}
*/