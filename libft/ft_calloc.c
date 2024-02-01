/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:24:06 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/16 14:14:18 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_calloc(5, 4));
	printf("%s\n", calloc(5, 4))	;
}
*/