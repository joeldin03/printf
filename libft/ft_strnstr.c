/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:30:13 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 18:09:27 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hola buenos dias";
	char *to_find1 = "buenos";
	char *to_find2 = "\0";
	char *to_find3 = "pato";

	printf("%s\n", ft_strnstr(str, to_find1, 4));
	printf("%s\n", strnstr(str, to_find1, 4));
	printf("\n");
	printf("%s\n", ft_strnstr(str, to_find1, 16));
	printf("%s\n", strnstr(str, to_find1, 16));
	printf("\n");
	printf("%s\n", ft_strnstr(str, to_find2, 16));
	printf("%s\n", strnstr(str, to_find2, 16));
	printf("\n");
	printf("%s\n", ft_strnstr(str, to_find3, 16));
	printf("%s\n", strnstr(str, to_find3, 16));
}
*/
