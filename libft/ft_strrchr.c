/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:30:17 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/18 13:00:11 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*last_c;

	i = 0;
	last_c = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			last_c = (char *)str + i;
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
		last_c = (char *)str + i;
	return (last_c);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str1 = "hola buenas tardes";
	char *str2 = "aaa1aa1a";
	char *str3 = "tripouille";

	printf("%s\n", ft_strrchr(str1, ' '));
	printf("%s\n", strrchr(str1, ' '));
	printf("\n");
	printf("%s\n", ft_strrchr(str2, 'b'));
	printf("%s\n", strrchr(str2, 'b'));
	printf("\n");
	printf("%s\n", ft_strrchr(str3, 't' + 256));
	printf("%s\n", strrchr(str3, 't' + 256));
}
*/
