/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:59:57 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/15 15:27:45 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*byte_str;
	size_t			i;

	i = 0;
	byte_str = str;
	while (i < n)
	{
		byte_str[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>
int	main()
{
	char str1[5] = "hola";
	char str2[5] = "hola";
	bzero(str1, 4);
	ft_bzero(str2, 4);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
*/
