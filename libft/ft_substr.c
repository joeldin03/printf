/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:58:53 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 18:12:48 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start <= ft_strlen(s))
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (substr == NULL)
			return (0);
		while (i < len)
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	else
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (substr == NULL)
			return (0);
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int	main()
{
	char	*s = "hola buenos dias";
	printf("%s\n", ft_substr(s, 5, 6));
}
*/
