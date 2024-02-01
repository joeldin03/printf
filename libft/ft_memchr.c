/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:27:37 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 16:58:06 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t n)
{
	size_t				i;
	const unsigned char	*byte_ptr;
	unsigned char		byte_val;

	i = 0;
	byte_ptr = ptr;
	byte_val = (unsigned char)val;
	while (i < n)
	{
		if (byte_ptr[i] == byte_val)
			return ((void *)ptr + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	void *str = "hola buenos dias";
	int letra = 'b';
	printf("%s\n", ft_memchr(str, letra, 8));
	printf("%s\n", memchr(str, letra, 8));
	printf("\n");
	printf("%s\n", ft_memchr(str, letra, 5));
	printf("%s\n", memchr(str, letra, 5));
}
*/