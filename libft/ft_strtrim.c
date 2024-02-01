/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:37:15 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 18:11:31 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscinstr(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && iscinstr(set, s1[start]))
		start++;
	while (end > start && iscinstr(set, s1[end - 1]))
		end--;
	strtrim = (char *)malloc((end - start + 1) * sizeof(char));
	if (strtrim == NULL)
		return (0);
	i = 0;
	while (start < end)
		strtrim[i++] = s1[start++];
	strtrim[i] = '\0';
	return (strtrim);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "abab_aba_ababab";
	char *set = "ba";
	printf("%s\n", ft_strtrim(str, set));
}
*/
