/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:46:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/07 20:59:02 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

# define HEX_LC "0123456789abcdef"
# define HEX_UC "0123456789ABCDEF"

int	ft_printf(char const *s, ...);
int	ft_putchar_pf(char c, int *count);
int	ft_putstr_pf(char *s, int *count);
int	ft_putnbr_pf(int n, int *count);
int	ft_putuint_pf(unsigned int n, int *count);
int	ft_puthex_pf(unsigned long int n, char *base, int *count);
int	ft_putptr_pf(unsigned long ptr, int *count);

#endif
