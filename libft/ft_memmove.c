/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:28:18 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 17:35:45 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*byte_dest;
	unsigned const char	*byte_src;
	size_t				i;

	if (!dest && !src)
		return (0);
	byte_dest = dest;
	byte_src = src;
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			byte_dest[i] = byte_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			byte_dest[i] = byte_src[i];
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[50] = "adios mundo";
	char src[100] = "hola que tal";
	printf("%s\n", ft_memmove(dest, src, strlen(src) + 1));
	printf("%s\n", memmove(dest, src, strlen(src) + 1));
}
*/
