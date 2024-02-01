/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:29:50 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 14:59:56 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	s_len = 0;
	while (dest[d_len] != '\0' && d_len < size)
		d_len++;
	if (d_len < size - 1 && size != 0)
	{
		while (src[s_len] != '\0' && d_len + s_len < size - 1)
		{
			dest[d_len + s_len] = src[s_len];
			s_len++;
		}
		dest[d_len + s_len] = '\0';
	}
	while (src[s_len] != '\0')
		s_len++;
	return (d_len + s_len);
}

/*
#include <stdio.h>
#include <string.h>
int main() 
{
    char dest[100] = "Hello, ";
    const char *src = "world!";
	char dest2[100] = "Hello, ";
    const char *src2 = "world!";

    size_t result = ft_strlcat(dest, src, 50);

    printf("%s\n", dest);
    printf("%zu\n", result);

	size_t result_ = strlcat(dest2, src2, 50);

    printf("%s\n", dest2);
    printf("%zu\n", result_);
    return 0;
}
*/