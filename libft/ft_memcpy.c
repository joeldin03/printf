/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:27:59 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/23 19:41:17 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*byte_dest;
	unsigned const char	*byte_src;

	if (!dest && !src)
		return (0);
	byte_dest = dest;
	byte_src = src;
	while (n--)
		byte_dest[n] = byte_src[n];
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char	*src = "Hola";
	char		dest[5];

	printf("%s\n", ft_memcpy(dest, src, 2));
	printf("%s\n", memcpy(dest, src, 2));
}
*/
