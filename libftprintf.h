/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:46:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/31 18:27:06 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

# define HEX_LC "0123456789abcdef"
# define HEX_UC "0123456789ABCDEF"

int     ft_printf(char const *s, ...);

void    ft_putchar_pf(char c, size_t *counter);
void	ft_putstr_pf(char *s, size_t *counter);
void	ft_putnbr_pf(int n, size_t *counter);
void	ft_putuint_pf(unsigned int n, size_t *counter);
char	*ft_decimaltohex(unsigned int n, char *base);
void	ft_puthex_pf(unsigned int n, size_t *counter, char *base);
void	ft_putptr_pf(void *ptr, size_t *counter);

#endif
