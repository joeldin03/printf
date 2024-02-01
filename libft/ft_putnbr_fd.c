/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:42:49 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/23 18:29:56 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	longnb;

	longnb = n;
	if (longnb < 0)
	{
		ft_putchar_fd('-', fd);
		longnb = -longnb;
	}
	if (longnb >= 10)
		ft_putnbr_fd(longnb / 10, fd);
	ft_putchar_fd('0' + longnb % 10, fd);
}
/*
int	main()
{
	ft_putnbr_fd(-127, 1);
}
*/
