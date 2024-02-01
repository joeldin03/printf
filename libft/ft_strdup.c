/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:29:09 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/23 19:58:21 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *str = "hola buenos dias";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}
*/
