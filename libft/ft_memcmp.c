/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:27:49 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:06 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;
	size_t				i;

	i = 0;
	byte_s1 = s1;
	byte_s2 = s2;
	while (i < n)
	{
		if (byte_s1[i] != byte_s2[i])
			return (byte_s1[i] - byte_s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	const void *s1 = "hola buenos dias";
	const void *s2 = "hola maalos dias";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("%d\n", memcmp(s1, s2, 6));
	printf("\n");
	printf("%d\n", ft_memcmp(s1, s2, 7));
	printf("%d\n", memcmp(s1, s2, 7));
	printf("\n");
	printf("%d\n", ft_memcmp(s1, s2, 14));
	printf("%d\n", memcmp(s1, s2, 14));
}
*/