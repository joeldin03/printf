/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:28:27 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 15:30:50 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t n)
{
	unsigned char	*byte_ptr;
	unsigned char	byte_val;

	byte_ptr = ptr;
	byte_val = (unsigned char)val;
	while (n--)
		byte_ptr[n] = byte_val;
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char ptr[11];

	printf("%s\n", ft_memset(ptr, 'a', 10));
	printf("%s\n",memset(ptr, 'a', 10));
}
*/